#ifndef _COLOR_H_
#define _COLOR_H_

typedef struct
{
	float r;
	float g;
	float b;
	float a;
} Color;

typedef struct
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
} RgbColor;

RgbColor rgb_color_make(unsigned int hex);
Color color_make(unsigned int hex);

char* rgb_color_term(RgbColor color, char* text);
char* color_term(Color color, char* text);

void color_init();

extern Color imperial_red;
extern Color scarlet;
extern Color indian_red;
extern Color barn_red;
extern Color chili_red;
extern Color ruby;
extern Color maroon;
extern Color fire_brick;
extern Color redwood;
extern Color carmine;
extern Color desire;
extern Color vermilion;
extern Color raspberry;
extern Color candy_apple;
extern Color persian;
extern Color hibiscus;
extern Color u_s_flag;
extern Color ferrari;
extern Color sangria;
extern Color mahogany;
extern Color burgundy;
extern Color crimson;
extern Color rust;
extern Color light_salmon;
extern Color salmon;
extern Color dark_salmon;
extern Color light_coral;
extern Color red;
extern Color dark_red;
extern Color tomato;
extern Color orange_red;
extern Color pale_violet_red;
extern Color light_brick;
extern Color brick;
extern Color prismatic_red;
extern Color prismatic_legacy;
extern Color prismatic_vermilion_renewal;
extern Color prismatic_reflections_shade;
extern Color _49ers_red;
extern Color cardinals_red;
extern Color airbnb_red;
extern Color ajax_red;
extern Color alabama_crimson;
extern Color alizarin_crimson;
extern Color amaranth_red;
extern Color american_rose;
extern Color angels_red;
extern Color almost_apricot_red;
extern Color arsenal_red;
extern Color auburn_red;
extern Color bu_scarlet;
extern Color bills_red;
extern Color bittersweet_shimmer_red;
extern Color blood_red;
extern Color cg_red; 
extern Color cadmium_red; 
extern Color cardinal_red; 
extern Color carnelian_red;
extern Color cerise_red; 
extern Color chiefs_red;
extern Color chocolate_cosmos_red; 
extern Color cincinnati_red;
extern Color cinnabar_red;
extern Color coke_red;
extern Color coquelicot_red; 
extern Color coral_red; 
extern Color cordovan_red; 
extern Color crayola_red;
extern Color electric_crimson;
extern Color english_red; 
extern Color falcons_red; 
extern Color falu_red; 
extern Color fire_engine_red;
extern Color flame_red;
extern Color folly_red;
extern Color french_puce_red; 
extern Color fuchsia;
extern Color fuzzy_wuzzy_red; 
extern Color garnet_red;
extern Color harvard_crimson;
extern Color hollywood_cerise_red;
extern Color husker_red; 
extern Color japanese_carmine; 
extern Color jasper_red; 
extern Color jelly_bean_red; 
extern Color kenyan_copper_red; 
extern Color lava_red;
extern Color liverpool_red; 
extern Color lust_red;
extern Color mit_red;
extern Color madder_red;
extern Color pigment_magenta;
extern Color manchester_united_red;
extern Color medium_violet_red;
extern Color munsell_red;
extern Color ncs_red;
extern Color nationals_red;
extern Color oklahoma_crimson;
extern Color oxblood_red;
extern Color pastel_red; 
extern Color penn_red;
extern Color persian_rose_red;
extern Color phillies_red;
extern Color pigment_red;
extern Color pinterest_red; 
extern Color popstar_red; 
extern Color portland_orange_red; 
extern Color prune_red; 
extern Color radical_red; 
extern Color red_devil; 
extern Color red_sox;
extern Color rose_red;
extern Color rosewood_red;
extern Color rufous_red; 
extern Color russet_red;
extern Color rusty_red;
extern Color sanguine_red;
extern Color spanish_red;
extern Color tango_red; 
extern Color tawny_red;
extern Color tea_rose_red;
extern Color terracotta_red;
extern Color tractor_red; 
extern Color turkey_red;
extern Color tuscan_red;
extern Color upsdell_red; 
extern Color venetian_red;
extern Color virgin_lust_red; 
extern Color wine_red;
extern Color light_red_ochre; 
extern Color medium_vermillion; 
extern Color up_maroon;
extern Color outrageous_orange_red; 
extern Color utah_crimson; 
extern Color dark_orange;
extern Color vivid_orange;
extern Color orange_red;
extern Color tomato;
extern Color metallic_orange;
extern Color pumpkin;
extern Color smashed_pumpkin;
extern Color yellow_orange;
extern Color carrot_orange;
extern Color international_orange;
extern Color spanish_orange;
extern Color tangerine;
extern Color princeton_orange;
extern Color orioles_orange;
extern Color deep_saffron;
extern Color alloy_orange;
extern Color halloween_orange;
extern Color tangelo;
extern Color gamboge;
extern Color vermilion;
extern Color medium_vermilion;
extern Color fulvous;
extern Color pastel_orange;
extern Color flame;
extern Color philippine_orange;
extern Color beer_orange;
extern Color chinese_orange;
extern Color jasper_orange;
extern Color royal_orange;
extern Color coral;
extern Color dark_coral;
extern Color cadmium_orange;
extern Color dark_pastel_red;
extern Color copper_red;
extern Color university_of_tennessee_orange;
extern Color rajah;
extern Color mango_tango;
extern Color orange_peel;
extern Color vivid_tangelo;
extern Color burnt_umber;
extern Color papaya_whip;
extern Color bittersweet;
extern Color persimmon;
extern Color persian_orange;
extern Color terracotta;
extern Color apricot_orange;
extern Color bronze_orange;
extern Color browns_orange;
extern Color buff_orange; 
extern Color bumblebee_orange;
extern Color burnt_orange; 
extern Color butterscotch_orange; 
extern Color cheese_orange; 
extern Color chocolate_orange; 
extern Color cider_orange; 
extern Color copper_orange; 
extern Color crayola_orange; 
extern Color desert_orange; 
extern Color desert_sand_orange; 
extern Color dragon_fire_orange; 
extern Color dull_orange; 
extern Color giants_orange; 
extern Color ginger_orange; 
extern Color golden_gate_bridge_orange;
extern Color goldenrod_orange;
extern Color goldfish_orange;
extern Color honey_orange;
extern Color hunyadi_orange;
extern Color koi_orange;
extern Color light_orange;
extern Color light_copper_orange;
extern Color pumpkin_orange;
extern Color dark_topaz_orange;
extern Color mahogany_orange;
extern Color marigold_orange;
extern Color melon_orange;
extern Color mimosa_orange;
extern Color neon_orange;
extern Color ochre_orange;
extern Color orange_pale_orange; 
extern Color orange_paper_orange; 
extern Color orange_spice_orange; 
extern Color outrageous_orange; 
extern Color pantone_orange; 
extern Color peach_orange; 
extern Color pepper_orange; 
extern Color red_fox_orange; 
extern Color rumba_orange; 
extern Color safety_orange; 
extern Color safflower_orange;
extern Color salamander_orange;
extern Color salmon_orange; 
extern Color squash_orange; 
extern Color sunrise_orange;
extern Color sunset_orange;
extern Color syracuse_orange;
extern Color tawny_orange;
extern Color tiger_orange;
extern Color topaz_orange;
extern Color tree_sap_orange;
extern Color web_orange;
extern Color west_side_orange;
extern Color wheat_orange;
extern Color xanthous_orange;
extern Color yam_orange;
extern Color mecca_orange;
extern Color lava_orange;
extern Color dutch_orange;
extern Color amber;
extern Color aesthetic_orange;
extern Color hot_orange;
extern Color glossy_orange;
extern Color pure_orange;
extern Color rustic_orange;
extern Color baby_orange;
extern Color irish_orange; 
extern Color marmalade;
extern Color vintage_orange;
extern Color rust;
extern Color india_saffron;
extern Color atomic_tangerine;
extern Color red_orange_ral;
extern Color willpower_orange;
extern Color dusty_orange;
extern Color spring_orange;
extern Color greek_orange;
extern Color calm_orange;
extern Color faded_orange;
extern Color luminous_bright_orange_ral;
extern Color sunshine_yellow;
extern Color canary_yellow;
extern Color lemon_yellow;
extern Color goldenrod;
extern Color saffron;
extern Color citrine;
extern Color trombone;
extern Color light_yellow;
extern Color lemon_chiffon;
extern Color flax;
extern Color light_goldenrod;
extern Color pale_goldenrod;
extern Color light_khaki;
extern Color clover_lime;
extern Color xanthic;
extern Color royal_yellow;
extern Color cream;
extern Color gold;
extern Color safety_yellow;
extern Color laguna;
extern Color hunyadi_yellow;
extern Color bright_yellow;
extern Color greenish_yellow;
extern Color neon_yellow; 
extern Color dark_yellow;
extern Color sand;
extern Color sunflower;
extern Color bumblebee;
extern Color butter;
extern Color yellow_tan;
extern Color cyber_yellow;
extern Color banana;
extern Color tuscany;
extern Color honey;
extern Color dijon;
extern Color amber;
extern Color beige;
extern Color mustard;
extern Color maximum_yellow;
extern Color mellow_yellow;
extern Color unmellow_yellow;
extern Color lemon_curry;
extern Color moccasin;
extern Color orange_yellow;
extern Color pastel_yellow;
extern Color taxi_cab_yellow;
extern Color aureolin;
extern Color electric_yellow;
extern Color chartreuse_traditional;
extern Color titanium_yellow;
extern Color mikado_yellow;
extern Color fluorescent_yellow;
extern Color arylide_yellow;
extern Color indian_yellow;
extern Color durian_yellow;
extern Color minion_yellow;
extern Color selective_yellow;
extern Color laser_lemon;
extern Color munsell_yellow;
extern Color yellow_rose;
extern Color very_pale_yellow;
extern Color earth_yellow;
extern Color yellow_pantone;
extern Color tangerine_yellow;
extern Color bronze_yellow;
extern Color psychedelic_yellow;
extern Color maize_yellow_ral;
extern Color muted_yellow;
extern Color sulfur_yellow;
extern Color yellow_jasmine;
extern Color dusty_yellow;
extern Color yolk_yellow_pantone;
extern Color light_chrome_yellow;
extern Color cadmium_yellow_lemon;
extern Color vibrant_yellow;
extern Color yellow_cmyk;
extern Color fire_yellow;
extern Color buff_yellow; 
extern Color yellow_cream;
extern Color empire_yellow;
extern Color zinc_yellow_ral;
extern Color signal_yellow;
extern Color matte_yellow;
extern Color aesthetic_yellow;
extern Color rustic_yellow;
extern Color pale_yellow;
extern Color colza_yellow;
extern Color transparent_yellow;
extern Color blazing_yellow;
extern Color tender_yellow;
extern Color pale_lime_yellow;
extern Color vintage_yellow;
extern Color spectrum_yellow;
extern Color retro_yellow;
extern Color old_yellow;
extern Color chinese_yellow;
extern Color spanish_yellow;
extern Color refresh_yellow;
extern Color sun_yellow_ral;
extern Color baby_yellow;
extern Color dahlia_yellow_ral; 
extern Color broom_yellow;
extern Color camouflage_yellow;
extern Color trust_yellow;
extern Color warm_yellow;
extern Color vivid_yellow;
extern Color turmeric;
extern Color sunglow;
extern Color light_saffron;
extern Color radioactive;
extern Color golden_poppy;
extern Color real_gold;
extern Color glossy_gold;
extern Color snapchat_yellow;
extern Color deep_chrome_yellow_ferrario;
extern Color melon_yellow;
extern Color bright_canary_yellow;
extern Color deep_napoli_yellow;
extern Color radiant_yellow;
extern Color daffodil_yellow;
extern Color mineral_yellow;
extern Color relax_yellow;
extern Color rainbow_yellow;
extern Color deep_yellow;
extern Color ochre_yellow;
extern Color dull_yellow;
extern Color hot_yellow;
extern Color traffic_yellow_ral;
extern Color yellow_orange;
extern Color olive_yellow_ral; 
extern Color faded_yellow;
extern Color solid_yellow;
extern Color golden_yellow_ral;
extern Color corn;
extern Color dandelion;
extern Color icterine;
extern Color sandstorm;
extern Color macaroon;
extern Color urobilin;
extern Color satin_sheen_gold;
extern Color school_bus_yellow;
extern Color british_standard_bs_4800_10_e_51_yellow;
extern Color mimosa;
extern Color marigold;
extern Color daisy_yellow;
extern Color forest_green;
extern Color olive;
extern Color hunter_green;
extern Color artichoke_green;
extern Color jungle_green;
extern Color tropical_rainforest;
extern Color amazon;
extern Color deep_jungle_green;
extern Color medium_jungle_green;
extern Color dark_jungle_green;
extern Color moss_green;
extern Color myrtle_green;
extern Color pine_green;
extern Color persian_green;
extern Color emerald_green;
extern Color neon_green;
extern Color sacramento_green;
extern Color sea_green;
extern Color sage_green;
extern Color lime_green;
extern Color jade_green;
extern Color fern_green;
extern Color laurel_green;
extern Color mint_green;
extern Color tea_green;
extern Color army_green;
extern Color kelly_green;
extern Color russian_green;
extern Color paris_green;
extern Color pakistan_green;
extern Color midnight_green;
extern Color india_green;
extern Color hunter_green;
extern Color celadon;
extern Color avocado;
extern Color harlequin;
extern Color spring;
extern Color kaitoke;
extern Color chateau;
extern Color dark_moss_green;
extern Color swamp;
extern Color mantis;
extern Color fun;
extern Color pantone_artichoke_green;
extern Color viridian;
extern Color reseda_green;
extern Color chetwode;
extern Color shamrock_green;
extern Color verdun;
extern Color castleton_green;
extern Color gin;
extern Color granny_smith_apple;
extern Color bitter_lime;
extern Color bright_mint;
extern Color bottle_green;
extern Color cadmium_green;
extern Color camouflage_green;
extern Color pear;
extern Color dollar_bill;
extern Color inchworm;
extern Color asparagus;
extern Color caribbean_green;
extern Color go_green;
extern Color phthalo_green;
extern Color napier_green;
extern Color feldgrau;
extern Color green_yellow;
extern Color malachite;
extern Color rifle_green;
extern Color volt;
extern Color british_racing_green;
extern Color thyme;
extern Color chartreuse;
extern Color corn_green;
extern Color shrek_green;
extern Color christmas_green;
extern Color irish_green;
extern Color road_sign_green;
extern Color lightsaber_green;
extern Color girl_scout_green;
extern Color tennis_court_green;
extern Color spring_bud;
extern Color chinese_green;
extern Color arctic_lime;
extern Color nyanza;
extern Color dark_lemon_lime;
extern Color crayola_yellow_green; 
extern Color maximum_green;
extern Color vivid_lime_green;
extern Color pistachio;
extern Color medium_spring_green;
extern Color sheen_green;
extern Color la_salle_green;
extern Color spanish_viridian; 
extern Color dartmouth_green;
extern Color pine_needle_color;
extern Color olive_drab;
extern Color lawn_green;
extern Color xanadu;
extern Color dark_olive_green;
extern Color dark_sea_green;
extern Color green_munsell;
extern Color mughal_green;
extern Color john_deere_green;
extern Color office_green;
extern Color limerick;
extern Color maximum_green_yellow;
extern Color french_lime;
extern Color medium_spring_bud;
extern Color ufo_green;
extern Color acid_green;
extern Color chlorophyll_green;
extern Color green_lizard;
extern Color iguana_green;
extern Color kombu_green;
extern Color middle_green; 
extern Color paolo_veronese_green;
extern Color pullman_green;
extern Color green_screen;
extern Color android_green;
extern Color bitter_lemon;
extern Color wageningen_green;
extern Color sap_green;
extern Color old_moss_green;
extern Color slimy_green;
extern Color very_light_malachite_green;
extern Color dark_spring_green;
extern Color guppie_green;
extern Color apple_green;
extern Color deep_green;
extern Color medium_sea_green;
extern Color turquoise_green;
extern Color turquoise;
extern Color celeste;
extern Color light_turquoise;
extern Color turquoise_blue;
extern Color medium_turquoise;
extern Color dark_turquoise;
extern Color bright_turquoise;
extern Color powder_blue;
extern Color sky_blue;
extern Color electric_blue;
extern Color air_force_blue_raf;
extern Color air_force_blue_usaf;
extern Color us_air_force_academy_blue;
extern Color beau_blue;
extern Color baby_blue;
extern Color baby_blue_eyes;
extern Color little_boy_blue;
extern Color tiffany_blue;
extern Color steel_blue;
extern Color carolina_blue;
extern Color turkish_blue;
extern Color maya_blue;
extern Color teal;
extern Color independence_blue;
extern Color cornflower_blue;
extern Color sapphire_blue;
extern Color medium_sapphire;
extern Color blue_sapphire;
extern Color dark_sapphire;
extern Color azure;
extern Color egyptian_blue;
extern Color yale_blue;
extern Color navy_blue;
extern Color prussian_blue;
extern Color space_cadet;
extern Color traditional_royal_blue;
extern Color queen_blue;
extern Color imperial_blue;
extern Color periwinkle;
extern Color morning_blue;
extern Color uranian_blue;
extern Color fluorescent_blue;
extern Color ruddy_blue;
extern Color admiral_blue; 
extern Color aegean_blue;
extern Color aero_blue;
extern Color air_superiority_blue;
extern Color alice_blue;
extern Color aqua_blue;
extern Color aquamarine_blue;
extern Color arctic_blue;
extern Color argentina_blue;
extern Color astros_navy;
extern Color bayern_blue;
extern Color berry_blue;
extern Color blue;
extern Color blue_yonder;
extern Color bleu_de_france_blue;
extern Color blue_gray;
extern Color boeing_blue;
extern Color braves_navy;
extern Color brewers_blue;
extern Color broncos_blue;
extern Color byzantine_blue;
extern Color cambridge_blue;
extern Color capri_blue;
extern Color cerulean_blue;
extern Color chelsea_blue; 
extern Color chlorine_blue; 
extern Color cobalt_blue; 
extern Color college_navy;
extern Color columbia_blue; 
extern Color crayola_blue; 
extern Color cyan_blue;
extern Color dallas_cowboys_blue;
extern Color dark_blue;
extern Color delft_blue;
extern Color dell_blue;
extern Color denim_blue; 
extern Color dodgers_blue;
extern Color dolphins_aqua;
extern Color duck_blue;
extern Color duke_blue;
extern Color electric_indigo;
extern Color everton_blue;
extern Color facebook_blue;
extern Color ford_blue; 
extern Color general_motors_blue;
extern Color glaucous_blue;
extern Color ibm_blue; 
extern Color ice_blue; 
extern Color indigo_blue;
extern Color indigo_dye_blue; 
extern Color intel_blue; 
extern Color international_klein_blue; 
extern Color iris_blue;
extern Color kc_royals_blue;
extern Color lapis_blue; 
extern Color liberty_blue;
extern Color lowes_blue;
extern Color magic_blue; 
extern Color majorelle_blue;
extern Color marian_blue; 
extern Color mavericks_blue;
extern Color medium_blue;
extern Color medium_slate_blue;
extern Color millennium_blue;
extern Color munsell_blue;
extern Color neon_blue;
extern Color non_photo_blue;
extern Color ocean_blue; 
extern Color oxford_blue;
extern Color psg_blue; 
extern Color pacific_blue; 
extern Color pantone_blue; 
extern Color peacock_blue; 
extern Color penn_blue;
extern Color persian_blue;
extern Color phthalo_blue; 
extern Color picotee_blue;
extern Color polynesian_blue;
extern Color resolution_blue;
extern Color robin_egg_blue;
extern Color savoy_blue;
extern Color slate_blue;
extern Color spanish_blue;
extern Color spruce_blue; 
extern Color stone_blue; 
extern Color tottenham_navy;
extern Color true_blue;
extern Color tufts_blue;
extern Color twitter_blue; 
extern Color ucla_blue;
extern Color ultramarine_blue;
extern Color violet_blue;
extern Color visa_blue; 
extern Color vivid_sky_blue;
extern Color warriors_blue;
extern Color yankees_blue;
extern Color yinmn_blue; 
extern Color steel_blue;
extern Color alaskan_blue;
extern Color tall_ships_blue;
extern Color true_purple;
extern Color thistle;
extern Color plum;
extern Color violet;
extern Color orchid;
extern Color fuchsia;
extern Color medium_orchid;
extern Color medium_purple;
extern Color blue_violet;
extern Color dark_violet;
extern Color dark_orchid;
extern Color dark_magenta;
extern Color indigo;
extern Color veronica;
extern Color pale_purple;
extern Color mauve;
extern Color heliotrope;
extern Color phlox;
extern Color purple_pizzazz;
extern Color liserian_purple;
extern Color mulberry;
extern Color pearly_purple;
extern Color purpureus;
extern Color northwestern_purple;
extern Color ksu_purple;
extern Color pomp_and_power;
extern Color mardi_gras;
extern Color eminence;
extern Color pansy_purple;
extern Color palatinate;
extern Color dark_purple;
extern Color byzantium;
extern Color african_violet;
extern Color amethyst;
extern Color chinese_violet;
extern Color english_violet;
extern Color russian_violet;
extern Color fairy_tale;
extern Color fandango;
extern Color french_mauve;
extern Color affair;
extern Color iris;
extern Color long_distance;
extern Color prince_charming;
extern Color lipstick_stain;
extern Color pompadour;
extern Color grape_color;
extern Color wine;
extern Color pizza_edge;
extern Color tyrian_purple;
extern Color ultra_violet;
extern Color studio;
extern Color electric_purple;
extern Color eggplant;
extern Color periwinkle_purple;
extern Color sangria;
extern Color raisin;
extern Color mountbatten_pink;
extern Color fuchsia_blue;
extern Color good_tax;
extern Color jam;
extern Color ripe_plum;
extern Color heather;
extern Color magenta_purple;
extern Color old_lavender;
extern Color rebecca_purple;
extern Color razzmic_berry_purple;
extern Color wine_dregs_purple;
extern Color regalia_purple;
extern Color twilight_lavender_purple;
extern Color traditional_purple;
extern Color spanish_violet_purple;
extern Color imperial_purple;
extern Color japanese_violet_purple;
extern Color munsell_purple;
extern Color deep_ruby_purple;
extern Color purple_heart;
extern Color lavender_blush;
extern Color early_bird;
extern Color lilac;
extern Color purple_taupe;
extern Color cyber_grape_purple;
extern Color kingfisher_daisy;
extern Color seance;
extern Color lavender_gray;
extern Color hopbush;
extern Color tacao;
extern Color brilliant_purple;
extern Color murasaki_purple;
extern Color blackish_purple;
extern Color lovely_purple;
extern Color vulgar_purple_grape_jelly;
extern Color university_of_central_arkansas_purple; 
extern Color fedex_purple; 
extern Color carolina_plum;
extern Color kalamata;
extern Color black_currant;
extern Color purple_4;
extern Color strong_purple;
extern Color pale_purple;
extern Color vivid_reddish_purple;
extern Color medium_purple_3;
extern Color middle_purple;
extern Color cardinal;
extern Color embassy_purple;
extern Color lakers_purple;
extern Color amaranth_purple;
extern Color purple_navy;
extern Color insolent_purple;
extern Color smyrna_purple; 
extern Color east_carolina_university_purple;
extern Color little_princess;
extern Color aesthetic_purple;
extern Color kikyo_iru;
extern Color metallic_purple;
extern Color hot_purple;
extern Color faded_purple;
extern Color mythical_purple;
extern Color languid_lavender;
extern Color mauveine;
extern Color blue_lilac;
extern Color dark_byzantium;
extern Color luxury_purple;
extern Color aztech_purple;
extern Color baltimore_ravens_purple;
extern Color deep_magenta;
extern Color deep_purple;
extern Color rustic_purple;
extern Color sunset_purple;
extern Color dull_purple;
extern Color traffic_purple;
extern Color matte_purple;
extern Color purple_violet;
extern Color purple_cmyk; 
extern Color ocean_purple; 
extern Color shiny_purple;
extern Color autumn_purple;
extern Color watermelon;
extern Color flamingo;
extern Color coral;
extern Color salmon;
extern Color pastel_pink;
extern Color light_pink;
extern Color cherry_blossom;
extern Color bubblegum;
extern Color baby_pink;
extern Color dark_pink;
extern Color bright_pink;
extern Color rouge;
extern Color neon_pink;
extern Color blush;
extern Color fuchsia;
extern Color mauve;
extern Color orchid;
extern Color magenta;
extern Color hot_pink;
extern Color carnation;
extern Color tulip_pink;
extern Color tea_rose;
extern Color cotton_candy;
extern Color cameo_pink;
extern Color french_pink;
extern Color strawberry;
extern Color persian_pink;
extern Color new_york_pink;
extern Color indian_red;
extern Color munsell_red;
extern Color cardinal;
extern Color crayola_red;
extern Color crimson;
extern Color ruby;
extern Color redwood;
extern Color rusty_red;
extern Color amaranth;
extern Color bright_maroon;
extern Color burnt_sienna;
extern Color candy_pink;
extern Color cherry_pink;
extern Color chestnut;
extern Color dark_coral;
extern Color dark_pastel_red;
extern Color dark_terra_cotta; 
extern Color dark_salmon;
extern Color lemonade;
extern Color peach;
extern Color crepe;
extern Color piggy_pink;
extern Color deep_pink;
extern Color dust_storm;
extern Color nadeshiko_pink;
extern Color rose_quartz;
extern Color wild_strawberry;
extern Color razzmatazz;
extern Color rose_taupe;
extern Color rubine_red;
extern Color hollywood_cerise;
extern Color mexican_pink;
extern Color steel_pink;
extern Color rose_gold;
extern Color rose_bonbon;
extern Color barbie_pink;
extern Color mulberry;
extern Color razzle_dazzle_rose;
extern Color fandango;
extern Color puce;
extern Color old_rose;
extern Color rosewood;
extern Color taffy;
extern Color turkish_rose;
extern Color punch;
extern Color paradise_pink;
extern Color raspberry_rose;
extern Color light_crimson;
extern Color pink_sherbet;
extern Color tickle_me_pink;
extern Color thulian_pink;
extern Color brilliant_rose;
extern Color lace;
extern Color smitten;
extern Color your;
extern Color careys;
extern Color oyster;
extern Color shimmering_blush;
extern Color sea;
extern Color brink;
extern Color hippie;
extern Color light_deep_pink;
extern Color wild_orchid;
extern Color cerise_pink;
extern Color shocking_pink;
extern Color hit;
extern Color lady;
extern Color neon_fuchsia;
extern Color ultra_pink;
extern Color schauss_pink;
extern Color ruddy_pink;
extern Color pink_pearl;
extern Color lavender_rose;
extern Color shampoo;
extern Color spanish_pink;
extern Color valentine_pink;
extern Color silvery_pink;
extern Color melon;
extern Color milano;
extern Color sweet_pink;
extern Color knockout_pink;
extern Color grapefruit_pink;
extern Color champagne_pink;
extern Color lip_pink;
extern Color passion_pink;
extern Color nude_pink;
extern Color rosy_pink;
extern Color gold_pink;
extern Color misty_rose;
extern Color mauvelous;
extern Color light_blush;
extern Color copper_rose;
extern Color raspberry_glace;
extern Color debian_red;
extern Color ruber;
extern Color vanilla_ice;
extern Color light_hot_pink;
extern Color super_pink;
extern Color china_rose;
extern Color deep_pruce;
extern Color french_fuchsia;
extern Color almond; 
extern Color auburn;
extern Color beaver;
extern Color beige;
extern Color bisque;
extern Color bistre;
extern Color bole;
extern Color bone;
extern Color brass;
extern Color bronze;
extern Color burnt_umber;
extern Color cafe_au_lait;
extern Color cafe_noir;
extern Color champagne;
extern Color cinnamon;
extern Color coffee;
extern Color deep_coffee; 
extern Color copper;
extern Color dark_brown;
extern Color taupe;
extern Color tan_;
extern Color chestnut;
extern Color sand;
extern Color ecru;
extern Color fawn;
extern Color ginger;
extern Color golden_brown;
extern Color khaki;
extern Color mahogany;
extern Color ochre;
extern Color light_brown;
extern Color saddle_brown;
extern Color wheat;
extern Color russet;
extern Color rust;
extern Color sepia;
extern Color sienna;
extern Color antique_brass;
extern Color burlywood;
extern Color peru;
extern Color tumbleweed;
extern Color dark_vanilla;
extern Color tuscan_brown;
extern Color wood_brown;
extern Color deer;
extern Color chamoisee;
extern Color dirt;
extern Color coconut;
extern Color windsor_tan;
extern Color rufous;
extern Color acorn;
extern Color ash_brown;
extern Color ash_gray;
extern Color ash_white;
extern Color baked_bread;
extern Color baked_potato;
extern Color bamboo;
extern Color bark;
extern Color beeswax;
extern Color beige_linen;
extern Color birdseed;
extern Color bitter_chocolate;
extern Color brandy;
extern Color brown_bear;
extern Color brown_beige;
extern Color brown_coffee;
extern Color brown_gray;
extern Color brown_metal;
extern Color brown_red;
extern Color brown_rust;
extern Color brown_stone;
extern Color brown_sugar;
extern Color brownie;
extern Color brownish_gray;
extern Color brownish_red;
extern Color burnt_almond;
extern Color burnt_henna;
extern Color butter_toast;
extern Color buttercream;
extern Color buttery_brown;
extern Color camel;
extern Color canadian_maple;
extern Color canvas_brown;
extern Color caramel;
extern Color caramel_apple;
extern Color carnal_brown;
extern Color cashmere;
extern Color chai;
extern Color chamomile;
extern Color chicory;
extern Color chocolate;
extern Color cinnamon_toast;
extern Color citrus_brown;
extern Color cotton;
extern Color croissant;
extern Color dark_beige;
extern Color dark_chestnut;
extern Color dark_khaki;
extern Color dark_sand;
extern Color dark_wood;
extern Color deep_brown;
extern Color deep_taupe;
extern Color desert_gray;
extern Color dried_moss;
extern Color dull_brown;
extern Color fall_harvest;
extern Color feather_brown;
extern Color firewood;
extern Color fortune_cookie;
extern Color french_beige;
extern Color ginger_ale;
extern Color golden_fog;
extern Color gray_brown;
extern Color grayish_brown;
extern Color hardwood;
extern Color hawaiian_brown;
extern Color heavy_brown;
extern Color honey_brown;
extern Color iced_coffee;
extern Color kobicha;
extern Color lace;
extern Color latte;
extern Color light_taupe;
extern Color maple_sugar;
extern Color maple_syrup;
extern Color mars_brown;
extern Color medium_brown;
extern Color mojave_desert;
extern Color abbey;
extern Color ash_gray;
extern Color asphalt;
extern Color black;
extern Color black_bean;
extern Color black_cat;
extern Color black_cow;
extern Color black_eel;
extern Color black_olive;
extern Color charcoal;
extern Color charleston_green;
extern Color dark_jungle_green;
extern Color dim_gray;
extern Color ebony;
extern Color eerie_black;
extern Color granite;
extern Color gray;
extern Color gray_cloud;
extern Color gray_wolf;
extern Color gunmetal;
extern Color iridium;
extern Color jet;
extern Color licorice;
extern Color midnight;
extern Color night;
extern Color oil;
extern Color old_burgundy;
extern Color onyx;
extern Color outer_space;
extern Color raisin_black;
extern Color smoky_black;
extern Color taupe;
extern Color vampire_gray;
extern Color black_leather_jacket;
extern Color cafe_americano;
extern Color blackberry;
extern Color lamp_black;
extern Color army_uniform;
extern Color slate;
extern Color pitch_black;
extern Color spider;
extern Color metal;
extern Color grease;
extern Color crow;
extern Color black_rock;
extern Color basalt_black;
extern Color neutral_black;
extern Color black_denim;
extern Color vampire_black;
extern Color cool_black;
extern Color panda_black;
extern Color frost_black;
extern Color ink_black_ral;
extern Color raven;
extern Color leather;
extern Color sable;
extern Color power_black;
extern Color soot;
extern Color jade;
extern Color true_black;
extern Color premium_black;
extern Color obsidian;
extern Color black_grain;
extern Color black_magic;
extern Color iron_black;
extern Color rich_black_fogra29;
extern Color warm_black;
extern Color black_coral;
extern Color black_shadows;
extern Color black_raspberry;
extern Color kombu_green;
extern Color zinnwaldite_brown;
extern Color dark_slate_gray;
extern Color dark_charcoal;
extern Color russian_violet;
extern Color dark_sienna;
extern Color alien_black;
extern Color black_chocolate;
extern Color blue_charcoal;
extern Color gothic_grape;
extern Color metropolis;
extern Color night_shadow;
extern Color off_black;
extern Color dark_raisin;
extern Color tea_bag;
extern Color electric_black;
extern Color tech_black;
extern Color dull_black;
extern Color dark_black;
extern Color natural_black;
extern Color retro_black;
extern Color black_green_ral;
extern Color deep_black;
extern Color refresh_black;
extern Color rustic_black;
extern Color rose_ebony;
extern Color liver;
extern Color purple_taupe;
extern Color black_pearl; 
extern Color black_russian;
extern Color aesthetic_black;
extern Color signal_black_ral;
extern Color cafe_noir;
extern Color luxury_black;
extern Color bright_black;
extern Color black_blue_ral;
extern Color glossy_black;
extern Color ivory_black;
extern Color pastel_black;
extern Color fashion_black;
extern Color graphite_black_ral;
extern Color black_gray;
extern Color black_hole;
extern Color kokushoku;
extern Color kurotobi;
extern Color _void;
extern Color wet_suit;
extern Color yacht_club_black;
extern Color young_night;
extern Color blackstrap_molasses;
extern Color carbon_black;
extern Color cynical_black;
extern Color black_plum;
extern Color reversed_gray;
extern Color stout;
extern Color tornado_cloud;
extern Color walnut_hull;
extern Color tap_shoe;
extern Color woodsmoke;
extern Color black_red;
extern Color wind_cave;
extern Color heavy_gray;
extern Color arsenic;
extern Color ash_gray;
extern Color battleship_gray;
extern Color black_coral;
extern Color blue_gray;
extern Color cadet_gray;
extern Color carbon_gray;
extern Color charcoal;
extern Color cinereous;
extern Color cool_gray;
extern Color dark_gray;
extern Color davys_gray;
extern Color deep_space_sparkle;
extern Color dim_gray;
extern Color gainsboro;
extern Color gray;
extern Color gray_cloud;
extern Color gray_dolphin;
extern Color gray_goose;
extern Color gray_green;
extern Color gray_wolf;
extern Color glaucous;
extern Color gunmetal;
extern Color jet;
extern Color jet_gray;
extern Color light_gray;
extern Color light_slate_gray;
extern Color marengo;
extern Color medium_gray;
extern Color nevada;
extern Color nickel;
extern Color old_silver;
extern Color outer_space;
extern Color rocket_metallic;
extern Color scorpion;
extern Color silver;
extern Color silver_chalice;
extern Color slate_blue;
extern Color slate_gray;
extern Color smoke;
extern Color smokey_gray;
extern Color sonic_gray;
extern Color spanish_gray;
extern Color stone_gray;
extern Color stormcloud;
extern Color taupe_gray;
extern Color timberwolf;
extern Color onyx;
extern Color paynes_gray;
extern Color platinum;
extern Color pink_gray;
extern Color purple_gray;
extern Color rose_quartz;
extern Color vampire_gray;
extern Color white_smoke;
extern Color xanadu;
extern Color bright_gray;
extern Color x11_gray;
extern Color dark_silver;
extern Color pastel_gray;
extern Color dusty_gray;
extern Color misty_gray;
extern Color white_gray;
extern Color vintage_gray;
extern Color gentle_gray;
extern Color zombie_gray;
extern Color lavender_gray;
extern Color perfect_gray;
extern Color graphite_gray;
extern Color rustic_gray;
extern Color echo;
extern Color window_gray;
extern Color silk_gray;
extern Color light_gunmetal;
extern Color silver_pink;
extern Color matte_silver;
extern Color rhythm;
extern Color pure_silver;
extern Color dark_charcoal;
extern Color best_gray;
extern Color agreeable_gray;
extern Color oxford_gray;
extern Color antique_pewter;
extern Color warm_gray;
extern Color sage_gray;
extern Color dull_gray;
extern Color rich_gray;
extern Color ice_gray;
extern Color gray_cmyk;
extern Color solid_gray;
extern Color electric_gray;
extern Color templeton_gray;
extern Color chrome;
extern Color sea_gray;
extern Color glossy_gray;
extern Color anvil_gray;
extern Color chameleon_gray;
extern Color cement_gray;
extern Color steel_gray;
extern Color dorian_gray;
extern Color gun_smoke_gray;
extern Color camouflage_gray;
extern Color fashion_gray;
extern Color neutral_gray;
extern Color revere_pewter;
extern Color olive_gray;
extern Color metallic_gray;
extern Color french_gray;
extern Color iron;
extern Color pale_smoke;
extern Color bone;
extern Color heather;
extern Color true_silver;
extern Color power_gray;
extern Color storm_gray;
extern Color ultimate_gray;
extern Color rhino;
extern Color harbor_gray;
extern Color seal;
extern Color anchor;
extern Color abalone;
extern Color fossil;
extern Color mink;
extern Color trout;
extern Color thunder;
extern Color shades_on;
extern Color lava;
extern Color stone_eagle;
extern Color ice_cube;
extern Color porpoise;
extern Color flint;
extern Color dove;
extern Color gray_owl;
extern Color coin;
extern Color fog;
extern Color laid_back_gray;
extern Color white;
extern Color ghost_white;
extern Color white_smoke;
extern Color baby_powder;
extern Color snow;
extern Color ivory;
extern Color floral_white;
extern Color seashell;
extern Color cornsilk;
extern Color old_lace;
extern Color cream;
extern Color beige;
extern Color parchment;
extern Color antique_white;
extern Color champagne;
extern Color eggshell;
extern Color dutch_white;
extern Color bone;
extern Color vanilla;
extern Color flax;
extern Color navajo_white;
extern Color alabaster;
extern Color chiffon;
extern Color unresolved_problem;
extern Color old_wood;
extern Color rose_white;
extern Color vista_white;
extern Color link_white;
extern Color spring;
extern Color snow_drift;
extern Color peppermint;
extern Color merino;
extern Color half_and_half;
extern Color island_spice;
extern Color soft_peach;
extern Color harp;
extern Color titan_white;
extern Color audience_anger;
extern Color orange_white;
extern Color cough_mixture;
extern Color albescent_white;
extern Color coconut;
extern Color pink_salt;
extern Color frost;
extern Color linen;
extern Color rice;
extern Color daisy;
extern Color powder;
extern Color pearl;
extern Color paris_white;
extern Color cup_cake;
extern Color white_dove;
extern Color white_whisper;
extern Color lexicon;
extern Color greek_villa;
extern Color white_diamond;
extern Color winter_white;
extern Color spatial_white;
extern Color hog_bristle_quarter;
extern Color simply_white;
extern Color oyster_white;
extern Color white_on_white;
extern Color lexicon_quarter;
extern Color alice_blue;
extern Color honeydew;
extern Color mint_cream;
extern Color milk;
extern Color pomelo_white;
extern Color anti_flash_white;
extern Color magnolia;
extern Color azure;
extern Color huntington_white;
extern Color acadia_white;
extern Color gainsboro;
extern Color mercury;
extern Color lavender_blush;
extern Color isabelline;
extern Color bubbles;
extern Color glitter;
extern Color platinum;
extern Color cosmic_latte;
extern Color blanched_almond;
extern Color light_yellow;
extern Color natural_white;
extern Color vivid_white;
extern Color white_wisp;
extern Color azureish_white;
extern Color timberwolf;
extern Color papaya_whip;
extern Color antique_white_usa;
extern Color cola;
extern Color atrium_white;
extern Color cascading_white;
extern Color cotton_ball;
extern Color photon_white;
extern Color white_heat;
extern Color whitewash;
extern Color shadow_white;
extern Color abbey_white;
extern Color acoustic_white;
extern Color aircraft_white;
extern Color ceramic;
extern Color coconut_butter;
extern Color abstract_white;
extern Color bright_white;
extern Color broken_white;
extern Color brilliant_white;
extern Color commercial_white;
extern Color feather_white;
extern Color swan_white;
extern Color polar_bear;
extern Color paper_white;
extern Color pacific_pearl;
extern Color night_white;
extern Color delicate_white;
extern Color coconut_white;
extern Color cake_batter;
extern Color white_sand;
extern Color stone_white;
extern Color white_chocolate;
extern Color retro_white;


#endif

// #define cplus(c1, c2) ({ c result = { c1.r + c2.r, c1.g + c2.g, c1.b + c2.b }; result; })
// #define cplusa(c1, c2) c1.r += c1.r; c1.g += c2.g; c1.b += c2.b
// #define cminus(c1, c2) ({ c result = { c1.r - c2.r, c1.g - c2.g, c1.b - c2.b }; result; })
// #define cminusa (c1, c2) c1.r -= c1.r; c1.g -= c2.g; c1.b -= c2.b
// #define ctimes(c1, a) ({ c result = { c1.r * a, c1.g * a, c1.b * a }; result; })
// #define ctimesa(c1, a) c1.r *= a; c1.g *= a; c1.b *= a
// #define chad(c1, c2) ({ c result = { c1.r * c2.r, c1.g * c2.g, c1.b * c2.b }; result; })
// #define chada(c1, c2) c1.r *= c2.r; c1.g *= c2.g; c1.b *= c2.b
// #define cprnt(l, c1) printf("%s: %f, %f, %f, %f\n", l, c1.r, c1.g, c1.b, c1.a)
