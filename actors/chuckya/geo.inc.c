#include "src/game/envfx_snow.h"

const GeoLayout chuckya_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 281, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, chuckya_000_offset_003_mesh),
								GEO_ANIMATED_PART(1, 113, -152, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(1, 74, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 96, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_SCALE(0, 250384),
													//GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(4, chuckya_000_displaylist_mesh),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(1, 0, 0, 0, chuckya_002_offset_mesh),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(4, 0, 0, 0, chuckya_003_offset_mesh),
								GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
								GEO_OPEN_NODE(),
								GEO_SCALE(0, 250384),
									//GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(4, chuckya_000_displaylist_001_mesh),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(1, 1, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(1, 209, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(4, chuckya_000_displaylist_002_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(1, 95, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(4, chuckya_000_displaylist_003_mesh),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(1, 1, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(1, 209, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(4, chuckya_000_displaylist_004_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(1, 95, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(4, chuckya_000_displaylist_005_mesh),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_ASM(0, geo_update_held_mario_pos),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, chuckya_002_offset_003_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, chuckya_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
