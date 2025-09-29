# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ffmpeg_encoder_decoder_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ffmpeg_encoder_decoder_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ffmpeg_encoder_decoder_FOUND FALSE)
  elseif(NOT ffmpeg_encoder_decoder_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ffmpeg_encoder_decoder_FOUND FALSE)
  endif()
  return()
endif()
set(_ffmpeg_encoder_decoder_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ffmpeg_encoder_decoder_FIND_QUIETLY)
  message(STATUS "Found ffmpeg_encoder_decoder: 1.0.0 (${ffmpeg_encoder_decoder_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ffmpeg_encoder_decoder' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ffmpeg_encoder_decoder_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ffmpeg_encoder_decoder_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ffmpeg_encoder_decoder-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${ffmpeg_encoder_decoder_DIR}/${_extra}")
endforeach()
