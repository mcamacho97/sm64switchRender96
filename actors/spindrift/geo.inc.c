#include "src/game/envfx_snow.h"

const GeoLayout spindrift_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 32768),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(4, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 100, 0, 0, spindrift_000_offset_001_mesh),
						GEO_ANIMATED_PART(4, 100, 0, 0, NULL),
						GEO_ANIMATED_PART(4, 100, 0, 0, NULL),
						GEO_ANIMATED_PART(1, -88, -32, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 37, -13, 0, spindrift_000_offset_002_mesh),
							GEO_ANIMATED_PART(4, 37, -13, 0, spindrift_001_offset_001_mesh),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
					GEO_SCALE(0, 90768),
						//GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(4, spindrift_000_displaylist_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(4, 0, 0, 0, spindrift_004_offset_001_mesh),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, spindrift_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
