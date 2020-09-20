#include "src/game/envfx_snow.h"

const GeoLayout sgistage_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, sgistage_000_displaylist_mesh),
		GEO_DISPLAY_LIST(0, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, sgistage_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, sgistage_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_envfx_main),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
