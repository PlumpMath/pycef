// Copyright (c) 2016 The PyCEF authors. All rights reserved.

// The "cef_version_win.h" file and other platform dependent
// headers come from CEF binary distribution. These header
// files are generated by CEF during builds.

#pragma once

#include "base.h"
#include "cef_version_" OS_POSTFIX ".h"

#define PYCEF_VERSION_MAJOR 47
#define PYCEF_VERSION_MINOR 0
#define PYCEF_VERSION \
    STR(PYCEF_VERSION_MAJOR) "." \
    STR(PYCEF_VERSION_MINOR)

// @todo: overwrite during build
// Possible values: "stable", "rc", "alpha"
#define PYCEF_RELEASE_TYPE

// @todo: overwrite during build
#define PYCEF_COMMIT_NUMBER
#define PYCEF_COMMIT_HASH
#define PYCEF_COMMIT_SHORT

#define CHROME_VERSION \
    STR(CHROME_VERSION_MAJOR) "." \
    STR(CHROME_VERSION_MINOR) "." \
    STR(CHROME_VERSION_BUILD) "." \
    STR(CHROME_VERSION_PATCH)
#define CHROMIUM_VERSION CHROME_VERSION
