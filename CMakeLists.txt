cmake_minimum_required(VERSION 3.16.3...3.19.7 FATAL_ERROR)

project(MetaKnee)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "https://www.slicer.org/wiki/Documentation/Nightly/Extensions/MetaKnee")
set(EXTENSION_CATEGORY "Surgical Robot")
set(EXTENSION_CONTRIBUTORS "Zhao Youjun (FuterTec)")
set(EXTENSION_DESCRIPTION "Knee Everything Everywhere All at Once")
set(EXTENSION_ICONURL "https://www.example.com/Slicer/Extensions/MetaKnee.png")
set(EXTENSION_SCREENSHOTURLS "https://www.example.com/Slicer/Extensions/MetaKnee/Screenshots/1.png")
set(EXTENSION_DEPENDS "NA") # Specified as a list or "NA" if no dependencies

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(FemurCoords)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_GENERATE_CONFIG})
include(${Slicer_EXTENSION_CPACK})
