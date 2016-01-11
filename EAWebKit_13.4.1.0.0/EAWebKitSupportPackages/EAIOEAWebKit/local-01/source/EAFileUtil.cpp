/*
Copyright (C) 2007,2009, 2011, 2012 Electronic Arts, Inc.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1.  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
3.  Neither the name of Electronic Arts, Inc. ("EA") nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ELECTRONIC ARTS AND ITS CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ELECTRONIC ARTS OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/////////////////////////////////////////////////////////////////////////////
// EAFileUtil.cpp
// 
// Created by Paul Pedriana - 2007
//
// Implements various file and directory manipulation functions.
/////////////////////////////////////////////////////////////////////////////


#include <EAIO/internal/Config.h>
#include <EABase/eabase.h>
#include <EAIO/EAFileBase.h>
#include <EAIO/EAFileDirectory.h>
#include <EAIO/EAFileStream.h>
#include <EAIO/EAFileUtil.h>
#include <EAIO/FnEncode.h>
#include <EAIO/PathString.h>
#include <string.h>
#include <time.h>
#include EA_ASSERT_HEADER


#ifdef _MSC_VER
    #pragma warning(disable: 4127) // conditional expression is constant
#endif


namespace
{
    // EAIOItoa16
    // Convert an unsigned integer to a wide-character string (decimal).
    // The buffer parameter must hold at least 16 characters.
    // Returns a pointer to somewhere within the input buffer.
    char16_t* EAIOItoa16(uint32_t value, char16_t* buffer)
    {
        buffer[15] = 0;
        uint32_t i = 14;
        
        // Write out the character representation of 'value' starting with the highest power of 10
        for (; value > 0; value /= 10)
            buffer[i--] = (char16_t)('0' + (value % 10));

        return &buffer[i + 1];
    }

    char8_t* EAIOItoa8(uint32_t value, char8_t* buffer)
    {
        buffer[15] = 0;
        uint32_t i = 14;
        
        // Write out the character representation of 'value' starting with the highest power of 10
        for (; value > 0; value /= 10)
            buffer[i--] = (char8_t)('0' + (value % 10));

        return &buffer[i + 1];
    }

}


namespace EA
{

namespace IO
{





////////////////////////////////////////////////////////////////////////////
// gpTempDirectory
//
// Temporary directory that the user can specify to take precedence over 
// a system default temp directory. The user can use the GetTempDirectory
// and SetTempDirectory functions to get and set this value.
//
const uint32_t kTempDirectoryLength             = kMaxDirectoryLength + 1;
char16_t gpTempDirectory[kTempDirectoryLength]  = { 0 };



////////////////////////////////////////////////////////////////////////////
// gpCurrentWorkingDirectory
//
// This holds the current working directory. On platforms whereby the system
// supports the concept of current working directory, this value is not defined.
// On platforms whereby the the system does not support the concept of a 
// current working directory, this value is defined. The user can use 
// GetCurrentWorkingDirectory and SetCurrentWorkingDirectory to get and set
// this value.
//
// Note: A weakness of this variable is that system file io code is not aware
// of it and cannot use it. It can only be of use if the user intervenes and 
// reads this value before calling system file io functions.
//
    const uint32_t kCWDLength                       = kMaxDirectoryLength + 1;
    char16_t gpCurrentWorkingDirectory[kCWDLength]  = { 0 };
    bool     gbCurrentWorkingDirectoryInitialized   = false;



////////////////////////////////////////////////////////////////////////////
// DriveInfo16::DriveInfo16
//
DriveInfo16::DriveInfo16(const char16_t* pName, DriveType driveType)
    : mType(driveType)
{
    if(pName)
        mName.assign(pName);
}


////////////////////////////////////////////////////////////////////////////
// DriveInfo8::DriveInfo8
//
DriveInfo8::DriveInfo8(const char8_t* pName, DriveType driveType)
    : mType(driveType)
{
    if(pName)
        mName.assign(pName);
}


////////////////////////////////////////////////////////////////////////////
// File::Create
//
EAIO_API bool File::Create(const char16_t* pPath, bool bTruncate)
{
        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath; (void)bTruncate;        
        return false;

}

EAIO_API bool File::Create(const char8_t* pPath, bool bTruncate)
{
    using namespace Path;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath; (void)bTruncate;        
        return false;

}


////////////////////////////////////////////////////////////////////////////
// File::Exists
//
EAIO_API bool File::Exists(const char16_t* pPath)
{
    if(pPath && *pPath)
    {
            EA_FAIL_M("Unimplemented");
            // Bug Paul Pedriana to finish this for the given platform.
    }

    return false;
}

EAIO_API bool File::Exists(const char8_t* pPath)
{
    using namespace Path;

    if(pPath && *pPath)
    {
            EA_FAIL_M("Unimplemented");
            // Bug Paul Pedriana to finish this for the given platform.
    }

    return false;
}



////////////////////////////////////////////////////////////////////////////
// File::PatternExists
//
EAIO_API bool File::PatternExists(const char16_t* pPathPattern)
{
    using namespace Path;

    // The EntryFindFirst function requires a valid directory path.
    // We must split pPathPattern into a directory and file component.
    const char16_t* const pFileNamePattern = Path::GetFileName(pPathPattern);
    PathString16 directory16(pPathPattern, pFileNamePattern);

    EntryFindData entryFindData;
    EntryFindData* const pEntryFindData = EntryFindFirst(directory16.c_str(), pFileNamePattern, &entryFindData);

    if(pEntryFindData)
        EntryFindFinish(pEntryFindData);

    return (pEntryFindData != NULL);
}

EAIO_API bool File::PatternExists(const char8_t* pPathPattern)
{
    using namespace Path;

    PathString16 pathPattern16;
    ConvertPathUTF8ToUTF16(pathPattern16, pPathPattern);

    return PatternExists(pathPattern16.c_str());
}




////////////////////////////////////////////////////////////////////////////
// File::IsWritable
//
EAIO_API bool File::IsWritable(const char16_t* pPath)
{
    // Todo: Complete this function properly. The current implementation
    //       of reading the attribute isn't enough for a rigorous test.
    return (GetAttributes(pPath) & kAttributeWritable) != 0;
}

EAIO_API bool File::IsWritable(const char8_t* pPath)
{
    // Todo: Complete this function properly. The current implementation
    //       of reading the attribute isn't enough for a rigorous test.
    return (GetAttributes(pPath) & kAttributeWritable) != 0;
}




////////////////////////////////////////////////////////////////////////////
// File::Remove
//
EAIO_API bool File::Remove(const char16_t* pPath)
{
        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath;
        return false;

}

EAIO_API bool File::Remove(const char8_t* pPath)
{
    using namespace Path;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath;
        return false;

}


////////////////////////////////////////////////////////////////////////////
// File::Move
//
EAIO_API bool File::Move(const char16_t* pPathSource, const char16_t* pPathDestination, bool bOverwriteIfPresent)
{
    using namespace EA::IO::Path;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
         (void)pPathSource; (void)pPathDestination; (void)bOverwriteIfPresent;
        return false;

}

EAIO_API bool File::Move(const char8_t* pPathSource, const char8_t* pPathDestination, bool bOverwriteIfPresent)
{
    using namespace Path;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
         (void)pPathSource; (void)pPathDestination; (void)bOverwriteIfPresent;
        return false;

}



///////////////////////////////////////////////////////////////////////////////
// File::Copy
//
EAIO_API bool File::Copy(const char16_t* pPathSource, const char16_t* pPathDestination, bool bOverwriteIfPresent)
{
        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPathSource; (void)pPathDestination; (void)bOverwriteIfPresent;
        return false;

}

EAIO_API bool File::Copy(const char8_t* pPathSource, const char8_t* pPathDestination, bool bOverwriteIfPresent)
{
        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPathSource; (void)pPathDestination; (void)bOverwriteIfPresent;
        return false;

}



///////////////////////////////////////////////////////////////////////////////
// File::GetSize
//
// Returns the file size in bytes.
//
EAIO_API size_type File::GetSize(const char16_t* pPath)
{
    size_type nReturnValue = kSizeTypeError;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath;


    return nReturnValue;
}

EAIO_API size_type File::GetSize(const char8_t* pPath)
{
    using namespace EA::IO::Path;


        PathString16 path16;
        ConvertPathUTF8ToUTF16(path16, pPath);

        return File::GetSize(path16.c_str());

}




///////////////////////////////////////////////////////////////////////////////
// File::GetAttributes
//
EAIO_API int File::GetAttributes(const char16_t* pPath)
{
    int nAttributes = 0;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath;


    return nAttributes;
}

EAIO_API int File::GetAttributes(const char8_t* pPath)
{
    using namespace Path;

    int nAttributes = 0;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath;


    return nAttributes;
}



///////////////////////////////////////////////////////////////////////////////
// File::SetAttributes
//
EAIO_API bool File::SetAttributes(const char16_t* pPath, int nAttributeMask, bool bEnable)
{
        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath; (void)nAttributeMask; (void)bEnable;
        return false;

}

EAIO_API bool File::SetAttributes(const char8_t* pPath, int nAttributeMask, bool bEnable)
{
    using namespace Path;

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        (void)pPath; (void)nAttributeMask; (void)bEnable;
        return false;

}




///////////////////////////////////////////////////////////////////////////////
// File::GetTime
//
EAIO_API time_t File::GetTime(const char16_t* pPath, FileTimeType timeType)
{
        EA_FAIL_M("Unimplemented");

        // No way to get the file time for the given platform.
        // Or possibly the platform isn't supported yet.
        (void)pPath; (void)timeType;
        return 0;

}

EAIO_API time_t File::GetTime(const char8_t* pPath, FileTimeType timeType)
{
        EA_FAIL_M("Unimplemented");

        // No way to get the file time for the given platform.
        // Or possibly the platform isn't supported yet.
        (void)pPath; (void)timeType;
        return 0;

}




///////////////////////////////////////////////////////////////////////////////
// File::SetTime
//
EAIO_API bool File::SetTime(const char16_t* pPath, int nFileTimeTypeFlags, time_t nTime)
{

        // Other platforms are not known to support this functionality.
        (void)pPath; (void)nFileTimeTypeFlags; (void)nTime;
        return false;

}

EAIO_API bool File::SetTime(const char8_t* pPath, int nFileTimeTypeFlags, time_t nTime)
{

        // Other platforms are not known to support this functionality.
        (void)pPath; (void)nFileTimeTypeFlags; (void)nTime;
        return false;

}




///////////////////////////////////////////////////////////////////////////////
// File::ResolveAlias
//
EAIO_API File::ResolveAliasResult File::ResolveAlias(const char16_t* pPathSource, char16_t* pPathDestination, 
                                                     uint32_t nDestLength)
{
    ResolveAliasResult result = kRARNone;
    if(pPathDestination && (pPathSource != pPathDestination))
        pPathDestination[0] = 0;


    if(pPathDestination && (pPathSource != pPathDestination))
        EAIOStrlcpy16(pPathDestination, pPathSource, nDestLength);

    return result;
}

EAIO_API File::ResolveAliasResult File::ResolveAlias(const char8_t* pPathSource, char8_t* pPathDestination,
                                                     uint32_t nDestCapacity)
{
    using namespace EA::IO::Path;

    // We do back and forth conversions, but Windows applications (which would be using this 
    // function the most) are often going to be using 16 bit strings for UI and file systems anyway.
    PathString16 pathSource16;
    ConvertPathUTF8ToUTF16(pathSource16, pPathSource);

    char16_t pDirectory16[kMaxDirectoryLength];
    const File::ResolveAliasResult result = File::ResolveAlias(&pathSource16[0], pDirectory16, kMaxDirectoryLength);

    StrlcpyUTF16ToUTF8(pPathDestination, nDestCapacity, pDirectory16);

    return result;
}




///////////////////////////////////////////////////////////////////////////////
// File::CreateAlias
//
EAIO_API bool File::CreateAlias(const char16_t* pDestinationPath, const char16_t* pShortcutPath, 
                                const char16_t* pShortcutDescription, const char16_t* pShortcutArguments)
{
    using namespace EA::IO::Path;


        (void)pDestinationPath;
        (void)pShortcutPath;
        (void)pShortcutDescription;
        (void)pShortcutArguments;

        return false;

}

EAIO_API bool File::CreateAlias(const char8_t* /*pDestinationPath*/,     const char8_t* /*pShortcutPath*/, 
                                const char8_t* /*pShortcutDescription*/, const char8_t* /*pShortcutArguments*/)
{
    // To do.
    return false;
}



///////////////////////////////////////////////////////////////////////////////
// IsVolumeAvailable
//
EAIO_API bool IsVolumeAvailable(const char16_t* pPath, int /*timeoutMS*/)
{
        // Complete this for other platforms as required.
        (void)pPath;
        return true;
}

EAIO_API bool IsVolumeAvailable(const char8_t* pPath, int /*timeoutMS*/)
{
        // Complete this for other platforms as required.
        (void)pPath;
        return true;
}


///////////////////////////////////////////////////////////////////////////////
// InitializeFileSystem
//
EAIO_API bool InitializeFileSystem(bool /*bInitialize*/)
{
        // Nothing to do on this platform.
        return true;
}


///////////////////////////////////////////////////////////////////////////////
// MakeTempPathName
//
EAIO_API bool MakeTempPathName(char16_t* pPath, const char16_t* pDirectory, const char16_t* pFileName, const char16_t* pExtension, uint32_t nDestPathLength)
{
        using namespace EA::IO::Path;
    

        // User must allocate space for the resulting temp path.
        if(pPath)
        {
            static const char16_t pFileNameDefault[]  = { 't', 'e', 'm', 'p', 0 };
            static const char16_t pExtensionDefault[] = { '.', 't', 'm', 'p', 0 };

        time_t nTime = clock();

            char16_t tempPath[kMaxPathLength];

            if(!pFileName)
                pFileName = pFileNameDefault;

            if(!pExtension)
                pExtension = pExtensionDefault;

            if(!pDirectory)
            {
                if (!GetTempDirectory(tempPath))
                    return false;
                pDirectory = tempPath;
            }

            for(size_t i = 0; i < 64; i++, nTime--)
            {
                char16_t buffer[20];

                PathString16 tempFilePath(pDirectory);
                Path::Append(tempFilePath, pFileName);
                
                tempFilePath.operator+=(EAIOItoa16((uint32_t)nTime, buffer));
                tempFilePath.operator+=(pExtension);

                uint32_t nSrcPathLength = (uint32_t)tempFilePath.length();
                if (nSrcPathLength > nDestPathLength)
                    break;

                EAIOStrlcpy16(pPath, tempFilePath.c_str(), nDestPathLength);

                FileStream fileStream(pPath);
                if(fileStream.Open(kAccessFlagReadWrite, kCDCreateNew))
                {
                    fileStream.Close();
                    return true;
                }
                else if(fileStream.GetState() == kFSErrorWriteProtect) // If the directory cannot be written to...
                    break;
            }

        }

        return false;
}

EAIO_API bool MakeTempPathName(char8_t* pPath, const char8_t* pDirectory, const char8_t* pFileName, const char8_t* pExtension, uint32_t nDestPathLength)
{
        // User must allocate space for the resulting temp path.
        if(pPath)
        {
            static const char8_t pFileNameDefault[]  = { 't', 'e', 'm', 'p', 0 };
            static const char8_t pExtensionDefault[] = { '.', 't', 'm', 'p', 0 };

			time_t nTime = clock();

            char8_t tempPath[kMaxPathLength];

            if(!pFileName)
                pFileName = pFileNameDefault;

            if(!pExtension)
                pExtension = pExtensionDefault;

            if(!pDirectory)
            {
                if(!GetTempDirectory(tempPath))
                    return false;
                pDirectory = tempPath;
            }

            for(size_t i = 0; i < 64; i++, nTime--)
            {
                char8_t buffer[20];

                Path::PathString8 tempFilePath(pDirectory);
                Path::Append(tempFilePath, pFileName);

                tempFilePath.operator+=(EAIOItoa8((uint32_t)nTime, buffer));
                tempFilePath.operator+=(pExtension);

                uint32_t nSrcPathLength = (uint32_t)tempFilePath.length();
                if (nSrcPathLength > nDestPathLength)
                    break;

                EAIOStrlcpy8(pPath, tempFilePath.c_str(), nDestPathLength);

                FileStream fileStream(pPath);
                if(fileStream.Open(kAccessFlagReadWrite, kCDCreateNew))
                {
                    fileStream.Close();
                    return true;
                }
                else if(fileStream.GetState() == kFSErrorWriteProtect) // If the directory cannot be written to...
                    break;
            }
        }

        return false;
}


///////////////////////////////////////////////////////////////////////////////
// GetTempDirectory
//
EAIO_API int GetTempDirectory(char16_t* pDirectory, uint32_t nMaxPermittedLength)
{
    // Check to see if the user manually specified a temp directory.
    if(gpTempDirectory[0])
    {
        EAIOStrlcpy16(pDirectory, gpTempDirectory, nMaxPermittedLength);
        return (int)EAIOStrlen16(pDirectory);
    }

        EA_FAIL_M("Unimplemented");

        // Bug Paul Pedriana to finish this for the given platform.
        pDirectory[0] = 0;
        return 0;

}

EAIO_API int GetTempDirectory(char8_t* pDirectory, uint32_t nMaxPermittedLength)
{
    // You need to use the "game data" functionality to dynamically create
    // scratch drive space on the console. You would then call our SetTempDirectory function
    // with the system-assigned directory and then this GetTempDirectory function will 
    // return it.

    // Check to see if the user manually specified a temp directory.
    if(gpTempDirectory[0])
        return (int)(unsigned)StrlcpyUTF16ToUTF8(pDirectory, nMaxPermittedLength, gpTempDirectory);


        // Bug Paul Pedriana to finish this for the given platform.
        return -1;

}


///////////////////////////////////////////////////////////////////////////////
// SetTempDirectory
//
EAIO_API bool SetTempDirectory(const char16_t* pDirectory)
{
    using namespace EA::IO::Path;

    const size_t nDirectoryLength = EAIOStrlen16(pDirectory);

    // We use +2 because we need room for trailing nul char and for a possible appending
    // of a path separator. Strictly speaking, we should make the code a little smarter
    // about the required length and the trailing path separator, but we are simple for now.
    if(nDirectoryLength + 2 <= kTempDirectoryLength)
    {
        if(pDirectory[0])
        {
            EAIOStrlcpy16(gpTempDirectory, pDirectory, kTempDirectoryLength);
            Path::EnsureTrailingSeparator(gpTempDirectory, kTempDirectoryLength);

            if(!Directory::Exists(gpTempDirectory))
                return Directory::Create(gpTempDirectory);
        }
        else
            gpTempDirectory[0] = 0;

        return true;
    }

    return false;
}

EAIO_API bool SetTempDirectory(const char8_t* pDirectory)
{
    EA::IO::Path::PathString16 path16;
    ConvertPathUTF8ToUTF16(path16, pDirectory);

    return SetTempDirectory(path16.c_str());
}




///////////////////////////////////////////////////////////////////////////////
// GetDriveFreeSpace
//
EAIO_API uint64_t GetDriveFreeSpace(const char16_t* pPath)
{
        EA_FAIL_M("Unimplemented");
        // Bug Paul Pedriana for this when you need it.
        (void)pPath;


    return UINT64_C(0xffffffffffffffff);
}


EAIO_API uint64_t GetDriveFreeSpace(const char8_t* pPath)
{
        EA::IO::Path::PathString16 path16;
        ConvertPathUTF8ToUTF16(path16, pPath);

        return GetDriveFreeSpace(path16.c_str());
}



///////////////////////////////////////////////////////////////////////////////
// GetDriveName
//
EAIO_API int GetDriveName(const char16_t* pPath, char16_t* pName)
{
    EA_ASSERT(*pPath); // Assert that the input is non-empty.

        // Bug Paul Pedriana for this if you need it.
        // Perhaps for mountable file systems we can get the file system name.
        // This might work on Unix systems.
        (void)pPath;
        pName[0] = 0;
        return -1;
}

EAIO_API int GetDriveName(const char8_t* /*pPath*/, char8_t* /*pName*/)
{
    // To do.
    return false;
}




///////////////////////////////////////////////////////////////////////////////
// GetDriveFreeSpace
//
EAIO_API int GetDriveSerialNumber(const char16_t* pPath, char16_t* pSerialNumber)
{
        // Bug Paul Pedriana for this if you need it.
        (void)pPath;
        pSerialNumber[0] = 0;
        return 0;
}

EAIO_API int GetDriveSerialNumber(const char8_t* pPath, char8_t* pSerialNumber)
{
    char16_t pPath16[kMaxPathLength];
    char16_t pSerialNumber16[kMaxVolumeSerialNumberLength];

    StrlcpyUTF8ToUTF16(pPath16, kMaxPathLength, pPath);
    const int result = GetDriveSerialNumber(pPath16, pSerialNumber16);
    StrlcpyUTF16ToUTF8(pSerialNumber, kMaxVolumeSerialNumberLength, pSerialNumber16);

    return result;
}



///////////////////////////////////////////////////////////////////////////////
// GetDriveTypeValue
//
EAIO_API DriveType GetDriveTypeValue(const char16_t* pPath)
{
        (void)pPath; // Prevent possible compiler warnings related to disuse.
        return kDriveTypeUnknown;

}

EAIO_API DriveType GetDriveTypeValue(const char8_t* pPath)
{
    // To do: Flip the 16 and 8 bit versions so the 8 bit version does all the work.
    EA::IO::Path::PathString16 path16;
    ConvertPathUTF8ToUTF16(path16, pPath);

    return GetDriveTypeValue(path16.c_str());
}



///////////////////////////////////////////////////////////////////////////////
// GetDriveInfo
// 9/25/09 CSidhall - Removed unused drive info 

///////////////////////////////////////////////////////////////////////////////
// Directory::Exists
//
EAIO_API bool Directory::Exists(const char16_t* pDirectory)
{
    if(pDirectory && *pDirectory)
    {
            EA_FAIL_M("Unimplemented");
            // Bug Paul Pedriana to finish this for the given platform.
    }

    return false;
}

EAIO_API bool Directory::Exists(const char8_t* pDirectory)
{
    if(pDirectory && *pDirectory)
    {
            // Bug Paul Pedriana to finish this for the given platform.
    }

    return false;
}


///////////////////////////////////////////////////////////////////////////////
// Directory::EnsureExists
//
EAIO_API bool Directory::EnsureExists(const char16_t* pDirectory)
{
    if(pDirectory && *pDirectory)
    {
        if(Directory::Exists(pDirectory))
            return true;
        return Directory::Create(pDirectory);    
    }
    return false;
}

EAIO_API bool Directory::EnsureExists(const char8_t* pDirectory)
{
    if(pDirectory && *pDirectory)
    {
        if(Directory::Exists(pDirectory))
            return true;
        return Directory::Create(pDirectory);    
    }
    return false;
}



////////////////////////////////////////////////////////////////////////////
// Directory::Create
//
//  This function actually builds a path or file. Note that if the directory
//  didn't exist previously, this function makes it. This function leaves the
//  system as is if not able to create the entry. Thus, this function is not
//  the same as the C runtime 'mkdir' function or similar OS-supplied functions,
//  as they will only create a directory if the parent directory already exists.
//
//  Win32 example:
//      C:\blah1\blah2\blah3\        Directory
//      C:\blah1\                    Part1
//      C:\blah1\blah2\              Part2
//      C:\blah1\blah2\blah3\        Part3
//
//  Unix example:
//      /blah1/blah2/blah3/          Directory
//      /blah1/                      Part1
//      /blah1/blah2/                Part2
//      /blah1/blah2/blah3/          Part3
//
//  Win32 UNC Example:
//      \\SomeServer\SomeVolume\blah2\blah3\     // Win32
//
namespace
{
    bool CreateDirectoryInternal(const char16_t* pDirectory)
    {
        // To consider: Perhaps this function should not worry about trailing separators -- 
        // it is currently called only from from Create and Create is taking care of them.
            EA_FAIL_M("Unimplemented");
            // Bug Paul Pedriana for this when you need it.
            (void)pDirectory;
            return false;
    }
}


///////////////////////////////////////////////////////////////////////////////
// Create
//
// This function does a smart directory create. It doesn't require that the 
// parent directory exist beforehand as with conventional directory creation
// API functions.
// 
EAIO_API bool Directory::Create(const char16_t* pDirectory)
{
    using namespace Path;
    PathString16 fullDirPath(pDirectory);
    Path::EnsureTrailingSeparator(fullDirPath);
    
    // Path for Scratchwork
    char16_t scratchPath[kMaxPathLength];
    bool success(true);

    PathString16::iterator it = GetPathComponentEnd(fullDirPath.begin(), fullDirPath.end(), 1); 
    PathString16::iterator firstNewDirIt = NULL; // Mark the top-most directory that we created; if we need to do a rollback, we recursively remove this directory.
    while (it != fullDirPath.end())
    {
        
        // Example of first iteration:
        //  fullDirPath = "/usr/foo/bar/"
        //           it =     "/foo/bar/"
        // it - fullDirPath.begin() = "/usr"   // We reserve +1 for NULL terminator (don't want path separator for directory creation).
        uint32_t nLength = (uint32_t)(it - fullDirPath.begin() + 1);
        if (nLength >= (uint32_t)kMaxDirectoryLength)
        {
            success = false;
            break;
        }

        // If necessary, create the next component in our path
        EAIOStrlcpy16(scratchPath, fullDirPath.c_str(), nLength);
        if (!Directory::Exists(scratchPath))
        {
            if (!CreateDirectoryInternal(scratchPath))
            {
                success = false;
                break;
            }
            else if (!firstNewDirIt)
                firstNewDirIt = it;
        }

        // Advance forward by one component from our current component
        it = GetPathComponentEnd(it, fullDirPath.end(), 1);
    }

    // An error occurred mid-way through, remove any directories that we've created thus far.
    if (!success && firstNewDirIt)
    {
        // We can do a recursive wipe here because we know that the directory hierarchy we're 
        // about to remove was been created solely by us.
        EAIOStrlcpy16(scratchPath, fullDirPath.c_str(), firstNewDirIt - fullDirPath.begin() + 1);
        Directory::Remove(scratchPath);
    }

    return success;
}


EAIO_API bool Directory::Create(const char8_t* pDirectory)
{
    EA::IO::Path::PathString16 path16;
    ConvertPathUTF8ToUTF16(path16, pDirectory);

    return Directory::Create(path16.c_str());
}



namespace
{
    bool RemoveDirectoryRecursiveInternal(char16_t* pDirectory, size_t pathLen) 
    {
        DirectoryIterator            di;
        DirectoryIterator::EntryList entryList(DirectoryIterator::EntryList::allocator_type(EASTL_NAME_VAL(EAIO_ALLOC_PREFIX "FileUtil")));

        size_t namePos = pathLen;
        bool   success = true;
        
        if (di.Read(pDirectory, entryList, 0, kDirectoryEntryFile | kDirectoryEntryDirectory))
        {
            // Make sure the directory ends in a path separator. Note: If we have a
            // relative drive specification (c:), we don't want to add a backslash to it!
            if (pathLen)
            {
                char16_t lastChar = pDirectory[pathLen - 1];

                if (!IsFilePathSeparator(lastChar) && (lastChar != EA::IO::kFilePathDriveSeparator16) && (pathLen < (kMaxPathLength - 1)))
                    pDirectory[namePos++] = kFilePathSeparator16;
            }

            for(DirectoryIterator::EntryList::const_iterator it(entryList.begin()), itEnd(entryList.end()); it != itEnd; ++it)
            {
                const DirectoryIterator::Entry& ent = *it;
                const eastl_size_t nameLen = ent.msName.length();

                if ((nameLen + pathLen) > (kMaxPathLength - 1))
                    success = false;
                else
                {
                    ent.msName.copy(pDirectory + namePos, nameLen);
                    pDirectory[namePos + nameLen] = 0;

                    if (ent.mType == kDirectoryEntryDirectory)
                    {
                        if (!RemoveDirectoryRecursiveInternal(pDirectory, namePos + nameLen))
                            success = false;
                    }
                    else
                    {
                        if (!File::Remove(pDirectory))
                            success = false;
                    }
                }
            }
        }

        pDirectory[pathLen] = 0;
        
        if(!Directory::Remove(pDirectory, false))
            success = false;

        return success;
    }
}



///////////////////////////////////////////////////////////////////////////////
// Remove
//
EAIO_API bool Directory::Remove(const char16_t* pDirectory, bool bAllowRecursiveRemoval)
{
    if (bAllowRecursiveRemoval)
    {
        // Create a mutable version of the path.
        char16_t path[kMaxPathLength];
        EAIOStrlcpy16(path, pDirectory, kMaxPathLength);

        return RemoveDirectoryRecursiveInternal(path, EAIOStrlen16(path));
    }
    else // Non-recursive 
    {
            EA_FAIL_M("Unimplemented");
            // Bug Paul Pedriana for this when you need it.
            return false;
    }
}

EAIO_API bool Directory::Remove(const char8_t* pDirectory, bool bAllowRecursiveRemoval)
{
    EA::IO::Path::PathString16 path16;
    ConvertPathUTF8ToUTF16(path16, pDirectory);

    return Directory::Remove(path16.c_str(), bAllowRecursiveRemoval);
}



///////////////////////////////////////////////////////////////////////////////
// Rename
//
EAIO_API bool Directory::Rename(const char16_t* pDirectoryOld, const char16_t* pDirectoryNew)
{
        EA_FAIL_M("Unimplemented");
        // Bug Paul Pedriana for this when you need it.
        // This isn't necessarily supported on all platforms.
        // On the other hand, a brute force version which copies contents
        // to a new location then deletes the old location may be possible.
        
        (void)pDirectoryOld; (void)pDirectoryNew;
        return false;
}

EAIO_API bool Directory::Rename(const char8_t* pDirectoryOld, const char8_t* pDirectoryNew)
{
        EA::IO::Path::PathString16 oldPath16;
        ConvertPathUTF8ToUTF16(oldPath16, pDirectoryOld);

        EA::IO::Path::PathString16 newPath16;
        ConvertPathUTF8ToUTF16(newPath16, pDirectoryNew);

        return Directory::Rename(oldPath16.c_str(), newPath16.c_str());
}



///////////////////////////////////////////////////////////////////////////////
// Copy
//
EAIO_API bool Directory::Copy(const char16_t* pDirectorySource, const char16_t* pDirectoryDestination, bool bRecursive, bool bOverwriteIfAlreadyPresent)
{
    using namespace EA::IO::Path;

    bool bResult;

    PathString16 source16(pDirectorySource);
    Path::Normalize(source16);
    PathString16 dest16(pDirectoryDestination);
    Path::Normalize(dest16);

    bResult = Directory::Exists(source16.c_str());

    if(bResult)
    {
        bResult = Directory::EnsureExists(dest16.c_str());

        if(bResult)
        {
            DirectoryIterator            directoryIterator;
            DirectoryIterator::EntryList entryList(DirectoryIterator::EntryList::allocator_type(EASTL_NAME_VAL(EAIO_ALLOC_PREFIX "EAFileNotification/FSEntry")));

            directoryIterator.Read(source16.c_str(), entryList, NULL, bRecursive ? kDirectoryEntryDirectory | kDirectoryEntryFile : kDirectoryEntryFile);

            for(DirectoryIterator::EntryList::iterator it(entryList.begin()); it != entryList.end(); ++it)
            {
                DirectoryIterator::Entry& entry = *it;

                PathString16 sourcePath16(source16);
                PathString16 destPath16(dest16);

                Path::Join(sourcePath16, entry.msName.c_str());
                Path::Join(destPath16, entry.msName.c_str());

                if((entry.mType == kDirectoryEntryDirectory) && bRecursive)
                {
                    if(!Directory::Copy(sourcePath16.c_str(), destPath16.c_str(), bOverwriteIfAlreadyPresent))
                        bResult = false;
                }
                else if(entry.mType == kDirectoryEntryFile)
                {
                    if(!File::Copy(sourcePath16.c_str(), destPath16.c_str(), bOverwriteIfAlreadyPresent))
                        bResult = false;
                }
            }
        }
    }

    return bResult;
}

EAIO_API bool Directory::Copy(const char8_t* /*pDirectorySource*/, const char8_t* /*pDirectoryDestination*/, 
                     bool /*bRecursive*/, bool /*bOverwriteIfAlreadyPresent*/)
{
    // To do
    return false;
}



///////////////////////////////////////////////////////////////////////////////
// SetAttributes
//
EAIO_API bool Directory::SetAttributes(const char16_t* pBaseDirectory, int nAttributeMask, bool bEnable, bool bRecursive, bool bIncludeBaseDirectory)
{
    using namespace EA::IO::Path;

    bool bResult = true;

    PathString16 base16(pBaseDirectory);
    Path::Normalize(base16);

    if(bIncludeBaseDirectory)
        bResult = Directory::SetAttributes(base16.c_str(), nAttributeMask, bEnable);

    if(bResult)
    {
        DirectoryIterator            directoryIterator;
        DirectoryIterator::EntryList entryList(DirectoryIterator::EntryList::allocator_type(EASTL_NAME_VAL(EAIO_ALLOC_PREFIX "EAFileNotification/FSEntry")));

        bResult = (directoryIterator.Read(base16.c_str(), entryList, NULL, bRecursive ? kDirectoryEntryDirectory | kDirectoryEntryFile : kDirectoryEntryFile) != 0);

        if(bResult)
        {
            for(DirectoryIterator::EntryList::iterator it(entryList.begin()); it != entryList.end(); ++it)
            {
                DirectoryIterator::Entry& entry = *it;

                PathString16 path16(base16);
                Path::Join(path16, entry.msName.c_str());

                if((entry.mType == kDirectoryEntryDirectory) && bRecursive)
                {
                    if(!Directory::SetAttributes(path16.c_str(), nAttributeMask, bEnable))
                        bResult = false;
                }
                else if(entry.mType == kDirectoryEntryFile)
                {
                    if(!File::SetAttributes(path16.c_str(), nAttributeMask, bEnable))
                        bResult = false;
                }
            }
        }
    }

    return bResult;
}

EAIO_API bool Directory::SetAttributes(const char8_t* pBaseDirectory, int nAttributeMask, bool bEnable, bool bRecursive, bool bIncludeBaseDirectory)
{
    EA::IO::Path::PathString16 path16;
    ConvertPathUTF8ToUTF16(path16, pBaseDirectory);

    return Directory::SetAttributes(path16.c_str(), nAttributeMask, bEnable, bRecursive, bIncludeBaseDirectory);
}



///////////////////////////////////////////////////////////////////////////////
// GetTime
//
EAIO_API time_t Directory::GetTime(const char16_t* pPath, FileTimeType timeType)
{
    return File::GetTime(pPath, timeType);
}

EAIO_API time_t Directory::GetTime(const char8_t* pPath, FileTimeType timeType)
{
    return File::GetTime(pPath, timeType);
}



///////////////////////////////////////////////////////////////////////////////
// SetTime
//
EAIO_API bool Directory::SetTime(const char16_t* pPath, int nFileTimeTypeFlags, time_t nTime)
{
    return File::SetTime(pPath, nFileTimeTypeFlags, nTime);
}
 
EAIO_API bool Directory::SetTime(const char8_t* pPath, int nFileTimeTypeFlags, time_t nTime)
{
    return File::SetTime(pPath, nFileTimeTypeFlags, nTime);
}
 


///////////////////////////////////////////////////////////////////////////////
// GetCurrentWorkingDirectory
//
EAIO_API int Directory::GetCurrentWorkingDirectory(char16_t* pDirectory, uint32_t nMaxPermittedLength)
{

        if(!gbCurrentWorkingDirectoryInitialized) // If we haven't set the default value of the current working directory...
        {
            // We set the value to be the application directory.
            gbCurrentWorkingDirectoryInitialized = true;

                // To do: Other platforms here.
        }

        return EAIOStrlcpy16(pDirectory, gpCurrentWorkingDirectory, nMaxPermittedLength);

}

EAIO_API int Directory::GetCurrentWorkingDirectory(char8_t* pDirectory, uint32_t nMaxPermittedLength)
{
        char16_t pDirectory16[kMaxPathLength];

        Directory::GetCurrentWorkingDirectory(pDirectory16, kMaxPathLength);

        return (int)(unsigned)StrlcpyUTF16ToUTF8(pDirectory, nMaxPermittedLength, pDirectory16);
}



///////////////////////////////////////////////////////////////////////////////
// SetCurrentWorkingDirectory
//
EAIO_API bool Directory::SetCurrentWorkingDirectory(const char16_t* pDirectory)
{
        bool bResult = false;

        size_t nDirectoryLength = EAIOStrlen16(pDirectory);

        // We use +2 because we need room for trailing nul char and for a possible appending
        // of a path separator. Strictly speaking, we should make the code a little smarter
        // about the required length and the trailing path separator, but we are simple for now.

        if((nDirectoryLength + 2) < (sizeof(gpCurrentWorkingDirectory) / sizeof(gpCurrentWorkingDirectory[0])))
        {
            bResult = true;

            if(pDirectory[0])
            {
                nDirectoryLength = EAIOStrlcpy16(gpCurrentWorkingDirectory, pDirectory, kCWDLength);
                Path::StripTrailingSeparator(gpCurrentWorkingDirectory, nDirectoryLength);

                if(!Directory::Exists(gpCurrentWorkingDirectory))
                    bResult = Directory::Create(gpCurrentWorkingDirectory);
            }
            else
                gpCurrentWorkingDirectory[0] = 0;
       }

        return bResult;

}

EAIO_API bool Directory::SetCurrentWorkingDirectory(const char8_t* pDirectory)
{
        EA::IO::Path::PathString16 path16;
        ConvertPathUTF8ToUTF16(path16, pDirectory);

        return Directory::SetCurrentWorkingDirectory(path16.c_str());
}


EAIO_API bool IsDirectoryEmpty(const char16_t* pDirectory, int nDirectoryEntryFlags, bool bRecursive)
{
    EA::IO::DirectoryIterator::EntryList entryList;
    EA::IO::DirectoryIterator it;

    if(bRecursive)
        return it.ReadRecursive(pDirectory, entryList, NULL, nDirectoryEntryFlags, true, true, 1) == 0;

    return it.Read(pDirectory, entryList, NULL, nDirectoryEntryFlags, 1) == 0;
}

EAIO_API bool IsDirectoryEmpty(const char8_t*  pDirectory, int nDirectoryEntryFlags, bool bRecursive)
{
    EA::IO::Path::PathString16 path16;
    ConvertPathUTF8ToUTF16(path16, pDirectory);
	
	return IsDirectoryEmpty(path16.c_str(), nDirectoryEntryFlags, bRecursive);
}

///////////////////////////////////////////////////////////////////////////////
// GetSpecialDirectory
//
EAIO_API int GetSpecialDirectory(SpecialDirectory specialDirectory, char16_t* pDirectory, 
                                 bool bEnsureDirectoryExistence, uint32_t nMaxPermittedLength)
{
    pDirectory[0] = 0;


        // Bug Paul Pedriana for this when you need it for another platform.
        // Much of this functionality is not possible on console platforms but 
        // is possible on desktop platforms such as Windows, MacOS, Linux.
        // We can possibly allow the user to set these directories and then this
        // function could return what the user set.
        (void)specialDirectory;
        (void)bEnsureDirectoryExistence;
        (void)nMaxPermittedLength;

        return GetTempDirectory(pDirectory);

}

EAIO_API int GetSpecialDirectory(SpecialDirectory specialDirectory, char8_t* pDirectory, 
                        bool bEnsureDirectoryExistence, uint32_t nMaxPermittedLength)
{
        EA::IO::Path::PathString16 path16;
        path16.resize(nMaxPermittedLength);

        if(GetSpecialDirectory(specialDirectory, &path16[0], bEnsureDirectoryExistence, nMaxPermittedLength))
        {
            return (int)StrlcpyUTF16ToUTF8(pDirectory, nMaxPermittedLength, path16.c_str());
        }
        
        return -1;
}



///////////////////////////////////////////////////////////////////////////////
// Reserved Windows path names
//
static const char16_t* pReservedNamesWin32[] =
{
    EA_CHAR16("con"),  EA_CHAR16("prn"),  EA_CHAR16("aux"),  EA_CHAR16("clock$"), EA_CHAR16("nul"),    // These reserved words (alone or with any extension) cannot be used 
    EA_CHAR16("com1"), EA_CHAR16("com2"), EA_CHAR16("com3"), EA_CHAR16("com4"),   EA_CHAR16("com5"),   // as the name of a file, directory, server, or volume. We define these
    EA_CHAR16("com6"), EA_CHAR16("com7"), EA_CHAR16("com8"), EA_CHAR16("com9"),   EA_CHAR16("lpt1"),   // outside #ifdef EA_PLATFORM_WINDOWS because this function is meant to 
    EA_CHAR16("lpt2"), EA_CHAR16("lpt3"), EA_CHAR16("lpt4"), EA_CHAR16("lpt5"),   EA_CHAR16("lpt6"),   // be able to test Win32 paths while running under Unix, etc.
    EA_CHAR16("lpt7"), EA_CHAR16("lpt8"), EA_CHAR16("lpt9")
};


// Returns a string (sCurrentComponent) of the characters from current position up to but not including the next path separator char.
// If there is no '/' (or platform-appropriate path separator), returns the rest of the string.
// Sets nCurrentPosition to be one past the '/' char or one past the last char in the string.
// May possibly return an empty string, in the case of two successive '/' chars.
// Returns true if there were any charaters left to read.
// Returns false if the input position is last the end of the string.
//
static bool GetNextPathComponent(const EA::IO::Path::PathString16& sInputPath, EA::IO::Path::PathString16& sCurrentComponent, eastl_size_t& nCurrentPosition)
{
    const eastl_size_t nInputPathLength = sInputPath.length();

    if(nCurrentPosition < nInputPathLength)
    {
        eastl_size_t i;

        for(i = nCurrentPosition; i < nInputPathLength; i++)
        {
            if(IsFilePathSeparator(sInputPath[i]))
            {
                sCurrentComponent.assign(sInputPath, nCurrentPosition, i - nCurrentPosition);
                nCurrentPosition = i+1;
                return true;
            }
        }

        sCurrentComponent.assign(sInputPath, nCurrentPosition, i-nCurrentPosition);
        nCurrentPosition = i;
        return true;
   }

   return false;
}



///////////////////////////////////////////////////////////////////////////////
// IsFileNameCharValid
//
// Returns true if the input character can always be used in a path file name.
// You cannot use this function one-by-one on a file name to determine if the file
// name is valid, as there are special combination cases that make this so.
//
bool IsFileNameCharValid(char16_t c, FileSystem fileSystemType)
{
    switch (fileSystemType)
    {
        case kFileSystemUnix:       // General Unix paths
        case kFileSystemISO9660:
        case kFileSystemJoliet:
        case kFileSystemUDF:
        case kFileSystemNone:
            return (c != '/');

        case kFileSystemWindows:
        case kFileSystemFAT:
        case kFileSystemFATX:
        case kFileSystemFAT32:
        case kFileSystemNTFS:
        case kFileSystemUDFX:
        default:
            return ((c != '<') && (c != '>') && (c != ':') && (c != '\\') && 
                    (c != '/') && (c != '\"') && (c != '|') && (c != '*') && (c != '?'));
    }

    // return true;  // The above switch handles all possibilities.
}


///////////////////////////////////////////////////////////////////////////////
// IsFileNameStringValid
//
// Returns true if the input file name is valid for the file system.
//
bool IsFileNameStringValid(const char16_t* pName, FileSystem fileSystemType)
{
	using namespace EA::IO::Path;

	PathString16 sName(pName);

	if(sName.length() < (eastl_size_t)kMaxFileNameLength) // Problem: This value is tied to the compilation target and not the fileSystemType.
	{
		//Check for bad characters. This is an OK technique even for multi-byte locales.
		for(eastl_size_t i(0), iEnd(sName.length()); i < iEnd; i++)
		{
			const char16_t c = sName[i];  //We don't have to worry about multi-byte text because we use UTF8 which is not hostile to what we do here.

			if(!IsFileNameCharValid(c, fileSystemType))
				return false;
		}

		// Do reserved word tests
		if((fileSystemType == kFileSystemWindows) || 
			(fileSystemType == kFileSystemFAT)     ||
			(fileSystemType == kFileSystemFAT32)   ||
			(fileSystemType == kFileSystemNTFS))
		{ 
			PathString16 sCurrentComponentLowerCaseMinusExtension(sName);
			sCurrentComponentLowerCaseMinusExtension.make_lower();

			// Remove anything past a dot because that's insignificant to Windows when testing reserved words.
			const eastl_size_t nDotPosition(sCurrentComponentLowerCaseMinusExtension.find('.'));
			if(nDotPosition != PathString16::npos)
				sCurrentComponentLowerCaseMinusExtension.erase(nDotPosition);

			// Also trim off any spaces at the end because those are insignificant to Windows when testing reserved words.
			sCurrentComponentLowerCaseMinusExtension.rtrim();

			for(eastl_size_t i(0); i < (sizeof(pReservedNamesWin32) / sizeof(pReservedNamesWin32[0])); i++)
			{
				if(sCurrentComponentLowerCaseMinusExtension == pReservedNamesWin32[i])
					return false;
			}
		}

		// Components that consist of just '.' and/or ' ' chars are illegal.
		// The Win32 documentation doesn't specifically state that these combinations
		// are illegal, but in practice they are. Thus, "...", "   ", and ". ." are
		// all invalid.
		if(sName.find_first_not_of(EA_CHAR16(". ")) == PathString16::npos)
			return false;

		return true;
	}

	return false;
}






bool IsDirectoryNameStringValid(const char16_t* pName, FileSystem fileSystemType)
{
    return IsFileNameStringValid(pName, fileSystemType); // This works for all currently supported platforms.
}


///////////////////////////////////////////////////////////////////////////////
// IsFilePathStringValid
//
// Here are some helper URLs from Microsoft, though they are actually not complete:
//    http://msdn.microsoft.com/library/default.asp?url=/library/en-us/dnfiles/html/msdn_longfile.asp
//    http://msdn.microsoft.com/library/default.asp?url=/library/en-us/fileio/storage_7mn9.asp
//    http://msdn.microsoft.com/library/default.asp?url=/library/en-us/fileio/volref_6wfi.asp
//    http://msdn.microsoft.com/library/default.asp?url=/library/en-us/vccore98/HTML/_core_device_names_for_windows.asp
//
// Recognized file system types include:
//     Unix:      UNIX, 
//     Macintosh: HFS, 
//     Windows:   FAT (same as VFAT for Windows 95 and later), HPFS, NTFS 
//     CDROM:     UDF, CDFS (Windows), Joliet, Rockridge (Unix compatible)

bool IsFilePathStringValid(const char16_t* pPath, FileSystem fileSystemType)
{
    using namespace EA::IO::Path;

    bool                bReturnValue = false;
    PathString16  sPath(pPath);
	const char16_t      pReservedCharactersWin32[] = EA_CHAR16("<>:\"|*?"); // We don't include '/' and '\' because we deal with them separately.

    // Do path length tests
        if(sPath.length() < 1)                  // We treat a path of "/" as valid, as it is a valid directory path.
            return false;

        if(sPath.length() > (eastl_size_t)kMaxPathLength)     // Strictly speaking, some Unix systems allow more than this many characters.
            return false;


    // Break up the path into separate components.
    // We'll analyze them below.
    PathString16 sDrive, sDirectory, sFileName, sExtension;

    Split(sPath.c_str(), &sDrive, &sDirectory, &sFileName, &sExtension);

    // Do validation per file system
    if((fileSystemType == kFileSystemWindows) || 
       (fileSystemType == kFileSystemFAT)     ||
       (fileSystemType == kFileSystemFAT32)   ||
       (fileSystemType == kFileSystemNTFS))
    { 
        // Set the return value to true until proven false for the rest of this section.
        eastl_size_t nPosition = 0;
        bReturnValue = true;

        //Go through each directory and the file name in the path and see if 
        //it has any of the above reserved names. Note that directory names
        //can't be "com1.txt" any more than file names can't be "com1.txt".
		if(sPath.find(EA_CHAR16("\\\\")) == 0) // If it is a UNC path... (\\<server>\<volume>\<dir path>). '/' is not accepted as part of the UNC path prefix.
        {
            const eastl_size_t nPosition2 = 1;
            const eastl_size_t nPosition3 = sPath.find('\\', 2);
            const eastl_size_t nPosition4 = sPath.find('\\', nPosition3 + 1); // We know from earlier that there are at least 4 '\' chars.

            if((nPosition3 > (nPosition2 + 1)) && (nPosition4 > (nPosition3 + 1)))
            {
                const PathString16 sServer(sPath, nPosition2 + 1, nPosition3 - nPosition2);
                const PathString16 sVolume(sPath, nPosition3 + 1, nPosition4 - nPosition3);

                // We're a little conservative with the server and volume name checks here.
                // Their limitations don't appear to be well documented, so we err on acceptance.
                if(sServer.find_first_of(pReservedCharactersWin32) != PathString16::npos)
                    bReturnValue = false;
                else if(sVolume.find_first_of(pReservedCharactersWin32) != PathString16::npos)
                    bReturnValue = false;
                else
                {
                    PathString16 sServerLowerCaseMinusExtension(sServer);
                    PathString16 sVolumeLowerCaseMinusExtension(sVolume);

                    sServerLowerCaseMinusExtension.make_lower();
                    const eastl_size_t nServerDotPosition(sServerLowerCaseMinusExtension.find('.'));    
                    if(nServerDotPosition != PathString16::npos)
                        sServerLowerCaseMinusExtension.erase(nServerDotPosition);

                    sVolumeLowerCaseMinusExtension.make_lower();
                    const eastl_size_t nVolumeDotPosition(sVolumeLowerCaseMinusExtension.find('.'));    
                    if(nVolumeDotPosition != PathString16::npos)
                        sVolumeLowerCaseMinusExtension.erase(nVolumeDotPosition);

                    for(size_t i(0); i < sizeof(pReservedNamesWin32) / sizeof(pReservedNamesWin32[0]); i++)
                    {
                        if(sServerLowerCaseMinusExtension == pReservedNamesWin32[i])
                        {
                            bReturnValue = false;
                            break;
                        }

                        if(sVolumeLowerCaseMinusExtension == pReservedNamesWin32[i])
                        {
                            bReturnValue = false;
                            break;
                        }
                    }
                    nPosition = nPosition4 + 1;
                }
            }
            else
                bReturnValue = false;
        }
        else
        {
            if((sPath.length() >= 3) &&     // Similar to iswalpha(sPath[0])
               ((sPath[0] >= 'a' && sPath[0] <= 'z') || (sPath[0] >= 'A' && sPath[0] <= 'Z')) && // If is a Windows drive letter...
               (sPath[1] == ':') &&
               (sPath[2] == '\\'))       // '/' (as opposed to '\') is allowed as directory separators but not after "C:". That's Microsoft for ya.
            {
                nPosition = 3;
            }
            else
                bReturnValue = false;
        }

        if(bReturnValue) // If the code directly above found everything OK so far...
        {
            PathString16 sCurrentComponent;

            while(bReturnValue && GetNextPathComponent(sPath, sCurrentComponent, nPosition))
            {
                if(bReturnValue)
                {
                    if(sCurrentComponent.empty() || (sCurrentComponent.length() > (eastl_size_t)kMaxFileNameLength))
                    {
                        bReturnValue = false;
                        break;
                    }
                }

                // Do reserved word tests
                if(bReturnValue)
                {
                    PathString16 sCurrentComponentLowerCaseMinusExtension(sCurrentComponent);

                    sCurrentComponentLowerCaseMinusExtension.make_lower();
                    const eastl_size_t nDotPosition(sCurrentComponentLowerCaseMinusExtension.find('.'));

                    if(nDotPosition != PathString16::npos)
                        sCurrentComponentLowerCaseMinusExtension.erase(nDotPosition);

                    for(size_t i(0); i < sizeof(pReservedNamesWin32) / sizeof(pReservedNamesWin32[0]); i++)
                    {
                        if(sCurrentComponentLowerCaseMinusExtension == pReservedNamesWin32[i])
                        {
                            bReturnValue = false;
                            break;
                        }
                    }

                    if(bReturnValue)
                    {
                        // Components that consist of just '.' and/or ' ' chars are illegal.
                        // The Win32 documentation doesn't specifically state that these combinations
                        // are illegal, but in practice they are. Thus, "...", "    ", and ". ." are
                        // all invalid.
						if(sCurrentComponent.find_first_not_of(EA_CHAR16(". ")) == PathString16::npos)
                            bReturnValue = false;
                    }
                }

                // Do reserved character tests
                if(bReturnValue)
                {
                    // Windows documentation says that chars 0-31 are invalid, but curiously, if you
                    // type such characters into the Windows 2000 file browser for a name, it accepts them.
                    // Don't be fooled. It actually isn't accepting them, but is instead converting them
                    // to alternative Unicode equivalents for the same glyphs before accepting them. 

                    for(char16_t c(0); c <= 31; c++)
                    {
                        if(sCurrentComponent.find(c) != PathString16::npos)
                            bReturnValue = false;
                    }

                    if(bReturnValue)
                    {
                        if(sCurrentComponent.find_first_of(pReservedCharactersWin32) != PathString16::npos)
                            bReturnValue = false;
                    }
                }
            }
        }
    }
    else
    {
        EA_FAIL_MESSAGE("IsFilePathStringValid: Not implemented for the given file system.");
        return true; // Play it safe and return true. If we were using this function to implement in a security-conscious way, we might instead choose to return false.
    }

   return bReturnValue;
}


} // namespace IO


} // namespace EA














