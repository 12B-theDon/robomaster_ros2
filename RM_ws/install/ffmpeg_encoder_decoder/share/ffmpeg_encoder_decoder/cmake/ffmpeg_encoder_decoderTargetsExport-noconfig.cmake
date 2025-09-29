#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ffmpeg_encoder_decoder::ffmpeg_encoder_decoder" for configuration ""
set_property(TARGET ffmpeg_encoder_decoder::ffmpeg_encoder_decoder APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ffmpeg_encoder_decoder::ffmpeg_encoder_decoder PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libffmpeg_encoder_decoder.so"
  IMPORTED_SONAME_NOCONFIG "libffmpeg_encoder_decoder.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ffmpeg_encoder_decoder::ffmpeg_encoder_decoder )
list(APPEND _IMPORT_CHECK_FILES_FOR_ffmpeg_encoder_decoder::ffmpeg_encoder_decoder "${_IMPORT_PREFIX}/lib/libffmpeg_encoder_decoder.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
