#include "src/game/envfx_snow.h"

const GeoLayout heave_ho_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, heave_ho_000_offset_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 140, -11, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, heave_ho_000_offset_002_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 282, 98, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, heave_ho_000_offset_004_mesh),
									GEO_ANIMATED_PART(4, 0, 0, 0, heave_ho_001_offset_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 135, 0, -84, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(4, NULL),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(1, 168, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(4, NULL),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(1, 168, 0, 0, NULL),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 149, -28, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, heave_ho_000_offset_007_mesh),
							GEO_ANIMATED_PART(1, 0, 0, 0, heave_ho_001_offset_001_mesh),
							GEO_ANIMATED_PART(1, 0, 0, 0, heave_ho_002_offset_002_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(4, NULL),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, heave_ho_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, heave_ho_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
