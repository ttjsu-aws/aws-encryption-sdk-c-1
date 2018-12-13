/*
 * Copyright 2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may not use
 * this file except in compliance with the License. A copy of the License is
 * located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied. See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AWS_CRYPTOSDK_VERSION_H
#define AWS_CRYPTOSDK_VERSION_H

#include <aws/cryptosdk/private/config.h>

/**
 * @defgroup versioning Version constants
 * 
 * This section defines version macros that can be used to query the current version of the Encryption SDK.
 * For prerelease builds, the version constants will generally contain the anticipated version of the upcoming
 * release; if a git working copy is detected at build time, we will include that revision in the version
 * strings, but not in the numeric version constants.
 * 
 * @{
 */

#define AWS_CRYPTOSDK_VERSION_MAJOR 0
#define AWS_CRYPTOSDK_VERSION_MINOR 0
#define AWS_CRYPTOSDK_VERSION_PATCH 0

#ifndef AWS_CRYPTOSDK_DOXYGEN // undocumented private helpers
#  define AWS_CRYPTOSDK_PRIVATE_QUOTEARG(a) #a
#  define AWS_CRYPTOSDK_PRIVATE_EXPANDQUOTE(a) AWS_CRYPTOSDK_PRIVATE_QUOTEARG(a)
#endif

/**
 * A string constant containing version information in a human-readable form.
 */
#define AWS_CRYPTOSDK_VERSION_STR \
    AWS_CRYPTOSDK_PRIVATE_EXPANDQUOTE(AWS_CRYPTOSDK_VERSION_MAJOR) "." \
    AWS_CRYPTOSDK_PRIVATE_EXPANDQUOTE(AWS_CRYPTOSDK_VERSION_MINOR) "." \
    AWS_CRYPTOSDK_PRIVATE_EXPANDQUOTE(AWS_CRYPTOSDK_VERSION_PATCH) \
    AWS_CRYPTOSDK_PRIVATE_GITVERSION

/**
 * A string constant containing version information in a form suitable for a user-agent string.
 */
#define AWS_CRYPTOSDK_VERSION_UA \
    "aws-encryption-sdk-c/" AWS_CRYPTOSDK_VERSION_STR

/** @} */ // doxygen group versioning

#endif
