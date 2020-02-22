#include "global.h"


const u32 gBattleTextboxTiles[] = INCBIN_U32("graphics/battle_interface/window.4bpp.lz");
const u32 gBattleTextboxPalette[] = INCBIN_U32("graphics/battle_interface/window.gbapal.lz");
const u32 gBattleTextboxTilemap[] = INCBIN_U32("graphics/interface/menu_map.bin.lz");

const u32 gMonFrontPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/front.4bpp.lz");
const u32 gMonBackPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/back.4bpp.lz");
const u32 gMonPalette_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/normal.gbapal.lz");
const u32 gMonShinyPalette_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/shiny.gbapal.lz");

// From Ruby.
const u32 gUnusedGfx_OldCharmap[] = INCBIN_U32("graphics/unused/old_charmap.4bpp.lz");
const u32 gUnusedTimemap_OldCharmap[] = INCBIN_U32("graphics/unused/old_charmap.bin.lz");
const u32 gUnusedPal_OldCharmap[] = INCBIN_U32("graphics/unused/old_charmap.gbapal.lz");

const u32 gSmokescreenImpactTiles[] = INCBIN_U32("graphics/battle_anims/sprites/smokescreen_impact.4bpp.lz");
const u32 gSmokescreenImpactPalette[] = INCBIN_U32("graphics/battle_anims/sprites/smokescreen_impact.gbapal.lz");

#include "data/graphics/interface_pokeballs.h"

const u32 gBlankGfxCompressed[] = INCBIN_U32("graphics/interface/blank.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Bubble[] = INCBIN_U32("graphics/battle_anims/sprites/bubble.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Bone[] = INCBIN_U32("graphics/battle_anims/sprites/bone.4bpp.lz");
const u32 gBattleAnimSpriteGfx_AirWave[] = INCBIN_U32("graphics/battle_anims/sprites/air_wave.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Orb[] = INCBIN_U32("graphics/battle_anims/sprites/orb.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Sword[] = INCBIN_U32("graphics/battle_anims/sprites/sword.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Seed[] = INCBIN_U32("graphics/battle_anims/sprites/seed.4bpp.lz");

const u32 gBattleAnimSpritePal_RainDrops[] = INCBIN_U32("graphics/battle_anims/sprites/rain_drops.gbapal.lz");
const u32 gBattleAnimSpritePal_Bone[] = INCBIN_U32("graphics/battle_anims/sprites/bone.gbapal.lz");
const u32 gBattleAnimSpritePal_AirWave[] = INCBIN_U32("graphics/battle_anims/sprites/air_wave.gbapal.lz");
const u32 gBattleAnimSpritePal_Orb[] = INCBIN_U32("graphics/battle_anims/sprites/orb.gbapal.lz");
const u32 gBattleAnimSpritePal_Sword[] = INCBIN_U32("graphics/battle_anims/sprites/sword.gbapal.lz");
const u32 gBattleAnimSpritePal_Seed[] = INCBIN_U32("graphics/battle_anims/sprites/seed.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Needle[] = INCBIN_U32("graphics/battle_anims/sprites/needle.4bpp.lz");
const u32 gBattleAnimSpritePal_Needle[] = INCBIN_U32("graphics/battle_anims/sprites/needle.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Explosion6[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_6.4bpp.lz");
const u32 gBattleAnimSpritePal_Explosion6[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_6.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PinkOrb[] = INCBIN_U32("graphics/battle_anims/sprites/pink_orb.4bpp.lz");
const u32 gBattleAnimSpritePal_PinkOrb[] = INCBIN_U32("graphics/battle_anims/sprites/pink_orb.gbapal.lz");

const u32 gBattleAnimSpritePal_IceCube[] = INCBIN_U32("graphics/battle_anims/sprites/ice_cube.gbapal.lz");
const u32 gBattleAnimSpriteGfx_IceCube[] = INCBIN_U32("graphics/battle_anims/sprites/ice_cube.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Gust[] = INCBIN_U32("graphics/battle_anims/sprites/gust.4bpp.lz");
const u32 gBattleAnimSpritePal_Gust[] = INCBIN_U32("graphics/battle_anims/sprites/gust.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Spark2[] = INCBIN_U32("graphics/battle_anims/sprites/spark_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Spark2[] = INCBIN_U32("graphics/battle_anims/sprites/spark_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Orange[] = INCBIN_U32("graphics/battle_anims/sprites/orange.4bpp.lz");
const u32 gBattleAnimSpritePal_Orange[] = INCBIN_U32("graphics/battle_anims/sprites/orange.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Spikes[] = INCBIN_U32("graphics/battle_anims/sprites/spikes.4bpp.lz");
const u32 gBattleAnimSpritePal_Spikes[] = INCBIN_U32("graphics/battle_anims/sprites/spikes.gbapal.lz");

const u32 gBattleAnimSpriteGfx_YellowBall[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_ball.4bpp.lz");
const u32 gBattleAnimSpritePal_YellowBall[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_ball.gbapal.lz");

const u32 gBattleAnimSpriteGfx_TiedBag[] = INCBIN_U32("graphics/battle_anims/sprites/tied_bag.4bpp.lz");
const u32 gBattleAnimSpritePal_TiedBag[] = INCBIN_U32("graphics/battle_anims/sprites/tied_bag.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BlackSmoke[] = INCBIN_U32("graphics/battle_anims/sprites/black_smoke.4bpp.lz");
const u32 gBattleAnimSpritePal_BlackSmoke[] = INCBIN_U32("graphics/battle_anims/sprites/black_smoke.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BlackBall[] = INCBIN_U32("graphics/battle_anims/sprites/black_ball.4bpp.lz");

const u32 gUnknownGfx_8D035A0[] = INCBIN_U32("graphics/unknown/unknown_D035A0.4bpp.lz");

const u32 gBattleAnimSpritePal_Glass[] = INCBIN_U32("graphics/battle_anims/sprites/glass.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Glass[] = INCBIN_U32("graphics/battle_anims/sprites/glass.4bpp.lz");

const u32 gBattleAnimSpriteGfx_HornHit[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit.4bpp.lz");
const u32 gBattleAnimSpritePal_HornHit[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit.gbapal.lz");

const u32 gBattleAnimSpritePal_BlueShards[] = INCBIN_U32("graphics/battle_anims/sprites/blue_shards.gbapal.lz");
const u32 gBattleAnimSpriteGfx_BlueShards[] = INCBIN_U32("graphics/battle_anims/sprites/blue_shards.4bpp.lz");

const u32 gUnused_BattleSpritePalette_023[] = INCBIN_U32("graphics/unused/battle_anim_023.gbapal.lz");

const u32 gUnusedGfx_MusicNotes[] = INCBIN_U32("graphics/unused/music_notes.4bpp.lz");

const u32 gBattleAnimSpritePal_Hit[] = INCBIN_U32("graphics/battle_anims/sprites/hit.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Hit[] = INCBIN_U32("graphics/battle_anims/sprites/hit.4bpp.lz");

const u32 gBattleAnimSpritePal_Hit2[] = INCBIN_U32("graphics/battle_anims/sprites/hit_2.gbapal.lz");

const u32 gBattleAnimSpritePal_WavingHand[] = INCBIN_U32("graphics/battle_anims/sprites/waving_hand.gbapal.lz");
const u32 gBattleAnimSpriteGfx_WavingHand[] = INCBIN_U32("graphics/battle_anims/sprites/waving_hand.4bpp.lz");

const u32 gBattleAnimSpriteGfx_ClosingEye[] = INCBIN_U32("graphics/battle_anims/sprites/closing_eye.4bpp.lz");
const u32 gBattleAnimSpritePal_ClosingEye[] = INCBIN_U32("graphics/battle_anims/sprites/closing_eye.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BlueStar[] = INCBIN_U32("graphics/battle_anims/sprites/blue_star.4bpp.lz");
const u32 gBattleAnimSpritePal_BlueStar[] = INCBIN_U32("graphics/battle_anims/sprites/blue_star.gbapal.lz");

const u32 gBattleAnimSpritePal_BubbleBurst[] = INCBIN_U32("graphics/battle_anims/sprites/bubble_burst.gbapal.lz");
const u32 gBattleAnimSpriteGfx_BubbleBurst[] = INCBIN_U32("graphics/battle_anims/sprites/bubble_burst.4bpp.lz");

const u32 gBattleAnimSpriteGfx_HitDuplicate[] = INCBIN_U32("graphics/battle_anims/sprites/hit_duplicate.4bpp.lz");
const u32 gBattleAnimSpritePal_HitDuplicate[] = INCBIN_U32("graphics/battle_anims/sprites/hit_duplicate.gbapal.lz");

const u32 gBattleAnimSpritePal_Leer[] = INCBIN_U32("graphics/battle_anims/sprites/leer.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Leer[] = INCBIN_U32("graphics/battle_anims/sprites/leer.4bpp.lz");

const u32 gBattleAnimSpritePal_BlueBurst[] = INCBIN_U32("graphics/battle_anims/sprites/blue_burst.gbapal.lz");
const u32 gBattleAnimSpriteGfx_BlueBurst[] = INCBIN_U32("graphics/battle_anims/sprites/blue_burst.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SmallEmber[] = INCBIN_U32("graphics/battle_anims/sprites/small_ember.4bpp.lz");
const u32 gBattleAnimSpritePal_SmallEmber[] = INCBIN_U32("graphics/battle_anims/sprites/small_ember.gbapal.lz");

const u32 gBattleAnimSpriteGfx_GraySmoke[] = INCBIN_U32("graphics/battle_anims/sprites/gray_smoke.4bpp.lz");
const u32 gBattleAnimSpritePal_GraySmoke[] = INCBIN_U32("graphics/battle_anims/sprites/gray_smoke.gbapal.lz");

const u32 gBattleAnimSpritePal_Fire[] = INCBIN_U32("graphics/battle_anims/sprites/fire.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Fire[] = INCBIN_U32("graphics/battle_anims/sprites/fire.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SpinningFire[] = INCBIN_U32("graphics/battle_anims/sprites/spinning_fire.4bpp.lz");
const u32 gBattleAnimSpriteGfx_FirePlume[] = INCBIN_U32("graphics/battle_anims/sprites/fire_plume.4bpp.lz");

const u32 gBattleAnimSpritePal_Lightning2[] = INCBIN_U32("graphics/battle_anims/sprites/lightning_2.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Lightning2[] = INCBIN_U32("graphics/battle_anims/sprites/lightning_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Lightning[] = INCBIN_U32("graphics/battle_anims/sprites/lightning.4bpp.lz");

const u32 gUnknownGfx_D06D80[] = INCBIN_U32("graphics/unknown/unknown_D06D80.4bpp.lz");
const u32 gUnknownPal_D06DC4[] = INCBIN_U32("graphics/unknown/unknown_D06D80.gbapal.lz");
const u32 gUnknownPal_D06DD8[] = INCBIN_U32("graphics/unknown/unknown_D06D80_2.gbapal.lz");

// old battle interface data, unused
const u32 gOldBattleInterfaceGfx[] = INCBIN_U32("graphics/unused/obi1.4bpp.lz");
const u32 gOldBattleInterfacePal_1_2_3[] = INCBIN_U32("graphics/unused/obi_palpak1.gbapal.lz"); // palettes 1-3
const u32 gOldBattleInterfacePal4[] = INCBIN_U32("graphics/unused/old_pal4.gbapal.lz"); // 4 is by itself
const u32 gOldBattleInterfacePal_5_6_7[] = INCBIN_U32("graphics/unused/obi_palpak3.gbapal.lz"); // palettes 5-7
const u32 gOldBattleInterfaceGfx2[] = INCBIN_U32("graphics/unused/obi2.4bpp.lz");
const u32 gOldBattleInterfaceTilemap[] = INCBIN_U32("graphics/unused/old_battle_interface_tilemap.bin.lz");

const u32 gBattleAnimSpritePal_ClawSlash2[] = INCBIN_U32("graphics/battle_anims/sprites/claw_slash_2.gbapal.lz");
const u32 gBattleAnimSpritePal_ClawSlash[] = INCBIN_U32("graphics/battle_anims/sprites/claw_slash.gbapal.lz");

const u32 gBattleAnimSpriteGfx_ClawSlash2[] = INCBIN_U32("graphics/battle_anims/sprites/claw_slash_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_ClawSlash[] = INCBIN_U32("graphics/battle_anims/sprites/claw_slash.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Scratch3[] = INCBIN_U32("graphics/battle_anims/sprites/scratch_3.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Scratch2[] = INCBIN_U32("graphics/battle_anims/sprites/scratch_2.4bpp.lz");

const u32 gPartyMenuHpBar_Gfx[] = INCBIN_U32("graphics/interface/party_menu_hpbar.4bpp.lz");

const u32 gBattleAnimSpriteGfx_BubbleBurst2[] = INCBIN_U32("graphics/battle_anims/sprites/bubble_burst_2.4bpp.lz");

const u32 gBattleAnimSpritePal_BubbleBurst2[] = INCBIN_U32("graphics/battle_anims/sprites/bubble_burst_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_IceChunk[] = INCBIN_U32("graphics/battle_anims/sprites/ice_chunk.4bpp.lz");
const u32 gBattleAnimSpritePal_IceChunk[] = INCBIN_U32("graphics/battle_anims/sprites/ice_chunk.gbapal.lz");

const u32 gBattleAnimSpritePal_Glass2[] = INCBIN_U32("graphics/battle_anims/sprites/glass_2.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Glass2[] = INCBIN_U32("graphics/battle_anims/sprites/glass_2.4bpp.lz");

const u32 gBattleAnimSpritePal_PinkHeart2[] = INCBIN_U32("graphics/battle_anims/sprites/pink_heart_2.gbapal.lz");
const u32 gBattleAnimSpriteGfx_PinkHeart2[] = INCBIN_U32("graphics/battle_anims/sprites/pink_heart_2.4bpp.lz");

const u32 gInterfaceGfx_UnusedWindow[] = INCBIN_U32("graphics/battle_interface/unused_window.4bpp.lz");
const u32 gInterfacePal_UnusedWindow[] = INCBIN_U32("graphics/battle_interface/unused_window.gbapal.lz");

const u32 gInterfaceGfx_HPNumbers[] = INCBIN_U32("graphics/interface/hp_numbers.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SapDrip[] = INCBIN_U32("graphics/battle_anims/sprites/sap_drip.4bpp.lz");
const u32 gBattleAnimSpritePal_SapDrip[] = INCBIN_U32("graphics/battle_anims/sprites/sap_drip.gbapal.lz");

const u32 gBattleAnimSpritePal_SapDrip2[] = INCBIN_U32("graphics/battle_anims/sprites/sap_drip_2.gbapal.lz");

const u32 gUnusedGfx_Window2[] = INCBIN_U32("graphics/battle_interface/unused_window2.4bpp.lz");
const u32 gUnusedGfx_Window2Bar[] = INCBIN_U32("graphics/battle_interface/unused_window2bar.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Sparkle1[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_1.4bpp.lz");
const u32 gBattleAnimSpritePal_Sparkle1[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_1.gbapal.lz");

const u32 gBattleAnimSpritePal_Sparkle2[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_2.gbapal.lz");
const u32 gBattleAnimSpritePal_HumanoidFoot[] = INCBIN_U32("graphics/battle_anims/sprites/humanoid_foot.gbapal.lz");

const u32 gBattleAnimSpriteGfx_HumanoidFoot[] = INCBIN_U32("graphics/battle_anims/sprites/humanoid_foot.4bpp.lz");
const u32 gBattleAnimSpriteGfx_MonsterFoot[] = INCBIN_U32("graphics/battle_anims/sprites/monster_foot.4bpp.lz");
const u32 gBattleAnimSpriteGfx_HumanoidHand[] = INCBIN_U32("graphics/battle_anims/sprites/humanoid_hand.4bpp.lz");

const u32 gUnusedGfx_LineSketch[] = INCBIN_U32("graphics/unused/line_sketch.4bpp.lz");
const u32 gUnusedPal_LineSketch[] = INCBIN_U32("graphics/unused/line_sketch.gbapal.lz");

const u32 gBattleAnimSpriteGfx_YellowUnk[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_unk.4bpp.lz");
const u32 gBattleAnimSpritePal_YellowUnk[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_unk.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SlamHit[] = INCBIN_U32("graphics/battle_anims/sprites/slam_hit.4bpp.lz");
const u32 gBattleAnimSpritePal_SlamHit[] = INCBIN_U32("graphics/battle_anims/sprites/slam_hit.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RedFist[] = INCBIN_U32("graphics/battle_anims/sprites/red_fist.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Ring[] = INCBIN_U32("graphics/battle_anims/sprites/ring.4bpp.lz");
const u32 gBattleAnimSpritePal_Ring[] = INCBIN_U32("graphics/battle_anims/sprites/ring.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Rocks[] = INCBIN_U32("graphics/battle_anims/sprites/rocks.4bpp.lz");
const u32 gBattleAnimSpritePal_Rocks[] = INCBIN_U32("graphics/battle_anims/sprites/rocks.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Z[] = INCBIN_U32("graphics/battle_anims/sprites/z.4bpp.lz");
const u32 gBattleAnimSpritePal_Z[] = INCBIN_U32("graphics/battle_anims/sprites/z.gbapal.lz");

const u32 gBattleAnimSpriteGfx_YellowUnk2[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_unk_2.4bpp.lz");
const u32 gBattleAnimSpritePal_YellowUnk2[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_unk_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_AirSlash[] = INCBIN_U32("graphics/battle_anims/sprites/air_slash.4bpp.lz");
const u32 gBattleAnimSpritePal_AirSlash[] = INCBIN_U32("graphics/battle_anims/sprites/air_slash.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SpinningGreenOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/spinning_green_orbs.4bpp.lz");
const u32 gBattleAnimSpritePal_SpinningGreenOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/spinning_green_orbs.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Leaf[] = INCBIN_U32("graphics/battle_anims/sprites/leaf.4bpp.lz");
const u32 gBattleAnimSpritePal_Leaf[] = INCBIN_U32("graphics/battle_anims/sprites/leaf.gbapal.lz");

const u32 gUnusedGfx_Metronome[] = INCBIN_U32("graphics/unused/metronome_hand_small.4bpp.lz"); // unused, was for metronome at one point

const u32 gBattleAnimSpritePal_Clapping[] = INCBIN_U32("graphics/battle_anims/sprites/clapping.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PoisonPowder[] = INCBIN_U32("graphics/battle_anims/sprites/poison_powder.4bpp.lz");
const u32 gBattleAnimSpritePal_PoisonPowder[] = INCBIN_U32("graphics/battle_anims/sprites/poison_powder.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BrownTriangle[] = INCBIN_U32("graphics/battle_anims/sprites/brown_triangle.4bpp.lz");
const u32 gBattleAnimSpritePal_BrownTriangle[] = INCBIN_U32("graphics/battle_anims/sprites/brown_triangle.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Sparkle3[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_3.4bpp.lz");
const u32 gBattleAnimSpritePal_Sparkle3[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_3.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Sparkle4[] = INCBIN_U32("graphics/battle_anims/sprites/sparkle_4.4bpp.lz");

const u32 gBattleAnimSpriteGfx_MusicNotes[] = INCBIN_U32("graphics/battle_anims/sprites/music_notes.4bpp.lz");
const u32 gBattleAnimSpritePal_MusicNotes[] = INCBIN_U32("graphics/battle_anims/sprites/music_notes.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Duck[] = INCBIN_U32("graphics/battle_anims/sprites/duck.4bpp.lz");
const u32 gBattleAnimSpritePal_Duck[] = INCBIN_U32("graphics/battle_anims/sprites/duck.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Alert[] = INCBIN_U32("graphics/battle_anims/sprites/alert.4bpp.lz");
const u32 gBattleAnimSpritePal_Alert[] = INCBIN_U32("graphics/battle_anims/sprites/alert.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Shock4[] = INCBIN_U32("graphics/battle_anims/sprites/shock_4.4bpp.lz");
const u32 gBattleAnimSpritePal_Shock4[] = INCBIN_U32("graphics/battle_anims/sprites/shock_4.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Shock[] = INCBIN_U32("graphics/battle_anims/sprites/shock.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Bell2[] = INCBIN_U32("graphics/battle_anims/sprites/bell_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Bell2[] = INCBIN_U32("graphics/battle_anims/sprites/bell_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PinkGlove[] = INCBIN_U32("graphics/battle_anims/sprites/pink_glove.4bpp.lz");
const u32 gBattleAnimSpritePal_PinkGlove[] = INCBIN_U32("graphics/battle_anims/sprites/pink_glove.gbapal.lz");

const u16 gUnknown_D0CA04[] = INCBIN_U16("graphics/unknown/unknown_D0CA04.bin");
const u16 gUnknown_D0CA28[] = INCBIN_U16("graphics/unknown/unknown_D0CA28.bin");
const u16 gUnknown_D0CA4C[] = INCBIN_U16("graphics/unknown/unknown_D0CA4C.bin");
const u32 gUnusedGfx8bpp_LineSketch2[] = INCBIN_U32("graphics/unused/line_sketch_2.8bpp.lz");
const u16 gUnknown_D0CAC8[] = INCBIN_U16("graphics/unknown/unknown_D0CAC8.bin");
const u32 gUnusedTilemap_LineSketch2[] = INCBIN_U32("graphics/unused/line_sketch_2.bin.lz");

const u32 gBattleAnimSpriteGfx_BlueLines[] = INCBIN_U32("graphics/battle_anims/sprites/blue_lines.4bpp.lz");
const u32 gBattleAnimSpritePal_BlueLines[] = INCBIN_U32("graphics/battle_anims/sprites/blue_lines.gbapal.lz");

const u32 gBattleAnimSpritePal_Impact3[] = INCBIN_U32("graphics/battle_anims/sprites/impact_3.gbapal.lz");
const u32 gBattleAnimSpritePal_Impact2[] = INCBIN_U32("graphics/battle_anims/sprites/impact_2.gbapal.lz");
const u32 gBattleAnimSpritePal_Reticle[] = INCBIN_U32("graphics/battle_anims/sprites/reticle.gbapal.lz");
const u32 gBattleAnimSpritePal_Breath[] = INCBIN_U32("graphics/battle_anims/sprites/breath.gbapal.lz");
const u32 gBattleAnimSpritePal_Snowball[] = INCBIN_U32("graphics/battle_anims/sprites/snowball.gbapal.lz");
const u32 gBattleAnimSpritePal_Vine[] = INCBIN_U32("graphics/battle_anims/sprites/vine.gbapal.lz");
const u32 gBattleAnimSpritePal_Sword2[] = INCBIN_U32("graphics/battle_anims/sprites/sword_2.gbapal.lz");
const u32 gBattleAnimSpritePal_RedTube[] = INCBIN_U32("graphics/battle_anims/sprites/red_tube.gbapal.lz");
const u32 gBattleAnimSpritePal_Amnesia[] = INCBIN_U32("graphics/battle_anims/sprites/amnesia.gbapal.lz");
const u32 gBattleAnimSpritePal_String2[] = INCBIN_U32("graphics/battle_anims/sprites/string_2.gbapal.lz");

const u32 gFile_graphics_unknown_unknown_D0CD0C[] = INCBIN_U32("graphics/unknown/unknown_D0CD0C.bin.lz");

const u32 gBattleAnimSpritePal_Pencil2[] = INCBIN_U32("graphics/battle_anims/sprites/pencil_2.gbapal.lz");
const u32 gBattleAnimSpritePal_Petal[] = INCBIN_U32("graphics/battle_anims/sprites/petal.gbapal.lz");
const u32 gBattleAnimSpritePal_BentSpoon[] = INCBIN_U32("graphics/battle_anims/sprites/bent_spoon.gbapal.lz");
const u32 gBattleAnimSpritePal_Coin[] = INCBIN_U32("graphics/battle_anims/sprites/coin.gbapal.lz");
const u32 gBattleAnimSpritePal_CrackedEgg[] = INCBIN_U32("graphics/battle_anims/sprites/cracked_egg.gbapal.lz");
const u32 gBattleAnimSpritePal_FreshEgg[] = INCBIN_U32("graphics/battle_anims/sprites/fresh_egg.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Impact3[] = INCBIN_U32("graphics/battle_anims/sprites/impact_3.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Impact2[] = INCBIN_U32("graphics/battle_anims/sprites/impact_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Reticle[] = INCBIN_U32("graphics/battle_anims/sprites/reticle.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Breath[] = INCBIN_U32("graphics/battle_anims/sprites/breath.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Snowball[] = INCBIN_U32("graphics/battle_anims/sprites/snowball.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Vine[] = INCBIN_U32("graphics/battle_anims/sprites/vine.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Sword2[] = INCBIN_U32("graphics/battle_anims/sprites/sword_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Clapping[] = INCBIN_U32("graphics/battle_anims/sprites/clapping.4bpp.lz");
const u32 gBattleAnimSpriteGfx_RedTube[] = INCBIN_U32("graphics/battle_anims/sprites/red_tube.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Amnesia[] = INCBIN_U32("graphics/battle_anims/sprites/amnesia.4bpp.lz");
const u32 gBattleAnimSpriteGfx_String2[] = INCBIN_U32("graphics/battle_anims/sprites/string_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Pencil2[] = INCBIN_U32("graphics/battle_anims/sprites/pencil_2.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Petal[] = INCBIN_U32("graphics/battle_anims/sprites/petal.4bpp.lz");
const u32 gBattleAnimSpriteGfx_BentSpoon[] = INCBIN_U32("graphics/battle_anims/sprites/bent_spoon.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Web[] = INCBIN_U32("graphics/battle_anims/sprites/web.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Coin[] = INCBIN_U32("graphics/battle_anims/sprites/coin.4bpp.lz");
const u32 gBattleAnimSpriteGfx_CrackedEgg[] = INCBIN_U32("graphics/battle_anims/sprites/cracked_egg.4bpp.lz");
const u32 gBattleAnimSpriteGfx_HatchedEgg[] = INCBIN_U32("graphics/battle_anims/sprites/hatched_egg.4bpp.lz");
const u32 gBattleAnimSpriteGfx_FreshEgg[] = INCBIN_U32("graphics/battle_anims/sprites/fresh_egg.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Fangs[] = INCBIN_U32("graphics/battle_anims/sprites/fangs.4bpp.lz");
const u32 gBattleAnimSpritePal_Fangs[] = INCBIN_U32("graphics/battle_anims/sprites/fangs.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Explosion2[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Explosion2[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Explosion3[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_3.4bpp.lz");

const u32 gBattleAnimSpriteGfx_WaterDroplet[] = INCBIN_U32("graphics/battle_anims/sprites/water_droplet.4bpp.lz");
const u32 gBattleAnimSpritePal_WaterDroplet[] = INCBIN_U32("graphics/battle_anims/sprites/water_droplet.gbapal.lz");

const u32 gBattleAnimSpriteGfx_WaterDroplet2[] = INCBIN_U32("graphics/battle_anims/sprites/water_droplet_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Seed2[] = INCBIN_U32("graphics/battle_anims/sprites/seed_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Seed2[] = INCBIN_U32("graphics/battle_anims/sprites/seed_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Sprout[] = INCBIN_U32("graphics/battle_anims/sprites/sprout.4bpp.lz");

const u32 gBattleAnimSpriteGfx_RedWand[] = INCBIN_U32("graphics/battle_anims/sprites/red_wand.4bpp.lz");
const u32 gBattleAnimSpritePal_RedWand[] = INCBIN_U32("graphics/battle_anims/sprites/red_wand.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PurpleGreenUnk[] = INCBIN_U32("graphics/battle_anims/sprites/purple_green_unk.4bpp.lz");
const u32 gBattleAnimSpritePal_PurpleGreenUnk[] = INCBIN_U32("graphics/battle_anims/sprites/purple_green_unk.gbapal.lz");

const u32 gBattleAnimSpriteGfx_WaterColumn[] = INCBIN_U32("graphics/battle_anims/sprites/water_column.4bpp.lz");
const u32 gBattleAnimSpritePal_WaterColumn[] = INCBIN_U32("graphics/battle_anims/sprites/water_column.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MudUnk[] = INCBIN_U32("graphics/battle_anims/sprites/mud_unk.4bpp.lz");
const u32 gBattleAnimSpritePal_MudUnk[] = INCBIN_U32("graphics/battle_anims/sprites/mud_unk.gbapal.lz");

const u32 gUnusedTilemap_BlueFrame[] = INCBIN_U32("graphics/unused/blue_frame.bin.lz"); // P1, P2, P3 and P4 tilemaps?
const u32 gUnusedTilemap_RedYellowGreenFrame[] = INCBIN_U32("graphics/unused/redyellowgreen_frame.bin.lz");
const u32 gUnusedGfx_ColorFrames[] = INCBIN_U32("graphics/unused/color_frames.4bpp.lz");
const u32 gUnusedPal_ColorFrames[] = INCBIN_U32("graphics/unused/color_frames.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RainDrops[] = INCBIN_U32("graphics/battle_anims/sprites/rain_drops.4bpp.lz");

const u32 gUnusedGfx8bpp_WaterSplash [] = INCBIN_U32("graphics/unused/water_splash.8bpp.lz");
const u32 gUnusedTilemap_WaterSplash[] = INCBIN_U32("graphics/unused/water_splash.bin.lz");
const u32 gUnusedPalette_WaterSplash[] = INCBIN_U32("graphics/unused/water_splash.gbapal.lz");

const u32 gUnusedGfx_BasicFrame[] = INCBIN_U32("graphics/unused/basic_frame.4bpp.lz");
const u32 gUnusedPal_BasicFrame[] = INCBIN_U32("graphics/unused/basic_frame.gbapal.lz");
const u32 gUnusedTilemap_BasicFrame[] = INCBIN_U32("graphics/unused/basic_frame.bin.lz");

// Battle Interface

const u16 gBattleInterface_BallStatusBarPal[] = INCBIN_U16("graphics/battle_interface/ball_status_bar.gbapal");

const u16 gBattleInterface_BallDisplayPal[] = INCBIN_U16("graphics/battle_interface/ball_display.gbapal");

//Originally an array?
const u8 gHealthboxElementsGfxTable[] = INCBIN_U8("graphics/battle_interface/hp_bar.4bpp");
const u8 gHealthboxElementsGfxTable_ExpBar[] = INCBIN_U8("graphics/battle_interface/exp_bar.4bpp");
const u8 gHealthboxElementsGfxTable_StatusPsn[] = INCBIN_U8("graphics/battle_interface/status_psn.4bpp");
const u8 gHealthboxElementsGfxTable_StatusPar[] = INCBIN_U8("graphics/battle_interface/status_par.4bpp");
const u8 gHealthboxElementsGfxTable_StatusSlp[] = INCBIN_U8("graphics/battle_interface/status_slp.4bpp");
const u8 gHealthboxElementsGfxTable_StatusFrz[] = INCBIN_U8("graphics/battle_interface/status_frz.4bpp");
const u8 gHealthboxElementsGfxTable_StatusBrn[] = INCBIN_U8("graphics/battle_interface/status_brn.4bpp");
const u8 gHealthboxElementsGfxTable_Misc[] = INCBIN_U8("graphics/battle_interface/misc.4bpp");
const u8 gHealthboxElementsGfxTable_HpBarAnim[] = INCBIN_U8("graphics/battle_interface/hp_bar_anim.4bpp");
const u8 gHealthboxElementsGfxTable_MiscFrameEnd[] = INCBIN_U8("graphics/battle_interface/misc_frame_end.4bpp");

const u8 gUnknown_8D12404[] = INCBIN_U8("graphics/battle_interface/ball_display.4bpp");

//Originally an array?
const u8 gUnknown_08C1249C[] = INCBIN_U8("graphics/battle_interface/ball_display_unused_extra.4bpp");
const u8 gBattleInterfaceGfx_Status2[] = INCBIN_U8("graphics/battle_interface/status2.4bpp"); // these three duplicate sets of graphics are for the opponent pokemon
const u8 gBattleInterfaceGfx_Status3[] = INCBIN_U8("graphics/battle_interface/status3.4bpp"); // and are also for use in double battles. they use dynamic palettes so
const u8 gBattleInterfaceGfx_Status4[] = INCBIN_U8("graphics/battle_interface/status4.4bpp"); // coloring them is an extreme headache and wont be done for now
const u8 gUnknown_8D12A44[] = INCBIN_U8("graphics/unknown/unknown_D12A44.4bpp");
const u8 gUnknown_8D12A64[] = INCBIN_U8("graphics/unknown/unknown_D12A64.4bpp");
const u32 gBattleInterfaceGfx_UnusedWindow3[] = INCBIN_U32("graphics/battle_interface/unused_window3.4bpp.lz");
const u32 gBattleInterfaceGfx_UnusedWindow4[] = INCBIN_U32("graphics/battle_interface/unused_window4.4bpp.lz");

const u32 gBattleAnimSpriteGfx_FurySwipes[] = INCBIN_U32("graphics/battle_anims/sprites/fury_swipes.4bpp.lz");
const u32 gBattleAnimSpritePal_FurySwipes[] = INCBIN_U32("graphics/battle_anims/sprites/fury_swipes.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Vine2[] = INCBIN_U32("graphics/battle_anims/sprites/vine_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Vine2[] = INCBIN_U32("graphics/battle_anims/sprites/vine_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Teeth[] = INCBIN_U32("graphics/battle_anims/sprites/teeth.4bpp.lz");
const u32 gBattleAnimSpritePal_Teeth[] = INCBIN_U32("graphics/battle_anims/sprites/teeth.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Bone2[] = INCBIN_U32("graphics/battle_anims/sprites/bone_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Bone2[] = INCBIN_U32("graphics/battle_anims/sprites/bone_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_WhiteBag[] = INCBIN_U32("graphics/battle_anims/sprites/white_bag.4bpp.lz");
const u32 gBattleAnimSpritePal_WhiteBag[] = INCBIN_U32("graphics/battle_anims/sprites/white_bag.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Unknown[] = INCBIN_U32("graphics/battle_anims/sprites/unknown.4bpp.lz");
const u32 gBattleAnimSpritePal_Unknown[] = INCBIN_U32("graphics/battle_anims/sprites/unknown.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PurpleCoral[] = INCBIN_U32("graphics/battle_anims/sprites/purple_coral.4bpp.lz");
const u32 gBattleAnimSpritePal_PurpleCoral[] = INCBIN_U32("graphics/battle_anims/sprites/purple_coral.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PurpleDroplet[] = INCBIN_U32("graphics/battle_anims/sprites/purple_droplet.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Shock2[] = INCBIN_U32("graphics/battle_anims/sprites/shock_2.4bpp.lz");
const u32 gBattleAnimSpritePal_Shock2[] = INCBIN_U32("graphics/battle_anims/sprites/shock_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_ClosingEye2[] = INCBIN_U32("graphics/battle_anims/sprites/closing_eye_2.4bpp.lz");
const u32 gBattleAnimSpritePal_ClosingEye2[] = INCBIN_U32("graphics/battle_anims/sprites/closing_eye_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MetalBall[] = INCBIN_U32("graphics/battle_anims/sprites/metal_ball.4bpp.lz");
const u32 gBattleAnimSpritePal_MetalBall[] = INCBIN_U32("graphics/battle_anims/sprites/metal_ball.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MonsterDoll[] = INCBIN_U32("graphics/battle_anims/sprites/monster_doll.4bpp.lz");
const u32 gBattleAnimSpritePal_MonsterDoll[] = INCBIN_U32("graphics/battle_anims/sprites/monster_doll.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Whirlwind[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind.4bpp.lz");
const u32 gBattleAnimSpritePal_Whirlwind[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Whirlwind2[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Explosion4[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_4.4bpp.lz");
const u32 gBattleAnimSpritePal_Explosion4[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_4.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Explosion5[] = INCBIN_U32("graphics/battle_anims/sprites/explosion_5.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Tongue[] = INCBIN_U32("graphics/battle_anims/sprites/tongue.4bpp.lz");
const u32 gBattleAnimSpritePal_Tongue[] = INCBIN_U32("graphics/battle_anims/sprites/tongue.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Smoke[] = INCBIN_U32("graphics/battle_anims/sprites/smoke.4bpp.lz");
const u32 gBattleAnimSpritePal_Smoke[] = INCBIN_U32("graphics/battle_anims/sprites/smoke.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Smoke2[] = INCBIN_U32("graphics/battle_anims/sprites/smoke_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_BlueFlames[] = INCBIN_U32("graphics/battle_anims/sprites/blue_flames.4bpp.lz");
const u32 gBattleAnimSpritePal_BlueFlames[] = INCBIN_U32("graphics/battle_anims/sprites/blue_flames.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BlueFlames2[] = INCBIN_U32("graphics/battle_anims/sprites/blue_flames_2.4bpp.lz");

// Contest

const u32 gUnusedGfx_OldContest[] = INCBIN_U32("graphics/unused/old_contest.4bpp.lz");
const u32 gUnusedPal_OldContest[] = INCBIN_U32("graphics/unused/old_contest.gbapal.lz");
const u32 gUnusedTilemap_OldContest[] = INCBIN_U32("graphics/unused/old_contest.bin.lz");

const u32 gFile_graphics_unknown_unknown_D15BE8_tilemap[] = INCBIN_U32("graphics/unknown/unknown_D15BE8.bin.lz");

const u32 gFile_graphics_unused_numbers_sheet[] = INCBIN_U32("graphics/unused/numbers.4bpp.lz"); // From ruby
const u32 gFile_graphics_unused_numbers_palette[] = INCBIN_U32("graphics/unused/numbers.gbapal.lz"); // From ruby

const u32 gUnusedGfx_OldContest2[] = INCBIN_U32("graphics/unused/old_contest_2.4bpp.lz");
const u32 gOldContestPalette[] = INCBIN_U32("graphics/unused/old_contest_2.gbapal.lz");
const u32 gOldContestGfx[] = INCBIN_U32("graphics/unused/old_contest_2.bin.lz");

const u32 gFile_graphics_unknown_unknown_D172A8_tilemap[] = INCBIN_U32("graphics/unknown/unknown_D172A8.bin.lz");

const u32 gFile_graphics_unknown_unknown_D17548_tilemap[] = INCBIN_U32("graphics/unknown/unknown_D17548.bin.lz");

const u32 gFile_graphics_unknown_unknown_D17654_tilemap[] = INCBIN_U32("graphics/unknown/unknown_D17654.bin.lz");

const u32 gFile_graphics_unknown_unknown_D17AB8_tilemap[] = INCBIN_U32("graphics/unknown/unknown_D17AB8.bin.lz");

const u32 gContestMiscGfx[] = INCBIN_U32("graphics/contest/misc.4bpp.lz");

const u32 gFile_graphics_contest_audience_sheet[] = INCBIN_U32("graphics/contest/audience.4bpp.lz");

const u32 gFile_graphics_contest_faces_sheet[] = INCBIN_U32("graphics/contest/faces.4bpp.lz");

const u32 gFile_graphics_contest_judge_symbols_sheet[] = INCBIN_U32("graphics/contest/judge_symbols.4bpp.lz");
const u32 gFile_graphics_contest_judge_symbols_palette[] = INCBIN_U32("graphics/contest/judge_symbols.gbapal.lz");

const u8 gFile_graphics_contest_heart[] = INCBIN_U8("graphics/contest/heart.4bpp");

const u32 gFile_graphics_unknown_unknown_D196E4_sheet[] = INCBIN_U32("graphics/unknown/unknown_D196E4.4bpp.lz");
const u32 gFile_graphics_unknown_unknown_D196E4_palette[] = INCBIN_U32("graphics/unknown/unknown_D196E4.gbapal.lz");

const u32 gUnknown_8D197FC[] = INCBIN_U32("graphics/contest/misc_2.4bpp.lz");

const u32 gFile_graphics_contest_misc_2_tilemap_1_tilemap[] = INCBIN_U32("graphics/contest/misc_2_tilemap_1.bin.lz");
const u32 gFile_graphics_contest_misc_2_tilemap_2_tilemap[] = INCBIN_U32("graphics/contest/misc_2_tilemap_2.bin.lz");
const u32 gFile_graphics_contest_misc_2_tilemap_3_tilemap[] = INCBIN_U32("graphics/contest/misc_2_tilemap_3.bin.lz");

const u32 gFile_graphics_contest_misc_2_palette[] = INCBIN_U32("graphics/contest/misc_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Impact[] = INCBIN_U32("graphics/battle_anims/sprites/impact.4bpp.lz");
const u32 gBattleAnimSpritePal_Impact[] = INCBIN_U32("graphics/battle_anims/sprites/impact.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Particles[] = INCBIN_U32("graphics/battle_anims/sprites/particles.4bpp.lz");

const u32 gBattleAnimSpriteGfx_CircleImpact[] = INCBIN_U32("graphics/battle_anims/sprites/circle_impact.4bpp.lz");
const u32 gBattleAnimSpritePal_CircleImpact[] = INCBIN_U32("graphics/battle_anims/sprites/circle_impact.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Scratch[] = INCBIN_U32("graphics/battle_anims/sprites/scratch.4bpp.lz");

const u32 gBattleAnimSpriteGfx_SharpTeeth[] = INCBIN_U32("graphics/battle_anims/sprites/sharp_teeth.4bpp.lz");
const u32 gBattleAnimSpritePal_SharpTeeth[] = INCBIN_U32("graphics/battle_anims/sprites/sharp_teeth.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Clamp[] = INCBIN_U32("graphics/battle_anims/sprites/clamp.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Cut[] = INCBIN_U32("graphics/battle_anims/sprites/cut.4bpp.lz");

const u32 gBattleAnimSpriteGfx_RainbowRings[] = INCBIN_U32("graphics/battle_anims/sprites/rainbow_rings.4bpp.lz");
const u32 gBattleAnimSpritePal_RainbowRings[] = INCBIN_U32("graphics/battle_anims/sprites/rainbow_rings.gbapal.lz");

const u32 gBattleAnimSpriteGfx_IceCrystals[] = INCBIN_U32("graphics/battle_anims/sprites/ice_crystals.4bpp.lz");
const u32 gBattleAnimSpritePal_IceCrystals[] = INCBIN_U32("graphics/battle_anims/sprites/ice_crystals.gbapal.lz");

const u32 gBattleAnimSpriteGfx_IceSpikes[] = INCBIN_U32("graphics/battle_anims/sprites/ice_spikes.4bpp.lz");

const u32 gUnusedGfx_OldBeatUp[] = INCBIN_U32("graphics/unused/old_beatup.4bpp.lz");
const u32 gUnusedPal_OldBeatUp[] = INCBIN_U32("graphics/unused/old_beatup.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Orbs[] = INCBIN_U32("graphics/battle_anims/sprites/orbs.4bpp.lz");
const u32 gBattleAnimSpritePal_Orbs[] = INCBIN_U32("graphics/battle_anims/sprites/orbs.gbapal.lz");

const u32 gBattleAnimSpriteGfx_WaterOrb[] = INCBIN_U32("graphics/battle_anims/sprites/water_orb.4bpp.lz");

const u32 gBattleAnimSpriteGfx_WaterImpact[] = INCBIN_U32("graphics/battle_anims/sprites/water_impact.4bpp.lz");
const u32 gBattleAnimSpritePal_WaterImpact[] = INCBIN_U32("graphics/battle_anims/sprites/water_impact.gbapal.lz");

const u32 gBattleAnimSpritePal_BrownOrb[] = INCBIN_U32("graphics/battle_anims/sprites/brown_orb.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MudSand[] = INCBIN_U32("graphics/battle_anims/sprites/mud_sand.4bpp.lz");
const u32 gBattleAnimSpritePal_MudSand[] = INCBIN_U32("graphics/battle_anims/sprites/mud_sand.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PoisonBubble[] = INCBIN_U32("graphics/battle_anims/sprites/poison_bubble.4bpp.lz");
const u32 gBattleAnimSpritePal_PoisonBubble[] = INCBIN_U32("graphics/battle_anims/sprites/poison_bubble.gbapal.lz");

const u32 gBattleAnimSpriteGfx_ToxicBubble[] = INCBIN_U32("graphics/battle_anims/sprites/toxic_bubble.4bpp.lz");

const u32 gBattleAnimSpriteGfx_HornHit2[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit_2.4bpp.lz");
const u32 gBattleAnimSpritePal_HornHit2[] = INCBIN_U32("graphics/battle_anims/sprites/horn_hit_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_AirWave2[] = INCBIN_U32("graphics/battle_anims/sprites/air_wave_2.4bpp.lz");
const u32 gBattleAnimSpritePal_AirWave2[] = INCBIN_U32("graphics/battle_anims/sprites/air_wave_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SmallBubbles[] = INCBIN_U32("graphics/battle_anims/sprites/small_bubbles.4bpp.lz");
const u32 gBattleAnimSpritePal_SmallBubbles[] = INCBIN_U32("graphics/battle_anims/sprites/small_bubbles.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RoundShadow[] = INCBIN_U32("graphics/battle_anims/sprites/round_shadow.4bpp.lz");
const u32 gBattleAnimSpritePal_RoundShadow[] = INCBIN_U32("graphics/battle_anims/sprites/round_shadow.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Sunlight[] = INCBIN_U32("graphics/battle_anims/sprites/sunlight.4bpp.lz");
const u32 gBattleAnimSpritePal_Sunlight[] = INCBIN_U32("graphics/battle_anims/sprites/sunlight.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Spore[] = INCBIN_U32("graphics/battle_anims/sprites/spore.4bpp.lz");

const u32 gBattleAnimSpritePal_Spore[] = INCBIN_U32("graphics/battle_anims/sprites/spore.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Flower[] = INCBIN_U32("graphics/battle_anims/sprites/flower.4bpp.lz");
const u32 gBattleAnimSpritePal_Flower[] = INCBIN_U32("graphics/battle_anims/sprites/flower.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RazorLeaf[] = INCBIN_U32("graphics/battle_anims/sprites/razor_leaf.4bpp.lz");
const u32 gBattleAnimSpritePal_RazorLeaf[] = INCBIN_U32("graphics/battle_anims/sprites/razor_leaf.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MistCloud[] = INCBIN_U32("graphics/battle_anims/sprites/mist_cloud.4bpp.lz");
const u32 gBattleAnimSpritePal_MistCloud[] = INCBIN_U32("graphics/battle_anims/sprites/mist_cloud.gbapal.lz");

const u32 gFile_graphics_unknown_unknown_D1BE74_sheet[] = INCBIN_U32("graphics/unknown/unknown_D1BE74.4bpp.lz");
const u32 gFile_graphics_unknown_unknown_D1BE74_palette[] = INCBIN_U32("graphics/unknown/unknown_D1BE74.gbapal.lz");
const u32 gFile_graphics_unknown_unknown_D1BE74_tilemap[] = INCBIN_U32("graphics/unknown/unknown_D1BE74.bin.lz");

const u32 gBattleAnimSpriteGfx_WhirlwindLines[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind_lines.4bpp.lz");
const u32 gBattleAnimSpritePal_WhirlwindLines[] = INCBIN_U32("graphics/battle_anims/sprites/whirlwind_lines.gbapal.lz");

const u32 gBattleAnimSpriteGfx_GoldRing[] = INCBIN_U32("graphics/battle_anims/sprites/gold_ring.4bpp.lz");
const u32 gBattleAnimSpritePal_GoldRing[] = INCBIN_U32("graphics/battle_anims/sprites/gold_ring.gbapal.lz");

const u32 gBattleAnimSpritePal_BlueRing2[] = INCBIN_U32("graphics/battle_anims/sprites/blue_ring_2.gbapal.lz");
const u32 gBattleAnimSpritePal_PurpleRing[] = INCBIN_U32("graphics/battle_anims/sprites/purple_ring.gbapal.lz");
const u32 gBattleAnimSpritePal_BlueRing[] = INCBIN_U32("graphics/battle_anims/sprites/blue_ring.gbapal.lz");

const u32 gBattleAnimSpriteGfx_GreenLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/green_light_wall.4bpp.lz");
const u32 gBattleAnimSpritePal_GreenLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/green_light_wall.gbapal.lz");

const u32 gBattleAnimSpritePal_BlueLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/blue_light_wall.gbapal.lz");
const u32 gBattleAnimSpritePal_RedLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/red_light_wall.gbapal.lz");
const u32 gBattleAnimSpritePal_GrayLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/gray_light_wall.gbapal.lz");
const u32 gBattleAnimSpritePal_OrangeLightWall[] = INCBIN_U32("graphics/battle_anims/sprites/orange_light_wall.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BlackBall2[] = INCBIN_U32("graphics/battle_anims/sprites/black_ball_2.4bpp.lz");
const u32 gBattleAnimSpritePal_BlackBall2[] = INCBIN_U32("graphics/battle_anims/sprites/black_ball_2.gbapal.lz");

const u32 gBattleAnimSpritePal_PurpleGasCloud[] = INCBIN_U32("graphics/battle_anims/sprites/purple_gas_cloud.gbapal.lz");

const u32 gFile_graphics_contest_judge_sheet[] = INCBIN_U32("graphics/contest/judge.4bpp.lz");
const u32 gFile_graphics_contest_judge_palette[] = INCBIN_U32("graphics/contest/judge.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Spark[] = INCBIN_U32("graphics/battle_anims/sprites/spark.4bpp.lz");
const u32 gBattleAnimSpritePal_Spark[] = INCBIN_U32("graphics/battle_anims/sprites/spark.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SparkH[] = INCBIN_U32("graphics/battle_anims/sprites/spark_h.4bpp.lz");

const u32 gBattleAnimBgImage_Dark[] = INCBIN_U32("graphics/battle_anims/backgrounds/dark.4bpp.lz");
const u32 gBattleAnimBgPalette_Dark[] = INCBIN_U32("graphics/battle_anims/backgrounds/dark.gbapal.lz");
const u32 gBattleAnimBgTilemap_Dark[] = INCBIN_U32("graphics/battle_anims/backgrounds/dark.bin.lz");

const u32 gMetalShineGfx[] = INCBIN_U32("graphics/battle_anims/masks/metal_shine.4bpp.lz");
const u32 gMetalShinePalette[] = INCBIN_U32("graphics/battle_anims/masks/metal_shine.gbapal.lz");
const u32 gMetalShineTilemap[] = INCBIN_U32("graphics/battle_anims/masks/metal_shine.bin.lz");

const u32 gUnusedGfx_Goosuto[] = INCBIN_U32("graphics/unused/goosuto.4bpp.lz"); // ghost
const u32 gUnusedPal_Goosuto[] = INCBIN_U32("graphics/unused/goosuto.gbapal.lz");
const u32 gUnusedTilemap_Goosuto[] = INCBIN_U32("graphics/unused/goosuto.bin.lz");

const u32 gBattleAnimSpriteGfx_YellowStar[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_star.4bpp.lz");
const u32 gBattleAnimSpritePal_YellowStar[] = INCBIN_U32("graphics/battle_anims/sprites/yellow_star.gbapal.lz");

const u32 gBattleAnimSpriteGfx_LargeFreshEgg[] = INCBIN_U32("graphics/battle_anims/sprites/large_fresh_egg.4bpp.lz");
const u32 gBattleAnimSpritePal_LargeFreshEgg[] = INCBIN_U32("graphics/battle_anims/sprites/large_fresh_egg.gbapal.lz");

const u32 gBattleAnimSpriteGfx_ShadowBall[] = INCBIN_U32("graphics/battle_anims/sprites/shadow_ball.4bpp.lz");
const u32 gBattleAnimSpritePal_ShadowBall[] = INCBIN_U32("graphics/battle_anims/sprites/shadow_ball.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Lick[] = INCBIN_U32("graphics/battle_anims/sprites/lick.4bpp.lz");
const u32 gBattleAnimSpritePal_Lick[] = INCBIN_U32("graphics/battle_anims/sprites/lick.gbapal.lz");

const u32 gBattleAnimSpriteGfx_VoidLines[] = INCBIN_U32("graphics/battle_anims/sprites/void_lines.4bpp.lz");
const u32 gBattleAnimSpritePal_VoidLines[] = INCBIN_U32("graphics/battle_anims/sprites/void_lines.gbapal.lz");

const u32 gBattleAnimSpritePal_String[] = INCBIN_U32("graphics/battle_anims/sprites/string.gbapal.lz");
const u32 gBattleAnimSpriteGfx_String[] = INCBIN_U32("graphics/battle_anims/sprites/string.4bpp.lz");

const u32 gBattleAnimSpriteGfx_WebThread[] = INCBIN_U32("graphics/battle_anims/sprites/web_thread.4bpp.lz");
const u32 gBattleAnimSpriteGfx_SpiderWeb[] = INCBIN_U32("graphics/battle_anims/sprites/spider_web.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Lightbulb[] = INCBIN_U32("graphics/battle_anims/sprites/lightbulb.4bpp.lz");
const u32 gBattleAnimSpritePal_Lightbulb[] = INCBIN_U32("graphics/battle_anims/sprites/lightbulb.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Slash[] = INCBIN_U32("graphics/battle_anims/sprites/slash.4bpp.lz");
const u32 gBattleAnimSpritePal_Slash[] = INCBIN_U32("graphics/battle_anims/sprites/slash.gbapal.lz");

const u32 gBattleAnimSpriteGfx_FocusEnergy[] = INCBIN_U32("graphics/battle_anims/sprites/focus_energy.4bpp.lz");
const u32 gBattleAnimSpritePal_FocusEnergy[] = INCBIN_U32("graphics/battle_anims/sprites/focus_energy.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SphereToCube[] = INCBIN_U32("graphics/battle_anims/sprites/sphere_to_cube.4bpp.lz");
const u32 gBattleAnimSpritePal_SphereToCube[] = INCBIN_U32("graphics/battle_anims/sprites/sphere_to_cube.gbapal.lz");

const u32 gBattleAnimBgImage_Psychic[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic.4bpp.lz");
const u32 gBattleAnimBgPalette_Psychic[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic.gbapal.lz");
const u32 gBattleAnimBgTilemap_Psychic[] = INCBIN_U32("graphics/battle_anims/backgrounds/psychic.bin.lz");

const u32 gBattleAnimSpriteGfx_Eye[] = INCBIN_U32("graphics/battle_anims/sprites/eye.4bpp.lz");
const u32 gBattleAnimSpritePal_Eye[] = INCBIN_U32("graphics/battle_anims/sprites/eye.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Tendrils[] = INCBIN_U32("graphics/battle_anims/sprites/tendrils.4bpp.lz");
const u32 gBattleAnimSpritePal_Tendrils[] = INCBIN_U32("graphics/battle_anims/sprites/tendrils.gbapal.lz");

const u32 gHealthboxSinglesPlayerGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_singles_player.4bpp.lz");
const u32 gHealthboxSinglesOpponentGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_singles_opponent.4bpp.lz");
const u32 gHealthboxDoublesPlayerGfx[] = INCBIN_U32( "graphics/battle_interface/healthbox_doubles_player.4bpp.lz");
const u32 gHealthboxDoublesOpponentGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_doubles_opponent.4bpp.lz");
const u32 gHealthboxSafariGfx[] = INCBIN_U32("graphics/battle_interface/healthbox_safari.4bpp.lz");

const u32 gUnusedGfx_Shadow[] = INCBIN_U32("graphics/unused/shadow.4bpp.lz");
const u32 gUnusedPal_Shadow[] = INCBIN_U32("graphics/unused/shadow.gbapal.lz");

const u32 gBattleAnimSpriteGfx_LockOn[] = INCBIN_U32("graphics/battle_anims/sprites/lock_on.4bpp.lz");
const u32 gBattleAnimSpritePal_LockOn[] = INCBIN_U32("graphics/battle_anims/sprites/lock_on.gbapal.lz");

const u32 gBattleAnimSpriteGfx_OpeningEye[] = INCBIN_U32("graphics/battle_anims/sprites/opening_eye.4bpp.lz");
const u32 gBattleAnimSpritePal_OpeningEye[] = INCBIN_U32("graphics/battle_anims/sprites/opening_eye.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RoundWhiteHalo[] = INCBIN_U32("graphics/battle_anims/sprites/round_white_halo.4bpp.lz");
const u32 gBattleAnimSpritePal_RoundWhiteHalo[] = INCBIN_U32("graphics/battle_anims/sprites/round_white_halo.gbapal.lz");

const u32 gBattleAnimSpriteGfx_TealAlert[] = INCBIN_U32("graphics/battle_anims/sprites/teal_alert.4bpp.lz");
const u32 gBattleAnimSpritePal_TealAlert[] = INCBIN_U32("graphics/battle_anims/sprites/teal_alert.gbapal.lz");

const u32 gBattleAnimSpriteGfx_FangAttack[] = INCBIN_U32("graphics/battle_anims/sprites/fang_attack.4bpp.lz");
const u32 gBattleAnimSpritePal_FangAttack[] = INCBIN_U32("graphics/battle_anims/sprites/fang_attack.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PurpleHandOutline[] = INCBIN_U32("graphics/battle_anims/sprites/purple_hand_outline.4bpp.lz");
const u32 gBattleAnimSpritePal_PurpleHandOutline[] = INCBIN_U32("graphics/battle_anims/sprites/purple_hand_outline.gbapal.lz");

const u32 gFile_graphics_battle_anims_masks_curse_sheet[] = INCBIN_U32("graphics/battle_anims/masks/curse.4bpp.lz");
const u32 gFile_graphics_battle_anims_masks_curse_tilemap[] = INCBIN_U32("graphics/battle_anims/masks/curse.bin.lz");

const u32 gBattleAnimSpriteGfx_Pencil[] = INCBIN_U32("graphics/battle_anims/sprites/pencil.4bpp.lz");
const u32 gBattleAnimSpritePal_Pencil[] = INCBIN_U32("graphics/battle_anims/sprites/pencil.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Spiral[] = INCBIN_U32("graphics/battle_anims/sprites/spiral.4bpp.lz");
const u32 gBattleAnimSpritePal_Spiral[] = INCBIN_U32("graphics/battle_anims/sprites/spiral.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Moon[] = INCBIN_U32("graphics/battle_anims/sprites/moon.4bpp.lz");
const u32 gBattleAnimSpritePal_Moon[] = INCBIN_U32("graphics/battle_anims/sprites/moon.gbapal.lz");

const u32 gBattleAnimSpriteGfx_GreenSparkle[] = INCBIN_U32("graphics/battle_anims/sprites/green_sparkle.4bpp.lz");
const u32 gBattleAnimSpritePal_GreenSparkle[] = INCBIN_U32("graphics/battle_anims/sprites/green_sparkle.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SnoreZ[] = INCBIN_U32("graphics/battle_anims/sprites/snore_z.4bpp.lz");
const u32 gBattleAnimSpritePal_SnoreZ[] = INCBIN_U32("graphics/battle_anims/sprites/snore_z.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Explosion[] = INCBIN_U32("graphics/battle_anims/sprites/explosion.4bpp.lz");
const u32 gBattleAnimSpritePal_Explosion[] = INCBIN_U32("graphics/battle_anims/sprites/explosion.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Nail[] = INCBIN_U32("graphics/battle_anims/sprites/nail.4bpp.lz");
const u32 gBattleAnimSpritePal_Nail[] = INCBIN_U32("graphics/battle_anims/sprites/nail.gbapal.lz");

const u32 gBattleAnimSpriteGfx_GhostlySpirit[] = INCBIN_U32("graphics/battle_anims/sprites/ghostly_spirit.4bpp.lz");
const u32 gBattleAnimSpritePal_GhostlySpirit[] = INCBIN_U32("graphics/battle_anims/sprites/ghostly_spirit.gbapal.lz");

const u32 gBattleAnimSpriteGfx_WarmRock[] = INCBIN_U32("graphics/battle_anims/sprites/warm_rock.4bpp.lz");
const u32 gBattleAnimSpritePal_WarmRock[] = INCBIN_U32("graphics/battle_anims/sprites/warm_rock.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PunchImpact[] = INCBIN_U32("graphics/battle_anims/sprites/punch_impact.4bpp.lz");
const u32 gBattleAnimSpritePal_PunchImpact[] = INCBIN_U32("graphics/battle_anims/sprites/punch_impact.gbapal.lz");

const u32 gBattleAnimSpriteGfx_BreakingEgg[] = INCBIN_U32("graphics/battle_anims/sprites/breaking_egg.4bpp.lz");
const u32 gBattleAnimSpritePal_BreakingEgg[] = INCBIN_U32("graphics/battle_anims/sprites/breaking_egg.gbapal.lz");

const u32 gBattleAnimSpriteGfx_ThinRing[] = INCBIN_U32("graphics/battle_anims/sprites/thin_ring.4bpp.lz");
const u32 gBattleAnimSpritePal_ThinRing[] = INCBIN_U32("graphics/battle_anims/sprites/thin_ring.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MusicNotes2[] = INCBIN_U32("graphics/battle_anims/sprites/music_notes_2.4bpp.lz");
const u32 gBattleAnimSpritePal_MusicNotes2[] = INCBIN_U32("graphics/battle_anims/sprites/music_notes_2.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Bell[] = INCBIN_U32("graphics/battle_anims/sprites/bell.4bpp.lz");
const u32 gBattleAnimSpritePal_Bell[] = INCBIN_U32("graphics/battle_anims/sprites/bell.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SpeedDust[] = INCBIN_U32("graphics/battle_anims/sprites/speed_dust.4bpp.lz");
const u32 gBattleAnimSpritePal_SpeedDust[] = INCBIN_U32("graphics/battle_anims/sprites/speed_dust.gbapal.lz");

const u32 gBattleAnimSpriteGfx_TornMetal[] = INCBIN_U32("graphics/battle_anims/sprites/torn_metal.4bpp.lz");

const u32 gBattleAnimSpriteGfx_ThoughtBubble[] = INCBIN_U32("graphics/battle_anims/sprites/thought_bubble.4bpp.lz");
const u32 gBattleAnimSpritePal_ThoughtBubble[] = INCBIN_U32("graphics/battle_anims/sprites/thought_bubble.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Finger[] = INCBIN_U32("graphics/battle_anims/sprites/finger.4bpp.lz");
const u32 gBattleAnimSpritePal_Finger[] = INCBIN_U32("graphics/battle_anims/sprites/finger.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MagentaHeart[] = INCBIN_U32("graphics/battle_anims/sprites/magenta_heart.4bpp.lz");

const u32 gBattleAnimSpritePal_PinkHeart[] = INCBIN_U32("graphics/battle_anims/sprites/pink_heart.gbapal.lz");
const u32 gBattleAnimSpritePal_MagentaHeart[] = INCBIN_U32("graphics/battle_anims/sprites/magenta_heart.gbapal.lz");
const u32 gBattleAnimSpritePal_RedHeart[] = INCBIN_U32("graphics/battle_anims/sprites/red_heart.gbapal.lz");

const u32 gBattleAnimBg_AttractGfx[] = INCBIN_U32("graphics/battle_anims/backgrounds/attract.4bpp.lz");
const u32 gBattleAnimBg_AttractPal[] = INCBIN_U32("graphics/battle_anims/backgrounds/attract.gbapal.lz");
const u32 gBattleAnimBg_AttractTilemap[] = INCBIN_U32("graphics/battle_anims/backgrounds/attract.bin.lz");

const u32 gBattleAnimSpriteGfx_RedOrb[] = INCBIN_U32("graphics/battle_anims/sprites/red_orb.4bpp.lz");
const u32 gBattleAnimSpritePal_RedOrb[] = INCBIN_U32("graphics/battle_anims/sprites/red_orb.gbapal.lz");

const u32 gBattleAnimSpriteGfx_CircleOfLight[] = INCBIN_U32("graphics/battle_anims/sprites/circle_of_light.4bpp.lz");
const u32 gBattleAnimSpriteGfx_ElectricOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/electric_orbs.4bpp.lz");
const u32 gBattleAnimSpriteGfx_Electricity[] = INCBIN_U32("graphics/battle_anims/sprites/electricity.4bpp.lz");

const u32 gBattleAnimSpritePal_ElectricOrbs[] = INCBIN_U32("graphics/battle_anims/sprites/electric_orbs.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Finger2[] = INCBIN_U32("graphics/battle_anims/sprites/finger_2.4bpp.lz");

const u32 gBattleAnimSpriteGfx_MovementWaves[] = INCBIN_U32("graphics/battle_anims/sprites/movement_waves.4bpp.lz");
const u32 gBattleAnimSpritePal_MovementWaves[] = INCBIN_U32("graphics/battle_anims/sprites/movement_waves.gbapal.lz");

const u32 gBattleAnim_ScaryFacePal[] = INCBIN_U32("graphics/battle_anims/backgrounds/scary_face.gbapal.lz");
const u32 gBattleAnim_ScaryFaceGfx[] = INCBIN_U32("graphics/battle_anims/backgrounds/scary_face.4bpp.lz");

const u32 gBattleAnimSpritePal_EyeSparkle[] = INCBIN_U32("graphics/battle_anims/sprites/eye_sparkle.gbapal.lz");
const u32 gBattleAnimSpriteGfx_EyeSparkle[] = INCBIN_U32("graphics/battle_anims/sprites/eye_sparkle.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Anger[] = INCBIN_U32("graphics/battle_anims/sprites/anger.4bpp.lz");
const u32 gBattleAnimSpritePal_Anger[] = INCBIN_U32("graphics/battle_anims/sprites/anger.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Conversion[] = INCBIN_U32("graphics/battle_anims/sprites/conversion.4bpp.lz");
const u32 gBattleAnimSpritePal_Conversion[] = INCBIN_U32("graphics/battle_anims/sprites/conversion.gbapal.lz");

const u32 gBattleAnimSpritePal_Angel[] = INCBIN_U32("graphics/battle_anims/sprites/angel.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Angel[] = INCBIN_U32("graphics/battle_anims/sprites/angel.4bpp.lz");

const u32 gBattleAnimSpritePal_Devil[] = INCBIN_U32("graphics/battle_anims/sprites/devil.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Devil[] = INCBIN_U32("graphics/battle_anims/sprites/devil.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Swipe[] = INCBIN_U32("graphics/battle_anims/sprites/swipe.4bpp.lz");
const u32 gBattleAnimSpritePal_Swipe[] = INCBIN_U32("graphics/battle_anims/sprites/swipe.gbapal.lz");

const u32 gBattleAnimSpritePal_Roots[] = INCBIN_U32("graphics/battle_anims/sprites/roots.gbapal.lz");
const u32 gBattleAnimSpriteGfx_Roots[] = INCBIN_U32("graphics/battle_anims/sprites/roots.4bpp.lz");

const u32 gBattleAnimSpritePal_ItemBag[] = INCBIN_U32("graphics/battle_anims/sprites/item_bag.gbapal.lz");
const u32 gBattleAnimSpriteGfx_ItemBag[] = INCBIN_U32("graphics/battle_anims/sprites/item_bag.4bpp.lz");

const u32 gBattleAnimSpritePal_TriForceTriangle[] = INCBIN_U32("graphics/battle_anims/sprites/tri_attack_triangle.gbapal.lz");
const u32 gBattleAnimSpriteGfx_TriForceTriangle[] = INCBIN_U32("graphics/battle_anims/sprites/tri_attack_triangle.4bpp.lz");

const u32 gBattleAnimSpritePal_LetterZ[] = INCBIN_U32("graphics/battle_anims/sprites/letter_z.gbapal.lz");
const u32 gBattleAnimSpriteGfx_LetterZ[] = INCBIN_U32("graphics/battle_anims/sprites/letter_z.4bpp.lz");

const u32 gBattleAnimBgPalette_Impact[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact.gbapal.lz");
const u32 gBattleAnimBgImage_Impact[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact.4bpp.lz");
const u32 gBattleAnimBgTilemap_ImpactOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact_opponent.bin.lz");

const u32 gBattleAnimBgTilemap_ImpactPlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact_player.bin.lz");
const u32 gBattleAnimBgTilemap_ImpactContests[] = INCBIN_U32("graphics/battle_anims/backgrounds/impact_contests.bin.lz");

const u32 gBattleAnimSpriteGfx_JaggedMusicNote[] = INCBIN_U32("graphics/battle_anims/sprites/jagged_music_note.4bpp.lz");
const u32 gBattleAnimSpritePal_JaggedMusicNote[] = INCBIN_U32("graphics/battle_anims/sprites/jagged_music_note.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Spotlight[] = INCBIN_U32("graphics/battle_anims/sprites/spotlight.4bpp.lz");

const u32 gBattleAnimSpriteGfx_Pokeball[] = INCBIN_U32("graphics/battle_anims/sprites/pokeball.4bpp.lz");
const u32 gBattleAnimSpritePal_Pokeball[] = INCBIN_U32("graphics/battle_anims/sprites/pokeball.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RapidSpin[] = INCBIN_U32("graphics/battle_anims/sprites/rapid_spin.4bpp.lz");
const u32 gBattleAnimSpritePal_RapidSpin[] = INCBIN_U32("graphics/battle_anims/sprites/rapid_spin.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MilkBottle[] = INCBIN_U32("graphics/battle_anims/sprites/milk_bottle.4bpp.lz");
const u32 gBattleAnimSpritePal_MilkBottle[] = INCBIN_U32("graphics/battle_anims/sprites/milk_bottle.gbapal.lz");

const u32 gBattleAnimSpriteGfx_WispFire[] = INCBIN_U32("graphics/battle_anims/sprites/wisp_fire.4bpp.lz");

const u32 gBattleAnimSpritePal_WispOrb[] = INCBIN_U32("graphics/battle_anims/sprites/wisp_orb.gbapal.lz");
const u32 gBattleAnimSpriteGfx_WispOrb[] = INCBIN_U32("graphics/battle_anims/sprites/wisp_orb.4bpp.lz");

const u32 gBattleAnimSpriteGfx_GoldStars[] = INCBIN_U32("graphics/battle_anims/sprites/gold_stars.4bpp.lz");
const u32 gBattleAnimSpritePal_GoldStars[] = INCBIN_U32("graphics/battle_anims/sprites/gold_stars.gbapal.lz");

const u32 gBattleAnimSpriteGfx_EclipsingOrb[] = INCBIN_U32("graphics/battle_anims/sprites/eclipsing_orb.4bpp.lz");
const u32 gBattleAnimSpritePal_EclipsingOrb[] = INCBIN_U32("graphics/battle_anims/sprites/eclipsing_orb.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PinkPetal[] = INCBIN_U32("graphics/battle_anims/sprites/pink_petal.4bpp.lz");
const u32 gBattleAnimSpritePal_PinkPetal[] = INCBIN_U32("graphics/battle_anims/sprites/pink_petal.gbapal.lz");

const u32 gBattleAnimSpriteGfx_GrayOrb[] = INCBIN_U32("graphics/battle_anims/sprites/gray_orb.4bpp.lz");
const u32 gBattleAnimSpritePal_GrayOrb[] = INCBIN_U32("graphics/battle_anims/sprites/gray_orb.gbapal.lz");

const u32 gBattleAnimSpritePal_BlueOrb[] = INCBIN_U32("graphics/battle_anims/sprites/blue_orb.gbapal.lz");
const u32 gBattleAnimSpritePal_RedOrb2[] = INCBIN_U32("graphics/battle_anims/sprites/red_orb_2.gbapal.lz");

const u32 gBattleAnimBgImage_Drill[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill.4bpp.lz");
const u32 gBattleAnimBgPalette_Drill[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill.gbapal.lz");

const u32 gBattleAnimBgPalette_Sky[] = INCBIN_U32("graphics/battle_anims/backgrounds/sky.gbapal.lz");

const u32 gBattleAnimBgTilemap_Drill[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill.bin.lz");
const u32 gBattleAnimBgTilemap_DrillContests[] = INCBIN_U32("graphics/battle_anims/backgrounds/drill_contests.bin.lz");

const u32 gBattleAnimBgImage_Aurora[] = INCBIN_U32("graphics/battle_anims/backgrounds/aurora.4bpp.lz");
const u32 gBattleAnimBgPalette_Aurora[] = INCBIN_U32("graphics/battle_anims/backgrounds/aurora.gbapal.lz");
const u32 gBattleAnimBgTilemap_Aurora[] = INCBIN_U32("graphics/battle_anims/backgrounds/aurora.bin.lz");

const u32 gBattleAnimBgTilemap_HighspeedOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed_opponent.bin.lz");
const u32 gBattleAnimBgPalette_Highspeed[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed.gbapal.lz");

const u32 gBattleAnimBgPalette_Bug[] = INCBIN_U32("graphics/battle_anims/backgrounds/bug.gbapal.lz");

const u32 gBattleAnimBgImage_Highspeed[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed.4bpp.lz");
const u32 gBattleAnimBgTilemap_HighspeedPlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/highspeed_player.bin.lz");

const u32 gBattleAnim_MorningSunGfx[] = INCBIN_U32("graphics/battle_anims/masks/light_beam.4bpp.lz");
const u32 gBattleAnim_MorningSunPal[] = INCBIN_U32("graphics/battle_anims/masks/light_beam.gbapal.lz");
const u32 gBattleAnim_MorningSunTilemap[] = INCBIN_U32("graphics/battle_anims/masks/light_beam.bin.lz");

const u32 gBattleAnimBgTilemap_GuillotineOpponent[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine_opponent.bin.lz");
const u32 gBattleAnimBgTilemap_GuillotinePlayer[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine_player.bin.lz");
const u32 gBattleAnimBgTilemap_GuillotineContests[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine_contests.bin.lz");

const u32 gBattleAnimBgImage_Guillotine[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine.4bpp.lz");
const u32 gBattleAnimBgPalette_Guillotine[] = INCBIN_U32("graphics/battle_anims/backgrounds/guillotine.gbapal.lz");

const u32 gBattleAnimBgImage_Thunder[] = INCBIN_U32("graphics/battle_anims/backgrounds/thunder.4bpp.lz");
const u32 gBattleAnimBgPalette_Thunder[] = INCBIN_U32("graphics/battle_anims/backgrounds/thunder.gbapal.lz");
const u32 gBattleAnimBgTilemap_Thunder[] = INCBIN_U32("graphics/battle_anims/backgrounds/thunder.bin.lz");

const u32 gBattleAnimSpriteGfx_PainSplit[] = INCBIN_U32("graphics/battle_anims/sprites/pain_split.4bpp.lz");
const u32 gBattleAnimSpritePal_PainSplit[] = INCBIN_U32("graphics/battle_anims/sprites/pain_split.gbapal.lz");

const u32 gBattleAnimSpriteGfx_HandsAndFeet[] = INCBIN_U32("graphics/battle_anims/sprites/hands_and_feet.4bpp.lz");
const u32 gBattleAnimSpritePal_HandsAndFeet[] = INCBIN_U32("graphics/battle_anims/sprites/hands_and_feet.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Confetti[] = INCBIN_U32("graphics/battle_anims/sprites/confetti.4bpp.lz");
const u32 gBattleAnimSpritePal_Confetti[] = INCBIN_U32("graphics/battle_anims/sprites/confetti.gbapal.lz");

const u32 gSubstituteDollPal[] = INCBIN_U32("graphics/battle_anims/sprites/substitute.gbapal.lz");
const u32 gSubstituteDollGfx[] = INCBIN_U32("graphics/battle_anims/sprites/substitute.4bpp.lz");
const u32 gSubstituteDollTilemap[] = INCBIN_U32("graphics/battle_anims/sprites/substitute.bin.lz");

const u32 gBattleAnimSpriteGfx_GreenStar[] = INCBIN_U32("graphics/battle_anims/sprites/green_star.4bpp.lz");
const u32 gBattleAnimSpritePal_GreenStar[] = INCBIN_U32("graphics/battle_anims/sprites/green_star.gbapal.lz");

const u32 gFile_graphics_misc_confetti_sheet[] = INCBIN_U32("graphics/misc/confetti.4bpp.lz");
const u32 gFile_graphics_misc_confetti_palette[] = INCBIN_U32("graphics/misc/confetti.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PinkCloud[] = INCBIN_U32("graphics/battle_anims/sprites/pink_cloud.4bpp.lz");
const u32 gBattleAnimSpritePal_PinkCloud[] = INCBIN_U32("graphics/battle_anims/sprites/pink_cloud.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SweatDrop[] = INCBIN_U32("graphics/battle_anims/sprites/sweat_drop.4bpp.lz");
const u32 gBattleAnimSpritePal_SweatDrop[] = INCBIN_U32("graphics/battle_anims/sprites/sweat_drop.gbapal.lz");

const u32 gBattleStatMask_Gfx[] = INCBIN_U32("graphics/battle_anims/masks/stat.4bpp.lz");
const u32 gBattleStatMask1_Tilemap[] = INCBIN_U32("graphics/battle_anims/masks/stat_tilemap_1.bin.lz");
const u32 gBattleStatMask2_Tilemap[] = INCBIN_U32("graphics/battle_anims/masks/stat_tilemap_2.bin.lz");

const u32 gBattleStatMask1_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat1.gbapal.lz");
const u32 gBattleStatMask2_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat2.gbapal.lz");
const u32 gBattleStatMask3_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat3.gbapal.lz");
const u32 gBattleStatMask4_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat4.gbapal.lz");
const u32 gBattleStatMask5_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat5.gbapal.lz");
const u32 gBattleStatMask6_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat6.gbapal.lz");
const u32 gBattleStatMask7_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat7.gbapal.lz");
const u32 gBattleStatMask8_Pal[] = INCBIN_U32("graphics/battle_anims/masks/stat8.gbapal.lz");

const u32 gCureBubblesGfx[] = INCBIN_U32("graphics/battle_anims/masks/cure_bubbles.4bpp.lz");
const u32 gCureBubblesPal[] = INCBIN_U32("graphics/battle_anims/masks/cure_bubbles.gbapal.lz");
const u32 gCureBubblesTilemap[] = INCBIN_U32("graphics/battle_anims/masks/cure_bubbles.bin.lz");

const u32 gBattleAnimSpritePal_PurpleScratch[] = INCBIN_U32("graphics/battle_anims/sprites/purple_scratch.gbapal.lz");
const u32 gBattleAnimSpriteGfx_PurpleScratch[] = INCBIN_U32("graphics/battle_anims/sprites/purple_scratch.4bpp.lz");

const u32 gBattleAnimSpriteGfx_PurpleSwipe[] = INCBIN_U32("graphics/battle_anims/sprites/purple_swipe.4bpp.lz");

const u32 gBattleAnimSpriteGfx_GuardRing[] = INCBIN_U32("graphics/battle_anims/sprites/guard_ring.4bpp.lz");
const u32 gBattleAnimSpritePal_GuardRing[] = INCBIN_U32("graphics/battle_anims/sprites/guard_ring.gbapal.lz");

const u32 gBattleAnimSpriteGfx_TagHand[] = INCBIN_U32("graphics/battle_anims/sprites/tag_hand.4bpp.lz");

const u32 gBattleAnimSpriteGfx_NoiseLine[] = INCBIN_U32("graphics/battle_anims/sprites/noise_line.4bpp.lz");

const u32 gUnknown_D2EC24_Gfx[] = INCBIN_U32("graphics/battle_anims/masks/unknown_D2EC24.4bpp.lz");
const u32 gUnknown_D2EC24_Tilemap[] = INCBIN_U32("graphics/battle_anims/masks/unknown_D2EC24.bin.lz");

const u32 gBattleAnimSpriteGfx_SmallRedEye[] = INCBIN_U32("graphics/battle_anims/sprites/small_red_eye.4bpp.lz");
const u32 gBattleAnimSpritePal_SmallRedEye[] = INCBIN_U32("graphics/battle_anims/sprites/small_red_eye.gbapal.lz");

const u32 gBattleAnimSpriteGfx_HollowOrb[] = INCBIN_U32("graphics/battle_anims/sprites/hollow_orb.4bpp.lz");
const u32 gBattleAnimSpritePal_HollowOrb[] = INCBIN_U32("graphics/battle_anims/sprites/hollow_orb.gbapal.lz");

const u32 gBattleAnimSpriteGfx_XSign[] = INCBIN_U32("graphics/battle_anims/sprites/x_sign.4bpp.lz");

const u32 gBattleAnimSpriteGfx_BluegreenOrb[] = INCBIN_U32("graphics/battle_anims/sprites/bluegreen_orb.4bpp.lz");
const u32 gBattleAnimSpritePal_BluegreenOrb[] = INCBIN_U32("graphics/battle_anims/sprites/bluegreen_orb.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PawPrint[] = INCBIN_U32("graphics/battle_anims/sprites/paw_print.4bpp.lz");
const u32 gBattleAnimSpritePal_PawPrint[] = INCBIN_U32("graphics/battle_anims/sprites/paw_print.gbapal.lz");

const u32 gBattleAnimSpriteGfx_PurpleFlame[] = INCBIN_U32("graphics/battle_anims/sprites/purple_flame.4bpp.lz");
const u32 gBattleAnimSpritePal_PurpleFlame[] = INCBIN_U32("graphics/battle_anims/sprites/purple_flame.gbapal.lz");

const u32 gBattleAnimSpriteGfx_RedBall[] = INCBIN_U32("graphics/battle_anims/sprites/red_ball.4bpp.lz");
const u32 gBattleAnimSpritePal_RedBall[] = INCBIN_U32("graphics/battle_anims/sprites/red_ball.gbapal.lz");

const u32 gBattleAnimSpriteGfx_SmellingsaltEffect[] = INCBIN_U32("graphics/battle_anims/sprites/smellingsalt_effect.4bpp.lz");
const u32 gBattleAnimSpritePal_SmellingsaltEffect[] = INCBIN_U32("graphics/battle_anims/sprites/smellingsalt_effect.gbapal.lz");

const u32 gBattleAnimSpriteGfx_MagnifyingGlass[] = INCBIN_U32("graphics/battle_anims/sprites/magnifying_glass.4bpp.lz");
const u32 gBattleAnimSpritePal_MagnifyingGlass[] = INCBIN_U32("graphics/battle_anims/sprites/magnifying_glass.gbapal.lz");

const u32 gBattleAnimSpriteGfx_Meteor[] = INCBIN_U32("graphics/battle_anims/sprites/meteor.4bpp.lz");
const u32 gBattleAnimSpritePal_Meteor[] = INCBIN_U32("graphics/battle_anims/sprites/meteor.gbapal.lz");

const u32 gBattleAnimSpriteGfx_FlatRock[] = INCBIN_U32("graphics/battle_anims/sprites/flat_rock.4bpp.lz");
const u32 gBattleAnimSpritePal_FlatRock[] = INCBIN_U32("graphics/battle_anims/sprites/flat_rock.gbapal.lz");

const u16 gUnknown_8D2FBB4[] = INCBIN_U16("graphics/interface/unk_8D2FBB4.gbapal");

#include "data/graphics/pokemon.h"
#include "data/graphics/trainers.h"

const u8 gMonIcon_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/icon.4bpp");
const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint.1bpp");

const u32 gFile_graphics_battle_transitions_vs_frame_sheet[] = INCBIN_U32("graphics/battle_transitions/vs_frame.4bpp.lz");
const u32 gFile_graphics_battle_transitions_vs_frame_tilemap[] = INCBIN_U32("graphics/battle_transitions/vs_frame.bin.lz");
const u32 gFile_graphics_battle_transitions_vs_frame_palette[] = INCBIN_U32("graphics/battle_transitions/vs_frame.gbapal.lz");

const u32 gFile_graphics_battle_transitions_vs_sheet[] = INCBIN_U32("graphics/battle_transitions/vs.4bpp.lz");

#include "data/graphics/battle_terrain.h"
