INCLUDE_DIRECTORIES(
	${CMAKE_SOURCE_DIR}
	${CMAKE_SOURCE_DIR}/scribus
)

SET(ODT_IM_PLUGIN_SOURCES
	importodt.cpp
)

SET(SCRIBUS_ODT_IM_PLUGIN "odtimplugin")

ADD_LIBRARY(${SCRIBUS_ODT_IM_PLUGIN} MODULE ${ODT_IM_PLUGIN_SOURCES})

TARGET_LINK_LIBRARIES(${SCRIBUS_ODT_IM_PLUGIN} ${PLUGIN_LIBRARIES})

INSTALL(TARGETS ${SCRIBUS_ODT_IM_PLUGIN}
	LIBRARY
	DESTINATION ${PLUGINDIR}gettext
	PERMISSIONS ${PLUGIN_PERMISSIONS}
)

# SET_TARGET_PROPERTIES(${SCRIBUS_FONTPREVIEW_PLUGIN} PROPERTIES VERSION "0.0.0")
