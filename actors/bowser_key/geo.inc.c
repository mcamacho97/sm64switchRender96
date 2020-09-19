#include "src/game/envfx_snow.h"

const GeoLayout bowser_key_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 300),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 65536),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, bowser_key_000_displaylist_mesh),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout bowser_key_cutscene_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ASM(0, geo_scale_bowser_key),
					GEO_SCALE(0, 65536),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, bowser_key_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, bowser_key_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};