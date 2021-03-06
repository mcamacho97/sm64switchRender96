#include "src/game/envfx_snow.h"

const GeoLayout penguin_half[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_switch_half_closed_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout penguin_closed[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_switch_closed_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout penguin_angry[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_switch_head_angry_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout penguin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_ROTATE(1, 0, -2, 40, 3, 0, -3),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, penguin_root_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, -50, 124, -15, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_offset_001_mesh),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(1, 41, 133, -15, 0, 0, 7),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_offset_002_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(1, -48, -53, -13, -1, 0, 2),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_offset_003_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(1, 46, -49, -13, -1, 0, 2),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_offset_004_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 0, 111, -19, NULL),
						GEO_OPEN_NODE(),
							GEO_SWITCH_CASE(5, geo_switch_tuxie_mother_eyes),
							GEO_OPEN_NODE(),
								GEO_NODE_START(),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, penguin_000_offset_005_mesh),
								GEO_CLOSE_NODE(),
								GEO_BRANCH(1, penguin_half),
								GEO_BRANCH(1, penguin_closed),
								GEO_BRANCH(1, penguin_angry),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, penguin_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, penguin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
