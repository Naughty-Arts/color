#ifndef _COLOR_H_
#define _COLOR_H_

typedef struct
{
	float r;
	float g;
	float b;
	float a;
} c;

#define cplus(c1, c2) ({ c result = { c1.r + c2.r, c1.g + c2.g, c1.b + c2.b }; result; })
#define cplusa(c1, c2) c1.r += c1.r; c1.g += c2.g; c1.b += c2.b
#define cminus(c1, c2) ({ c result = { c1.r - c2.r, c1.g - c2.g, c1.b - c2.b }; result; })
#define cminusa (c1, c2) c1.r -= c1.r; c1.g -= c2.g; c1.b -= c2.b
#define ctimes(c1, a) ({ c result = { c1.r * a, c1.g * a, c1.b * a }; result; })
#define ctimesa(c1, a) c1.r *= a; c1.g *= a; c1.b *= a
#define chad(c1, c2) ({ c result = { c1.r * c2.r, c1.g * c2.g, c1.b * c2.b }; result; })
#define chada(c1, c2) c1.r *= c2.r; c1.g *= c2.g; c1.b *= c2.b
#define cprnt(l, c1) printf("%s: %f, %f, %f, %f\n", l, c1.r, c1.g, c1.b, c1.a)
#define cterm(l, c1) printf("\x1b[38;2;%.0f;%.0f;%.0fm%s\x1b[0m", c1.r * 255, c1.g * 255, c1.b * 255, l)

#define cblack ({ c _c = { 0, 0, 0, 1 }; _c; })
#define cwhite ({ c _c = { 1, 1, 1, 1 }; _c; })
#define cgray ({ c _c = { 0.5, 0.5, 0.5, 1 }; _c; })
#define cred ({ c _c = { 1, 0, 0, 1 }; _c; })
#define cgreen ({ c _c = { 0, 1, 0, 1 }; _c; })
#define cblue ({ c _c = { 0, 0, 1, 1 }; _c; })
#define ccyan ({ c _c = { 0, 1, 1, 1 }; _c; })
#define cyellow ({ c _c = { 1, 1, 0, 1 }; _c; })
#define cmagenta ({ c _c = { 1, 0, 1, 1 }; _c; })

//////////////////////// Red colors ///////////////////////////////////////////

Imperial Red
This red shade is a warm, watermelon color. It is perfect for cookbook advertising and retro graphic design. It is also bright enough for use as the main color scheme.

Imperial Red
Hex #ED2939
RGB 237, 41, 57
CMYK 0, 83, 76, 7

Scarlet
This bright, orange-red hue evokes feelings of new bikes and bright, wooden toys.

Scarlet
Hex #FF2400
RGB 255, 36, 0
CMYK 0, 86, 100, 0

Indian Red
This is a nice, cool, clay color. The light tones give it a sandy feel. The cool undertones make it feel appropriate for interior decorating.

Indian Red
Hex #CD5C5C
RGB 205, 92, 92
CMYK 0, 55, 55, 20

Barn Red
This deep, rusty, red-brown color is perfect for old barns and modern high-heeled shoes. The warm, earthy tones pair well with orange and terracotta. The dark shade really pops as a background color.

Barn Red
Hex #7C0A02
RGB 124, 10, 2
CMYK 0, 92, 98, 51

Chili Red
This bright, warm red has a hint of brown in it. This softens an otherwise garish shade. It feels rustic and earthy. This would be a great shade for paintings and earthenware.

Chili Red
Hex #C21807
RGB 194, 24, 7
CMYK 0, 88, 96, 24

Ruby
This bright fuchsia pink is perfect for websites about women or for professional network marketing sites aimed at wives and mothers. This bold rose color is both bright and softly feminine. Pair it with pale pink or black polka dots.

Ruby
Hex #E0115F
RGB 224, 17, 95
CMYK 0, 92, 58, 12

Maroon
This deep, warm red is perfect for fireplaces, beauty sites, and professional legal services. This is a classic color, and it works well as a background color. Accent it with gold and black to complement a professional musician’s site.

Maroon
Hex #800000
RGB 128, 0, 0
CMYK 0, 100, 100, 50

Fire Brick
This is a somewhat light red in warm tones. It’s a great accent color, and it works well to complement browns, tans, and other neutrals.


Fire Brick
Hex #B22222
RGB 178, 34, 34
CMYK 0, 81, 81, 30

Redwood
This color is mostly grayscale with just enough red to make it pop. If it was paired with a true gray, the red in it would stand out. Next to our other reds, however, it feels pretty neutral.

Redwood
Hex #A45A52
RGB 164, 90, 82
CMYK 0, 45, 50, 36

Carmine
This is a beautiful, deep, rose red color. The blue undertones make it a cool-toned red, and the deep rose hue makes it perfect for women’s products.

Carmine
Hex #960018
RGB 150, 0, 24
CMYK 0, 100, 84, 41

Desire
This is a warm pink, slightly similar to salmon. It has one or two drops of blue in it. This is just enough to make it fairly neutral in your color palette. Pair with grays, charcoals, and whites.

Desire
Hex #EA3C53
RGB 234, 60, 83
CMYK 0, 74, 65, 8


Vermilion
This is a rustic brownish-red color, but it is not warm-toned. It has blue undertones and is, therefore, cool-toned. This is an excellent color to use for interior decorating and to cool down a warm tan or golden brown.

Vermilion
Hex #7E191B
RGB 126, 25, 27
CMYK 0, 80, 79, 51

Raspberry
This is a blush red that is medium-toned and very attractive in any room, website, or clothing manufacturing. Even though it is technically a warm blush color, it has enough blue drops in it to make it fairly neutral.

Raspberry
Hex #D21F3C
RGB 210, 31, 60
CMYK 0, 85, 71, 18

Candy Apple
This bright, warm red has orange undertones. It is perfect for boy’s toys, sports car colors, and autumn decorations. For clothing colors, it is great for people with blue-toned skin. For website colors, it is perfect for construction and hardware stores. Pair it with white and charcoal gray.

Candy Apple
Hex #FF0800
RGB 255, 8, 0
CMYK 0, 97, 100, 0


Persian
This is a true red shade without any blue or yellow undertones. It is a medium to light-toned color, and it pairs well with cool, chocolate brown and pale tan. It will appear as a cooler shade when paired with purples and other blue tones. When paired with black, use black sparingly.

Persian
Hex #CA3433
RGB 202, 52, 51
CMYK 0, 74, 75, 21

Hibiscus
This is a cool-toned, purple-red shade with many blue undertones. It evokes lilacs, lavender, skin-care products, and lipstick colors. Pair with a medium gray or with a cool-toned, light tan.

Hibiscus
Hex #B43757
RGB 180, 55, 87
CMYK 0, 69, 52, 29

U.S. Flag
This is a warm-toned rose red. It has both blue and yellow undertones, so it should be paired with warm, light browns or used to complement cool-toned grays. Because of the additional yellow undertones, this would be appropriate for use with men’s products.

U.S. Flag
Hex #BF0A30
RGB 191, 10, 48
CMYK 0, 95, 75, 25


Ferrari
This is a bright, warm, fire-engine red shade. It is the same color you might find on a sexy orange-red sports car, hence the vivacious name. Combine this red with black or pale, cool blue or turquoise.

Ferrari
Hex #FF2800
RGB 255, 40, 0
CMYK 0, 84, 100, 0

Sangria
This is a cool, reddish-brown with plenty of blue undertones. These undertones make this color a decorator’s dream. It can be paired with any true brown or complemented with pure white and navy blue. However you use it, the red will show through.

Sangria
Hex #5E1914
RGB 94, 25, 20
CMYK 0, 73, 79, 63

Mahogany
This is a warm, dark brown with reddish hues all throughout. You should only pair this color with a cool-toned medium tan or with other warm colors. The chocolate hue is very attractive and is a good background color for both websites and rooms of a house.

Mahogany
Hex #420D09
RGB 66, 13, 9
CMYK 0, 80, 86, 74

Burgundy
This rich, deep red hue has many blue undertones and makes a perfect rose red. This color is vibrant and rich enough to stand all by itself. Pair it with charcoal gray and pure white. Keep the colors around it cool-toned, unless you want to blend it with oranges and warm browns for an autumnal color scheme.


Burgundy
Hex #8D021F
RGB 141, 2, 31
CMYK 0, 99, 78, 45

Crimson
This is a lovely brick red with brown undertones. The brown supports the earthy brick feel of this color. This would be a suitable color for an interior decorator’s site, particularly when paired with a cool, light tan, white, and a cool, chocolate brown.

Crimson
Hex #B80F0A
RGB 184, 15, 10
CMYK 0, 92, 95, 28

Rust
This is a warm light brown color with yellow undertones. The red shading will really pop out if you pair this color with forest green.

Rust
Hex #933A16
RGB 147, 58, 22
CMYK 0, 61, 85, 42

Light Salmon
This is more of a pale orange hue. It has enough red in it to give it a pink hue, but it definitely has many yellow undertones. Pair this with bright green for a festive Mexican flair.

Light Salmon
Hex #FFA07A
RGB 255, 160, 122
CMYK 0, 37, 52, 0


Salmon
This has a lovely coral hue with enough yellow undertones to make it very warm and nurturing. Use this for websites about breastfeeding, new mothers, and baby care.

Salmon
Hex #FA8072
RGB 250, 128, 114
CMYK 0, 49, 54, 2

Dark Salmon
This is a true skin tone and should only be paired with neutral tans and light browns as an off-pink hue. Don’t use this color for websites or interior decorating. Only use it as an off-pink accent color.

Dark Salmon
Hex #E9967A
RGB 233, 150, 122
CMYK 0, 36, 48, 9

Light Coral
This is a cooler shade of pink than the salmon color. It should be used with cool-toned taupe and cool, dark tan colors. This is also a fairly standard color and is used often in home decorating and in softly feminine website design.

Light Coral
Hex #F08080
RGB 240, 128, 128
CMYK 0, 47, 47, 6

Red (True Red)
This is a true red, your basic, undifferentiated red color. Like other true colors, it appears warm when paired with warm colors and cooler when paired with cool colors. As you can see in the coding below, this is your truest shade of red.


Red
Hex #FF0000
RGB 255, 0, 0
CMYK 0, 100, 100, 0

Dark Red
This is a dark version of true red. Because it doesn’t have any blue or yellow undertones, you can pair it with both warm and cool colors. It will take on the features of either color tone. This shade is particularly attractive with Indian Red (above) and Pale Violet Red (below).

Dark Red
Hex #8B0000
RGB 139, 0, 0
CMYK 0, 100, 100, 45

Tomato
This is a light, orange-red color that is perfectly paired with warm, golden browns and warm, buttercup yellows. Use this solely as an accent color to warm up a color scheme without overpowering it with bright orange. Pair with black to use on a construction or hardware site.

Tomato
Hex #FF6347
RGB 255, 99, 71
CMYK 0, 61, 72, 0

Orange Red
This is a basic blending of red and orange. Because it is so bright, it should only be used as a single accent color. Use it as an accent color paired with a neutral main color and a neutral accent color. It is easily overpowering, so you should only use it sparingly.


Orange Red
Hex #FF4500
RGB 255, 69, 0
CMYK 0, 73, 100, 0

Pale Violet Red
Next to an orangey-red color, this hue appears very purple. In fact, it is a lot warmer than it looks in comparison. It appears much redder when next to a true blue-violet. Use this color to warm up a cool, blue color scheme. It is also a good color to use with brick reds and warm browns.

Pale Violet Red
Hex #DB7093
RGB 219, 112, 147
CMYK 0, 49, 33, 14

Light Brick
This shade is the consummate light red. Without any blue tinges, it avoids becoming pink or rose. This color is sometimes used for men’s and boy’s t-shirts. It is also the color of bricks after they have sat in the sun for several decades.

Light Brick
Hex #FB607F
RGB 251, 96, 127
CMYK 0, 62, 49, 2

Brick
Here is a fresh brick, straight from the manufacturing line. It’s slightly darker and has a little more brown in it than the Vermilion shade.

Brick
Hex #7E2811
RGB 126, 40, 17
CMYK 0, 68, 87, 51


Prismatic Red
This is an interesting shade of true red that lies between light red and true, bright red. It does not have any yellow or blue to tint it, so it works well as a monochromatic hue. Use this red for basic, informational sites.

Prismatic Red
Hex #D03D33
RGB 208, 61, 51
CMYK 0, 71, 75, 18

Prismatic Legacy
This is close to a bright, true red. However, it has a slight orange undertone. This gives it a warm, tomato color. It is a good construction or masculine color.

Prismatic Legacy
Hex #BA1607
RGB 186, 22, 7
CMYK 0, 88, 96, 27

Prismatic Vermilion Renewal
This red shade is very similar to true red. However, it has some blue undertones. This gives it a nice, cool shade. Often, when people think of the ideal red, this is the shade they have in mind.

Prismatic Vermilion Renewal
Hex #CA0123
RGB 202, 1, 35
CMYK 0, 100, 83, 21

Prismatic Reflection’s Shade
This shade comes across as almost orange. The hue is between true and light red. The undertones are definitely yellow. The overall feel is old-fashioned warmth. Use this shade to depict nostalgia and old farmhouses.


Prismatic Reflection’s Shade
Hex #FF3C28
RGB 255, 60, 40
CMYK 0, 76, 84, 0

49ers Red
The San Francisco 49ers are a California-based NFL team that take their name from the 1849 gold rush that drew so many American settlers to what is now California. Their official team colors are red and white, with the red taking on a bright, idealistic hue to match its history.

49ers Red
Hex #AA0000
RGB 170, 0, 0
CMYK 0, 100, 100, 33

AZ Cardinals Red
Another professional American football team, the Arizona Cardinals were originally from Chicago. They’re named after the small red and black North American bird, so it should come as no surprise that their colors mimic the plumage of that animal, right down to the striking red, black, and white uniform designs.

Cardinals Red
Hex #BD2031
RGB 189, 32, 49
CMYK 0, 83, 74, 26

Airbnb Red
Airbnb is less than fifteen years old, but it’s already completely changed the way most of us approach our travel plans. The cheerful red of their logo is a little bit softer than a traditional red, but it’s still warm and welcoming enough to promote each new home it offers.


Airbnb Red
Hex #FF5A5F
RGB 255, 90, 95
CMYK 0, 65, 63, 0

Ajax Red
The Amsterdamsche Football Club Ajax is often considered one of the most successful football clubs in the Netherlands. Named after the Greek hero who fought in the Trojan War, the club’s official colors include red, white, blue, and black. The home uniforms feature details in a bright, dynamic red color.

Ajax Red
Hex #D2122E
RGB 210, 18, 46
CMYK 0, 91, 78, 18

Alabama Crimson
Established back in 1820, the University of Alabama is the oldest university in the state, and its various athletic departments are hailed across the country as “The Crimson Tide”. As the name might suggest, Alabama’s main color is the distinctive crimson shade that heralds the university’s arrival to each event.

Alabama Crimson
Hex #9E1B32
RGB 158, 27, 50
CMYK 0, 83, 68, 38

Alizarin Crimson
Alizarin Crimson is named after the alizarin dye that derives from the madder plant. Throughout history, this same dye has been used to make red and purple fabrics. The British “redcoat” soldiers were renowned for wearing red uniform jackets that were dyed with the same compound that makes Alizarin Crimson.


Alizarin Crimson
Hex #E32636
RGB 227, 38, 54
CMYK 0, 83, 76, 11

Amaranth Red
Amaranth blossoms are small, jewel-red blooms that are sometimes known by the far less flattering name of “pigweed”. The seeds of the amaranth plant can be roasted and mixed into candy, but the flowers are what gives Amaranth Red its name, based on the similarity in color between the two.

Amaranth Red
Hex #F4364C
RGB 244, 54, 76
CMYK 0, 78, 69, 4

American Rose
American Rose is the typical rosy red, but given a classic American twist. This translates to a red that’s just a little bit brighter and sharper-looking than the traditional Rose Red, with a resulting sense of life and energy that sets it apart, or, depending on your perspective, makes it more jarring.

American Rose
Hex #FF033E
RGB 255, 3, 62
CMYK 0, 99, 76, 0

Angels Red
The Los Angeles Angels are a professional baseball team with their home field in Anaheim, California. Originally founded in 1892, the team’s colors include a bright, iconic red, navy blue, and silver, all of which were popular color choices for teams in the late 1800s and feature on many uniforms.

Angels Red
Hex #BA0021
RGB 186, 0, 33
CMYK 0, 100, 82, 27

Almost Apricot Red
Apricots, as a quick trip to the grocery store will tell you, are much more orange or even yellow in color. That’s why this shade of red is considered “Almost” Apricot. It has more red notes to it to counteract the yellow or orange pull and keep it in the red family.

Almost Apricot Red
Hex #E5B39B
RGB 229, 179, 155
CMYK 0, 22, 32, 10

Arsenal Red
One of the most well-known football clubs in the United Kingdom, Arsenal Football Club was founded in 1886 and has remained a beloved part of British culture ever since. Its official colors include white, blue, and Arsenal Red, a bold, dramatic shade prominently seen on their home and away uniforms.

Arsenal Red
Hex #DB0007
RGB 219, 0, 7
CMYK 0, 100, 97, 14

Auburn Red
Auburn is a dark reddish-brown color that is most often used for one very specific purpose: describing hair. If your hair’s a little darker than traditional red hair or has a deeper undertone to it, you’ve probably got what authors in the late 1800s would have praised as “auburn locks”.


Auburn Red
Hex #A52A2A
RGB 165, 42, 42
CMYK 0, 75, 75, 35

BU Scarlet
Boston University was founded in 1869, although its school charter dates back even further to 1839. They’re known as “the Terriers” in most athletic circles, and the colors worn proudly by the Boston Terriers include pure white and a bright scarlet red that have been staples of BU culture for centuries.

BU Scarlet
Hex #CC0000
RGB 204, 0, 0
CMYK 0, 100, 100, 20

Bills Red
Another professional football team, the Buffalo Bills are an NFL team from Buffalo, New York. They’re a relatively new team, only starting professional play in 1960, but they’ve quickly established themselves as a force to be reckoned with. Their team colors include navy blue, royal blue, white, and Bills Red.

Bills Red
Hex #C60C30
RGB 198, 12, 48
CMYK 0, 94, 76, 22

Bittersweet Shimmer Red
Bittersweet Shimmer Red is a bright shade of red. The “sweet” part of its name comes from the clarity of its jewel-red hues, while the “bitter” part stems from the slightly darker undertones that pull it away from true red. The “shimmer” comes from the resulting combination of red-blue tones.


Bittersweet Shimmer Red
Hex #BF4F51
RGB 191, 79, 81 
CMYK 0, 59, 58, 25

Blood Red
Blood Red is every bit as deep and dark as the name might suggest. Even if your veins look purple or blue beneath the skin, the blood that flows through them is every bit as rich and red as this particular shade appears on paper or on the screen.

Blood Red
Hex #660000
RGB 102, 0, 0 
CMYK 0, 100, 100, 60

CG Red
CG Red is one of the official colors of the United States Coast Guard, technically formed when the US Coast Guard was officially merged with a few other services in 1915. Since then, CG Red has served as a variation on the colors of the American flag and a symbol of service and bravery.

CG Red
Hex #E03C31 
RGB 224, 60, 49 
CMYK 0, 73, 78, 12

Cadmium Red
Cadmium Red could technically be any number of pigments that contain the element cadmium in them. For the most part, however, when we say “Cadmium Red”, we’re thinking of this specific color: a bright red hue with some subtle orange or yellow undertones running beneath the bold red top shades.


Cadmium Red
Hex #E30022 
RGB 227, 0, 34 
CMYK 0, 100, 85, 11

Cardinal Red
No matter where you live, you’ve probably seen pictures of Cardinal birds, hopping around in the snow or perched on branches to lend a splash of color to the local scenery. Cardinal Red draws its name from the bright hues of that bird’s distinctive plumage.

Cardinal Red
Hex #C41E3A 
RGB 196, 30, 58
CMYK 0, 85, 70, 23

Carnelian Red
Carnelians are bright, reddish-orange semiprecious minerals that are found throughout Indonesia, Brazil, India, Russia, and Germany. Carnelian Red is very obviously named after these gemstones, as it bears the same cheerful reddish colors with strong notes of red and yellow running beneath to lighten the overall shade to something sharper.

Carnelian Red
Hex #B31B1B
RGB 179, 27, 27 
CMYK 0, 85, 85, 30

Cerise Red
Cerise comes from the French word for cherry and dates back to the late 1850s as a color word. Even though the pure color looks a lot closer to the color of an actual cherry, Cerise Red often loses some of its intensity during the application process and ends up looking more pink.


Cerise Red
Hex #DE3163 
RGB 222, 49, 99 
CMYK 0, 78, 55, 13

Chiefs Red
Although they were originally the Dallas Texans when they were first founded in 1960, today they’re the Kansas City Chiefs, named after then-mayor Harold Roe Bartley, nicknamed “Chief”. Their team colors are gold, white, and Chiefs Red, a bright and vivid color that decks out their uniforms and helmets alike.

Chiefs Red
Hex #E31837
RGB 227, 24, 55 
CMYK 0, 89, 76, 11

Chocolate Cosmos Red
Chocolate Cosmos blossoms are actually part of the sunflower family. Native to Mexico, these deep red, almost brown flowers are the inspiration behind Chocolate Cosmos Red’s name, as the color itself is only a little bit darker than the flowers that grow in the wild throughout Mexico’s many temperate zones.

Chocolate Cosmos Red
Hex #58111A 
RGB 88, 17, 26 
CMYK 0, 81, 70, 65

Cincinnati Red
Based in Cincinnati, the Cincinnati Reds are a professional baseball team that’s been around since 1881. They may have been more famous in decades past than they are today, but their trademark red, black, and white uniforms have remained the same throughout history down to the present day.


Cincinnati Red
Hex #C6011F
RGB 198, 1, 31
CMYK 0, 99, 84, 22

Cinnabar Red
Cinnabar is a solid form of mercury sulfide. Prior to the rise of industrialization, it was the most common source for mercury ore, and the reddish brown stone was highly valued by the ancient Romans for the volatile metal it held within. Cinnabar red is reddish-brown, almost orange.

Cinnabar Red
Hex #E44D2E
RGB 228, 77, 46 
CMYK 0, 66, 80, 11

Coke Red
The Coca-Cola Company, for better or for worse, has left a permanent mark on the world as we know it. No matter where you go, it’s nearly impossible to avoid seeing advertisements for Coke products, accompanied as always by the distinctive cheerful red of Coca-Cola’s logo.

Coke Red
Hex #F40009
RGB 244, 0, 9 
CMYK 0, 100, 96, 4

Coquelicot Red
Coquelicot is a bright orangish red. It takes its name from the French word coquelicot, which was a common vernacular word used to describe the wild poppies that often bore the same color. Monet liked to use Coquelicot Red in his paintings of poppies and other wildflower landscapes.

Coquelicot Red
Hex #FF3800 
RGB 255, 56, 0 
CMYK 0, 78, 100, 0

Coral Red
While coral reefs and corals themselves often come in a wide range of colors, Coral Red is named after what many of us consider to be the most iconic shade of coral – a bright, cheerful color that has some slightly pink or orange undertones but is still predominantly red.

Coral Red
Hex #FF7F50 
RGB 255, 127, 80 
CMYK 0, 50, 69, 0

Cordovan Red
Cordovan Red is a rich red color that’s somewhere between rosewood and a dark brown. The color is named after the city of Córdoba in Spain, which is where skilled craftsmen were renowned for producing a luxurious supply of leather tinted to the shade we now know as Cordovan Red.

Cordovan Red
Hex #893F45 
RGB 137, 63, 69 
CMYK 0, 54, 50, 46

Crayola Red
Obviously Crayola offers a wide range of red colors inside each and every box of crayons. However, Crayola Red is the name officially given to the bright, child-like hue that was specifically developed by Crayola in order to be used for all of the company’s “true red” crayons going forward.

Crayola Red
Hex #EE204D
RGB 238, 32, 77 
CMYK 0, 87, 68, 7

Electric Crimson
Electric Crimson is technically the same shade as regular or “true” crimson, but with a little bit of an added kick. By adding just enough blue to sharpen up the edges of the original crimson color, Electric Crimson provides a pop of energy and vivacity to a slightly gloomier shade.

Electric Crimson
Hex #FF003F
RGB 255, 0, 63 
CMYK 0, 100, 75, 0

English Red
English Red is a classic oil shade that has long been used by painters and interior decorators alike. It has a slight rust color to it and is a few shades darker than traditional red, but it’s still bright enough to lend a sense of comfort and cheer to any setting.

English Red
Hex #AB4B52 
RGB 171, 75, 82 
CMYK 0, 56, 52, 33

Falcons Red
Based in Atlanta, Georgia, the Falcons are a professional American football team that was founded in 1966 after a few false starts. Their team colors are black, red, silver, and white, although their specific shade of Falcons Red is deep and dark, closer to crimson than to true red.

Falcons Red
Hex #A71930 
RGB 167, 25, 48 
CMYK 0, 85, 71, 35

Falu Red
If you’ve ever looked at a barn door and thought that surely you must be looking at the color Barn Red, you’ve been mistaken. Falu Red is a specific pigment used in red paint, and it is almost always the specific shade of red used for barns and sheds alike.

Falu Red
Hex #801818 
RGB 128, 24, 24 
CMYK 0, 81, 81, 50

Fire Engine Red
The exact shade of red used for the fire engines in your hometown may not be the same across the nation. However, most fire engines are painted some variation on Fire Engine Red in order to give other cars or vehicles a clear warning to get out of the way.

Fire Engine Red
Hex #CE2029
RGB 206, 32, 41 
CMYK 0, 84, 80, 19

Flame Red
If you’ve ever sat around a campfire late at night, you know that flames can come in a wide range of colors. Nevertheless, Flame Red is a bright, warm shade of red that hearkens back to the heat and the energy contained within the dancing flames of a roaring fire.

Flame Red
Hex #E25822
RGB 226, 88, 34 
CMYK 0, 61, 85, 11

Folly Red
Folly Red is a cheerful shade of red that looks a little bit orange despite not having very much yellow tint to it at all. It has actually got more blue in it than the average shade of red does, and the end result is slightly lighter and sweeter than usual.

Folly Red
Hex #FF004F
RGB 255, 0, 79 
CMYK 0, 100, 69, 0

French Puce Red
Despite its fancy-sounding name, French Puce Red gets its marker from a pretty gross source. Puce is the French word for flea, and the dark, purplish-brownish red color is supposed to be the same color as dried blood on linen bedsheets or a smashed flea.

French Puce Red
Hex #4E1609 
RGB 78, 22, 9 
CMYK 0, 72, 88, 69

Fuchsia
Fuchsia is a bright purple red color that takes its name from the flowers of the fuchsia plant, which in turn was named after a 16th century botanist named Leonhart Fuchs. It was a popular dye choice throughout the 1800s and still remains a very popular paint color today.

Fuchsia
Hex #FF00FF
RGB 255, 0, 255 
CMYK 0, 100, 0, 0

Fuzzy Wuzzy Red
Fuzzy Wuzzy Red is a soft, warm-feeling shade of red that’s a little bit lighter than traditional red. It also has equal amounts of blue and green, so the end result is a rounded-out shade that feels a little more muted than just a plain shade of red would appear.

Fuzzy Wuzzy Red
Hex #CC6666 
RGB 204, 102, 102 
CMYK 0, 50, 50, 20

Garnet Red
Garnets are the birthstone for the month of July and were said to be the favorite jewels of Martha Washington, George Washington’s wife. Regardless of your own birthday, it doesn’t take a special date of birth in order to appreciate the deep red, almost maroon hues found within Garnet Red.

Garnet Red
Hex #733635
RGB 115, 54, 53 
CMYK 0, 53, 54, 55

Harvard Crimson
Harvard University is one of the most famous institutes of higher learning in the United States, so it should come as no surprise that their school colors are nearly as well-known. More specifically, their school color, as Harvard Crimson is the only official color recognized by the university.

Harvard Crimson
Hex #A51C30
RGB 165, 28, 48
CMYK 0, 83, 71, 35

Hollywood Cerise Red
We’ve already discussed “regular” Cerise Red and how it can often come across as looking more pink than true red. Hollywood Cerise Red dials up that pink undertone for a vivacious, flirtatious pinkish-red hue that puts the viewer in mind of dazzling lights and close encounters with famous celebrities.

Hollywood Cerise Red
Hex #F400A1
RGB 244, 0, 161 
CMYK 0, 100, 34, 4

Husker Red
The University of Nebraska has several locations within the state, but their Lincoln campus is home to the Huskers, which is the name given to the athletic division at the university. Their official colors are cream, black, and Husker Red, which is a sharp and vibrant color that really stands out.

Husker Red
Hex #E41C38 
RGB 228, 28, 56 
CMYK 0, 88, 75, 11

Japanese Carmine
As a color, carmine is believed to have derived from the Persian word for worm or insect, as carmine or cochineal red comes from a special compound found in the bodies and eggs of certain types of insects that were highly valued in the ancient world. Japanese Carmine is a little bit darker than traditional carmine, but it still carries that rich reddish-brown hue that was so beloved by the ancient Persians, Greeks, and Romans.

Japanese Carmine
Hex #9D2933 
RGB 157, 41, 51
CMYK 0, 74, 68, 38

Jasper Red
Like carnelian, jasper stones are variations on the semiprecious chalcedony stone. Jasper stones are typically considered “impure”, as they often have visible bands of iron ore or other compounds running throughout them. Nevertheless, they are highly valued for their vibrant hues and can come in green, red, or green with red spots. Jasper Red is named after the bright orange-y red color that Jasper sometimes displays.

Jasper Red
Hex #D73B3E 
RGB 215, 59, 62 
CMYK 0, 73, 71, 16

Jelly Bean Red
For most of us, when we think of jelly beans, we think of a candy that comes in a lot of different colors. However, Jelly Bean Red refers specifically to the bright, almost candy-apple color that’s usually found in any mixed bag of jelly beans. Jelly beans have been around since the early 1900s, and they don’t seem to be going away any time soon.

Jelly Bean Red
Hex #DA614E 
RGB 218, 97, 78 
CMYK 0, 56, 64, 15

Kenyan Copper Red
Kenyan Copper Red is a rich reddish-brown color that is supposed to remind the viewer of the sun-baked earth, the vivid sunset, or the bright sheen of burnished copper. Like some of the other colors on this list, Kenyan Copper Red is a popular lipstick color, although it is also a fairly popular choice when it comes to interior decoration, architecture, and overall aspects of design.

Kenyan Copper Red
Hex #7C1C05 
RGB 124, 28, 5 
CMYK 0, 77, 96, 51

Lava Red
If you’ve ever looked at a picture of burning hot magma sliding down the side of a volcano and admired its color, you’re not alone. Although actually touching the lava may not be the best idea, you can capture some of the warmth and vibrancy of the shade with Lava Red. Lava Red is a bright, burning hot shade of red that carries all of the fascination without any of the danger.

Lava Red
Hex #CF1020
RGB 207, 16, 32
CMYK 0, 92, 85, 19

Liverpool Red
Liverpool Football Club is one of the most valuable football clubs in the world, with a net value of around 2.18 billion dollars. Originally founded in 1892, Liverpool’s home colors are a bright Liverpool Red, even if they don greenish blue uniforms for their away games.

Liverpool Red
Hex #C8102E 
RGB 200, 16, 46 
CMYK 0, 92, 77, 22

Lust Red
Lust Red is a bright color that’s meant to capture some of the passion, excitement, and intrigue of a brand new relationship. As befits the name, it’s also an extremely popular color for many different brands of women’s lipsticks, although it can be seen in several prominent works of art and architecture as well.

Lust Red
Hex #E62020
RGB 230, 32, 32 
CMYK 0, 86, 86, 10

MIT Red
MIT, or the Massachusetts Institute of Technology, is a widely influential university that has produced ninety-seven Nobel laureates since the awards were first established. Their colors are MIT Red and gray, officially known as “cardinal red” and “silver gray”, although they aren’t true crimson or silver.

MIT Red
Hex #A31F34
RGB 163, 31, 52
CMYK 0, 81, 68, 36

Madder Red
Madder Red is the name given to pigments that come from the Rubia or madder plant. Although there are multiple strains of madder plant, the Rubia tinctorum species was treasured by ancient and early modern civilizations alike for the deep red cloth that its dye produced.

Madder Red
Hex #A50021
RGB 165, 0, 33 
CMYK 0, 100, 80, 35

Pigment Magenta
There are actually several different definitions of Magenta, but most sources seem to agree that the color falls somewhere between purple and pink and true red. The screen color Magenta is identical to Fuchsia, but traditional pigment Magenta tends to have a darker and less vivid shade to it.

Pigment Magenta
Hex #FF0090
RGB 255, 0, 144 
CMYK 0, 100, 44, 0

Manchester United Red
Manchester United Football Club is the highest-earning, most-decorated, and arguably most well-known football club in the UK. Since 1878, their home colors have been red and white, with the specific Manchester United Red decorating their shirts and serving as an accent color along their shorts as they take the field.

Manchester United Red
Hex #DA291C
RGB 218, 41, 28 
CMYK 0, 81, 87, 15

Medium Violet Red
Medium Violet Red is yet another great example of why violet flowers are a lot closer to purple than they are blue, no matter what the poets would have you believe. Medium Violet Red is a pale purplish red color with a few notes of cool blue throughout.

Medium Violet Red
Hex #C71585
RGB 199, 21, 133 
CMYK 0, 89, 33, 22

Munsell Red
The Munsell color system is an outdated method of organizing and labeling colors. Professor Albert H. Munsell, who gave this system its name, is still honored in the naming convention of several primary colors. Even if his work is no longer in use, he laid the foundation for today’s color organization.

Munsell Red
Hex #F2003C
RGB 242, 0, 60
CMYK 0, 100, 75, 5

NCS Red
North Carolina State University was founded in 1887 and is home to more than 35,000 students today. Their colors are red and white, although “the Wolfpack”, as their athletic teams are often known, tend to favor the bold, bright color of NCS Red when they’re out on the field.

NCS Red
Hex #C40233
RGB 196, 2, 51 
CMYK 0, 99, 74, 23

Nationals Red
The Washington Nationals are a baseball team from Washington, DC that was technically founded in the late 1800s, although they got off to a few false starts. Their team colors of red, white, and blue are only to be expected seeing as how they hail from the nation’s capitol city.

Nationals Red
Hex #AB0003
RGB 171, 0, 3 
CMYK 0, 100, 98, 33

Oklahoma Crimson
The University of Oklahoma was founded in 1890 in what is now the state of Oklahoma, which means that it was an established university before Oklahoma was a state. Nicknamed “the Sooners”, OU’s athletics department typically wears either cream or crimson, which is where Oklahoma Crimson gets its name.

Oklahoma Crimson
Hex #841617
RGB 132, 22, 23 
CMYK 0, 83, 83, 48

Oxblood Red
Oxblood Red is an extremely dark shade of reddish-brown or red that is sometimes referred to as “Temptress Red”. It’s often used in fashion and architecture alike, with shoes in particular coming in many shades of deep red and brown, including the increasingly trendy and desirable shade of Oxblood Red.

Oxblood Red
Hex #800020
RGB 128, 0, 32
CMYK 0, 100, 75, 50

Pastel Red
While we tend to think of pastel colors as being more along the lines of pastel pinks, blues, yellows, and greens, pastel technically refers to any color with high value and low saturation. As a result, Pastel Red is basically true red, but with a much lower saturation.

Pastel Red
Hex #FF6961 
RGB 255, 105, 97 
CMYK 0, 59, 62, 0

Penn Red
The University of Pennsylvania was founded in 1740, which means it’s one of only nine colleges in the US that existed before the United States became a country. Their school colors include Penn Blue and Penn Red, both of which are darker, more muted takes on the traditional color shades.

Penn Red
Hex #990000
RGB 153, 0, 0 
CMYK 0, 100, 100, 40

Persian Rose Red
We’ve seen American Rose Red and a few other variations on the same theme, but now it’s time for Persian Rose Red. Persian Rose Red is significantly lighter than most other rose reds, resulting in a soft, almost pink shade of red that seems warmer, gentler, and far less insistent.

Persian Rose Red
Hex #FE28A2
RGB 254, 40, 162 
CMYK 0, 84, 36, 0

Phillies Red
The Philadelphia Phillies are an American baseball team based in (you guessed it) Philadelphia. Because they hail from the birthplace of the nation, their team colors are about as patriotic as you can get, including white, blue, and the bright shade of red known as Phillies Red by devoted fans.

Phillies Red
Hex #E81828
RGB 232, 24, 40 
CMYK 0, 90, 83, 9

Pigment Red
Pigment Red usually refers to the specific tone of red created by pure red pigments. However, since there’s no such thing as one single “red” color, the actual shade of red pigments can vary widely across different products. As a result, Pigment Red is sort of a combination of all those shades into one bright finished product.

Pigment Red
Hex #ED1C24
RGB 237, 28, 36 
CMYK 0, 88, 85, 7

Pinterest Red
The image-sharing site Pinterest has grown in size and popularity over the years, but one thing has remained more or less constant since it was founded: the gentle, slightly muted red tones of its logo. By dimming the color just a little, Pinterest keeps its logo from seeming too abrasive.

Pinterest Red
Hex #E60023 
RGB 230, 0, 35 
CMYK 0, 100, 85, 10

Popstar Red
Popstar Red is a bold, vivacious shade of red that straddles the line between pink, red, and orange. It’s a youthful, energetic color that doesn’t take itself seriously enough to be Rockstar Red, but it’s still got more than enough fun and excitement to make up for its relative inexperience.

Popstar Red
Hex #BE4F62 
RGB 190, 79, 98 
CMYK 0, 58, 48, 25

Portland Orange Red
Portland Orange Red is a dazzling color that combines the warmth and passion of traditional orange and red hues with the slightly more laid-back vibe that most people picture when they imagine Portland. It has a little more green in it than most reds, and the result is truly unique.

Portland Orange Red
Hex #FF5A36 
RGB 255, 90, 54 
CMYK 0, 65, 79, 0

Prune Red
Anyone who’s ever eaten a prune knows that those dried fruits are more purple than they are true red. It should come as no surprise, therefore, that Prune Red is a deep, rich color with strong blue and purple undertones that nevertheless allows the red notes to keep shining through.

Prune Red
Hex #701C1C 
RGB 112, 28, 28 
CMYK 0, 75, 75, 56

Radical Red
Radical Red is just regular red but a little bit more, well, radical. The secret of Radical Red’s color scheme lies in its relatively high amounts of blue pigment. As a result, Radical Red veers slightly towards the purple color scheme, albeit not enough to appear noticeably blue or purple.

Radical Red
Hex #FF355E 
RGB 255, 53, 94 
CMYK 0, 79, 63, 0

Red Devil
Not everything associated with the color red is a good thing. Red Devil is a blisteringly hot shade of red that summons up mental images of the little cartoon devils that have become so commonplace in popular culture. The strong tones lend a sense of danger to this hue.

Red Devil
Hex #860111 
RGB 134, 1, 17 
CMYK 0, 99, 87, 47

Red Sox
The Boston Red Sox were founded in 1901 and have long been one of the most well-known and beloved American baseball teams in the league. Their colors include white, navy blue, and Red Sox red, a bright, eye-catching color that helps them stand out both on the pitch and in the American imagination.

Red Sox
Hex #BD3039
RGB 189, 48, 57 
CMYK 0, 75, 70, 26

Rose Red
Red roses have been symbols of passion, desire, and love for literal centuries, as the ancient Greeks associated them with Aphrodite, the goddess of love and beauty. Over time, different colors of rose have become more or less popular, but red roses are an enduring sign of love and appreciation.

Rose Red
Hex #C21E56
RGB 194, 30, 86 
CMYK 0, 85, 56, 24

Rosewood Red
Rosewood actually refers to a group of woods that, when treated and processed, have a red color that ranges anywhere from light red to almost black in hue. Rosewood Red, on the other hand, is a deep red color with purple undertones that provides some of the rich luxury of true rose-colored wood.

Rosewood Red
Hex #65000B
RGB 101, 0, 11 
CMYK 0, 100, 89, 60

Rufous Red
Rufous is an outdated word that was used to describe all sorts of red objects. It appears in everything from medical texts to guides on animal spotting. Today, Rufous Red is often used when describing the feathers or skin of certain animals with a dark red colored appearance.

Rufous Red
Hex #A81C07 
RGB 168, 28, 7 
CMYK 0, 83, 96, 34

Russet Red
The use of the word russet to describe a color dates all the way back to 1562. Russet cloth was a specific type of cloth that had a reddish-brown or brownish-gray color to it, but today, we usually use Russet Red to refer to this dark, rich red.

Russet Red
Hex #80461B
RGB 128, 70, 27 
CMYK 0, 45, 79, 50

Rusty Red
Rust forms when iron and oxygen react to some amount of liquid, usually either water or just moisture in the air. When this reaction occurs, the iron will start to develop a red-brown color that severely weakens the metal. Rust Red captures some of that aged, lived-in sense of color.

Rusty Red
Hex #DA2C43
RGB 218, 44, 67 
CMYK 0, 80, 69, 15

Sanguine Red
In medieval science, a Sanguine temperament meant that the person in question had blood as the predominant “humor” or liquid inside of the body. As a result, they were believed to be cheerful, spontaneous, and impulsive. Sanguine Red derives its color from its resemblance to the color of dried blood.

Sanguine Red
Hex #BC3F4A
RGB 188, 63, 74 
CMYK 0, 66, 61, 26

Spanish Red
Spanish Red is a dark red that draws its deep, rich color from the hematite and iron deposits found in many parts of Spain. As a result, it’s a color that shows up in a lot of Spanish architecture, particularly in roof tiles or various interior decorations.

Spanish Red
Hex #E60026
RGB 230, 0, 38 
CMYK 0, 100, 83, 10

Tango Red
Tango Red may appear closer to pink than true red at first glance. Nevertheless, the color captures some of the passion and excitement of the dance in order to create a lively, flirtatious color that mutes some of the red hues while still playing up all of the fun aspects.

Tango Red
Hex #E4717A 
RGB 228, 113, 122 
CMYK 0, 50, 46, 11

Tawny Red
“Tawny” is often defined as a warm or sandy color, usually veering more towards brown than towards true red, but Tawny Red takes that same warmth and the same bold yellow undertones to create a color that has a definite red tint about it and runs more red than gold.

Tawny Red
Hex #CD5700
RGB 205, 87, 0 
CMYK 0, 58, 100, 20

Tea Rose Red
A tea rose is one of the most common hybrid roses anywhere in the world and usually comes in a wide range of colors. However, Tea Rose Red, with its soft, almost gentle red tones, hearkens back to the classic red roses that most of us picture in our heads.

Tea Rose Red
Hex #F88379
RGB 248, 131, 121 
CMYK 0, 47, 51, 3

Terracotta Red
Terracotta pottery is made from a specific sort of clay found around the world, that takes on a light orange or very pale red color once it’s fired and allowed to cool. Terracotta Red, as a result, takes its name from this pottery color, which closely matches its own hue.

Terracotta Red
Hex #E2725B
RGB 226, 114, 91 
CMYK 0, 50, 60, 11

Tractor Red
These days, most tractors are more likely to be green or yellow than red. Nevertheless, Tractor Red is a bright, cheerful color that paints an almost idyllic image of life on some rural farm, full of fresh air, sunshine, and the sound of a tractor moving slowly through the fields.

Tractor Red
Hex #FD0E35 
RGB 253, 14, 53 
CMYK 0, 94, 79, 1

Turkey Red
Between their deep brown feathers and their distinctive red wattles, turkeys actually have a lot more red in their images than you’d originally think. Turkey Red emphasizes this connection with a deep, reddish brown tint that ties together the various reddish notes that make up a turkey’s characteristic autumnal plumage.

Turkey Red
Hex #A91101
RGB 169, 17, 1 
CMYK 0, 90, 99, 34

Tuscan Red
Tuscan Red is a deep red that looks almost brown in certain lights. Throughout the 1800s, it was a popular choice for train cars both in the northeastern United States and Australia. Today, you’re far more likely to see this color in a set of colored pencils, but some luxury train cars still bear the color.

Tuscan Red
Hex #7C3030
RGB 124, 48, 48
CMYK 0, 61, 61, 51

Upsdell Red
Similar in color to Fire Engine Red, Upsdell Red is a bright, dynamic red color that is often used for flags, especially flags that are meant to be flown at night. Upsdell Red was named after the first headmaster at the King George V school in Hong Kong after WWII.

Upsdell Red
Hex #AE2029 
RGB 174, 32, 41 
CMYK 0, 82, 76, 32

Venetian Red
Venetian Red gets its dark red color from the natural decomposition of iron oxide. Historically, it was a favorite of renaissance painters, particularly in the Italian art world of the 15th century. As a result, this color is closely associated with the artists, artwork, and creators of Venice in particular.

Venetian Red
Hex #C80815
RGB 200, 8, 21 
CMYK 0, 96, 89, 22

Virgin Lust Red
Virgin Lust is a variation on the Lust color listed earlier. The main difference between the two is that Virgin Lust has a slightly lighter tint to it and it leans a little bit closer to the brighter end of the spectrum than towards a pure red.

Virgin Lust Red
Hex #E4181E 
RGB 228, 24, 30
CMYK 0, 89, 87, 11

Wine Red
Not all wines are red, of course. White wines and rose-colored wines are popular in certain circles. However, if you want a color that puts you in the same frame of mind as Homer and his “wine-dark sea”, Wine Red is a bold, deep color full of passion and energy.

Wine Red
Hex #722F37
RGB 114, 47, 55
CMYK 0, 59, 52, 55

Light Red Ochre
Ochre is actually a pigment that consists of regular clay mixed with bits of iron. As the iron rusts, it gives ochre its orange-red tone. Light Red Ochre is slightly lighter than traditional ochre and gives off more of a red tint as opposed to the usual yellowish brown color.

Light Red Ochre
Hex #E97451 
RGB 233, 116, 81
CMYK 0, 50, 65, 9

Medium Vermillion
Vermillion is a brilliant red color that has played an important role in art, culture, and society in multiple civilizations throughout history. Medium Vermillion is a slightly lighter shade of the same color that still bears the characteristically vibrant hue and richness of color that “regular” vermillion has long promoted.

Medium Vermillion
Hex #D9603B 
RGB 217, 96, 59
CMYK 0, 56, 73, 15

UP Maroon
The University of the Philippine’s various athletic teams are collectively referred to as “the Fighting Maroons”, and with UP Maroon as their official color, it’s easy to see why. UP Maroon is a deep, rich color that’s a few shades darker than traditional maroons and is full of dynamic energy.

UP Maroon
Hex #7B1113 
RGB 123, 17, 19
CMYK 0, 86, 85, 52

Outrageous Orange Red
It’s right there in the name, so it comes as no surprise that Outrageous Orange Red definitely tips a little closer to the orange category than it does red. Still, based on its RGB makeup, this color is basically a vivid red that’s been watered down until it looks more orange-y.

Outrageous Orange Red
Hex #FF6E4A 
RGB 255, 110, 74
CMYK 0, 57, 71, 0

Utah Crimson
The University of Utah was founded in Salt Lake City in 1850. Today, it’s home to over 30,000 students and offers nearly a hundred separate degree courses. Utah’s official colors include Utah Crimson, a bold and dynamic color that can be seen at every major sporting event that Utah attends.


Utah Crimson
Hex #D3003F 
RGB 211, 0, 63 
CMYK 0, 100, 70, 17

////////////////////////////////////////// End of red

// /////////////////////// Orange


Dark Orange
Dark orange is a hue in the orange family that is darker than basic orange, incorporating a more magenta undertone, and sometimes leaning a little towards brown.

Dark Orange
Hex #FF8C00
RGB 255, 140, 0
CMYK 0, 45, 100, 0

Vivid Orange
Vivid orange refers to a vibrant, more saturated shade of orange that can be compared to the color of carrots.

Vivid Orange
Hex #FF5E0E
RGB 255, 94, 14
CMYK 0, 63, 95, 0

Orange-Red
Orange-red is a shade of orange that incorporates a high percentage of red. This reddish orange hue is similar to the color of blood oranges.

Orange-Red
Hex #FF4500
RGB 255, 69, 0
CMYK 0, 73, 100, 0

Tomato
Tomato refers to a warm, reddish orange hue in the orange family that is comparable to the color of a ripe tomato fruit.


Tomato
Hex #FF6347
RGB 255, 99, 71
CMYK 0, 61, 72, 0

Metallic Orange
Metallic orange, as the name suggests, has metallic tones in it. Metallic orange also has a gold-like sheen to the hue.

Metallic Orange
Hex #E26310
RGB 226, 99, 16
CMYK 0, 56, 93, 11

Pumpkin
Pumpkin refers to a shade of orange that – you guessed it – resembles the color of pumpkins. It is often used in color palettes for fall themed art.

Pumpkin
Hex #F5761A
RGB 245, 118, 26
CMYK 0, 52, 89, 4

Smashed Pumpkin
Smashed pumpkin is a color variation on pumpkin, and refers to a shade slightly lighter, or more yellow in hue, such as a combination of the colors of the outside and the inside of a pumpkin.

Smashed Pumpkin
Hex #FD673A
RGB 253, 103, 58
CMYK 0, 59, 77, 1


Yellow-Orange
Yellow-orange is a shade that combines yellow and orange colors. It looks like a muted or creamy orange.

Yellow-Orange
Hex #FFA836
RGB 255, 168, 54
CMYK 0, 34, 79, 0

Carrot Orange
Carrot orange is a rich, warm and saturated shade of orange that looks like carrot juice. It is somewhat similar to yellow-orange, but darker.

Carrot Orange
Hex #ED9121
RGB 237, 145, 33
CMYK 0, 39, 86, 7

International Orange
International orange is a deep, medium orange hue used by the aerospace industry to differentiate certain objects from their backgrounds, surroundings or other objects. It is basically the same color as orange-red with slightly more green in it.

International Orange
Hex #FF4F00
RGB 255, 79, 0
CMYK 0, 69, 100, 0

Spanish Orange
Called so because of an entry in Rosa Gallego’s color dictionary that calls the shade “anaranjado”, the Spanish word for orange. Spanish orange is a warm, medium hue with brownish tints.


Spanish Orange
Hex #F06105
RGB 240, 97, 5
CMYK 0, 60, 98, 6

Tangerine
Tangerine is a warm, yellowish medium orange shade that gets its name from a fruit in the orange fruit family, the skin of which resembles this color.

Tangerine
Hex #F78702
RGB 247, 135, 2
CMYK 0, 45, 99, 3

Princeton Orange
Princeton orange, first referred to by this name in 1928, is one of the colors of Princeton University. The hue is a muted medium orange.

Princeton Orange
Hex #FF8F00
RGB 255, 143, 0
CMYK 0, 44, 100, 0

Orioles Orange
Orioles orange refers to a medium orange hue with red tones, reminiscent of the color of an oriole’s belly. This color is used by the Baltimore Orioles, the Cincinnati Bengals and the Denver Broncos.

Orioles Orange
Hex #FB4F14
RGB 251, 79, 20
CMYK 0, 69, 92, 2


Deep Saffron
Deep saffron is a shade darker than saffron yellow, and is similar in color to the stamen of a saffron flower.

Deep Saffron
Hex #FFA52C
RGB 255, 165, 44
CMYK 0, 35, 83, 0

Alloy Orange
Alloy orange is a shade of brownish orange, named such by Crayola in their 2001 release of metallic crayons. This orange color is warm and earthy.

Alloy Orange
Hex #C35214
RGB 195, 82, 20
CMYK 0, 58, 90, 24

Halloween Orange
Halloween orange is a warm, yellowish, golden orange that resembles the color of a yellowish pumpkin or an orange acorn squash.

Halloween Orange
Hex #EE5921
RGB 238, 89, 33
CMYK 0, 63, 86, 7

Tangelo
Tangelo refers to a deep, rich, reddish orange hue that resembles the skin of a tangelo fruit.


Tangelo
Hex #FC4C02
RGB 252, 76, 2
CMYK 0, 70, 99, 1

Gamboge
Gamboge is a yellowish orange hue somewhat similar to saffron or a dark gold with orange undertones.

Gamboge
Hex #E89611
RGB 232, 150, 17
CMYK 0, 35, 93, 9

Vermilion
Vermilion, first made from cinnabar, or powdered mercury sulfide, is a brilliant reddish-coral orange.

Vermilion
Hex #D74826
RGB 215, 72, 38
CMYK 0, 67, 82, 16

Medium Vermilion
Medium vermilion is a color related to vermilion. This shade is somewhat more muted, resembling a soft brownish or dusty-coral orange tone.

Medium Vermilion
Hex #CF5B2E
RGB 207, 91, 46
CMYK 0, 56, 78, 19


Fulvous
Fulvous, somewhat similar in color to tawny, is a reddish-yellow orange with brown hues. This color is reminiscent of the color of a barn swallow’s belly.

Fulvous
Hex #E68000
RGB 230, 128, 0
CMYK 0, 44, 100, 10

Pastel Orange
Pastel orange is a light, muted or pale shade of orange that is often used for baby related products and décor, especially when the gender of the baby-on-the-way is not yet known.

Pastel Orange
Hex #FEBA4F
RGB 254, 186, 79
CMYK 0, 27, 69, 0

Flame
Flame refers to a shade of orange that is bright, warm and vibrant. This color is sometimes used to illustrate fire.

Flame
Hex #E34A27
RGB 227, 74, 39
CMYK 0, 67, 83, 11

Philippine Orange
Philippine orange is a yellowish gold shade of orange, similar in hue to the marigold flower.


Philippine Orange
Hex #F26E01
RGB 242, 110, 1
CMYK 0, 55, 100, 5

Beer Orange
Beer orange is a muted yellowish orange with some brown undertones similar in shade to the color of beer or ale.

Beer Orange
Hex #F28F1C
RGB 242, 143, 28
CMYK 0, 41, 88, 5

Chinese Orange
Chinese orange is a medium shade of orange with light coral tones. Chinese orange can also be compared to a muted salmon pink.

Chinese Orange
Hex #EB6841
RGB 235, 104, 65
CMYK 0, 56, 72, 8

Jasper Orange
Jasper orange is a dusty orange, or a mix between a tan and a pale orange. This color gets its name from its similarity to hues found in jasper stones.

Jasper Orange
Hex #E89149
RGB 232, 145, 73
CMYK 0, 38, 69, 9


Royal Orange
Royal orange is a light, peachy orange hue. This color works well in combination with various skin tones.

Royal Orange
Hex #FF9944
RGB 255, 153, 68
CMYK 0, 40, 73, 0

Coral
Coral is a color that can be placed in the pink or orange family. It gets its name from ocean corals of a similar pinkish hue.

Coral
Hex #FF7F50
RGB 255, 127, 80
CMYK 0, 50, 69, 0

Dark Coral
Dark coral is another pinkish orange huge that could fall into either the red or orange family. This shade is a darker and heavier version of coral.

Dark Coral
Hex #D75341
RGB 215, 83, 65
CMYK 0, 61, 70, 16

Cadmium Orange
Cadmium orange is a rich, earthy orange tone named after the chemical component cadmium. It is a little similar to dark orange but with more brown undertones.


Cadmium Orange
Hex #E6812F
RGB 230, 129, 47
CMYK 0, 44, 80, 10

Dark Pastel Red
Dark pastel red can be classified as both a red and orange hue. It is a rusty orange red, comparable to a more vibrant version of burnt umber.

Dark Pastel Red
Hex #C34723
RGB 195, 71, 35
CMYK 0, 64, 82, 24

Copper Red
Copper red is a brownish red-orange shade that is similar in color to tones found in copper mineral stones.

Copper Red
Hex #D97448
RGB 217, 116, 72
CMYK 0, 47, 67, 15

University Of Tennessee Orange
As the name suggests, this shade of orange is used in the University Of Tennessee’s logo. It is a warm, golden orange hue similar to the color of an orange poppy.

University Of Tennessee Orange
Hex #F77F00
RGB 247, 127, 0
CMYK 0, 49, 100, 3


Rajah
Rajah is a pale, peachy yellow orange shade that could be classified as an orange, yellow or skin tone color.

Rajah
Hex #FABA5F
RGB 250, 186, 95
CMYK 0, 26, 62, 2

Mango Tango
Mango tango is a warm, golden orange hue similar in shade to pumpkin orange but lighter and brighter.

Mango Tango
Hex #FB8842
RGB 251, 136, 66
CMYK 0, 46, 74, 2

Orange Peel
Orange peel is a shade of orange that is more golden in hue than the name might suggest. It is warm and vibrant and similar to the flesh of a mango fruit.

Orange Peel
Hex #FF9F00
RGB 255, 159, 0
CMYK 0, 38, 100, 0

Vivid Tangelo
Vivid tangelo is a slightly brighter, more vibrant version of the color tangelo. As with tangelo, vivid tangelo is similar in color to the peel of the fruit.


Vivid Tangelo
Hex #EC7625
RGB 236, 118, 37
CMYK 0, 50, 84, 7

Burnt Umber
Burnt umber is a rich, brownish orange shade named after the natural pigment umber that is comprised of iron oxide and manganese oxide.

Burnt Umber
Hex #8A3324
RGB 138, 51, 36
CMYK 0, 63, 74, 46

Papaya Whip
Papaya whip is a pale, pinky, peach orange shade similar in tone, but lighter in hue to the color of papaya fruit flesh.

Papaya Whip
Hex #FFF1D7
RGB 255, 241, 215
CMYK 0, 5, 16, 0

Bittersweet
Bittersweet refers to a shade of reddish orange that is rich in tones of cyan and magenta. It is named after a small berry fruit of a similar name and color.

Bittersweet
Hex #FE6F5E
RGB 254, 111, 94
CMYK 0, 56, 63, 0


Persimmon
Persimmon is a warm, golden orange shade that is named after a small, round Asian fruit.

Persimmon
Hex #EC5800
RGB 236, 88, 0
CMYK 0, 63, 100, 7

Persian Orange
Persian orange is a light shade of tannish orange similar to a pale terracotta. Persian orange is frequently used in pottery and carpets in the Middle East.

Persian Orange
Hex #D99058
RGB 217, 144, 88
CMYK 0, 34, 59, 15

Terracotta
Terracotta is a reddish brown shade of orange that is named after a type of clay earthenware often used to make plant pots.

Terracotta
Hex #E2725B
RGB 226, 114, 91
CMYK 0, 50, 60, 11

Apricot Orange
Bite into an apricot or simply admire its peach-fuzz exterior, and you’ll probably see something very much like this shade of orange. Apricot orange is a little bit lighter and a little bit sweeter than most shades of orange, which can remind you of that first sweet bite of fruit.


Apricot Orange
Hex #FBCEB1
RGB 251, 206, 177
CMYK 0, 18, 29, 2

Bronze Orange
A mix of various metals that allowed various ancient societies to sweep across the ancient world, bronze is a sturdy alloy with a distinctive orange-brown color. Bronze Orange reflects some of the rich heritage and history of this metal in its tone, which mimics that same characteristic orange-brown hue.

Bronze Orange
Hex #CD7F32
RGB 205, 127, 50
CMYK 0, 38, 76, 20

Browns Orange
The Cleveland Browns have long been a staple of Cleveland culture and city pride. Their team colors are brown, gold, and Browns Orange, this bright and intense shade of orange that represents the team and helps get fans’ blood pumping before every big game, no matter where it’s being played.

Browns Orange
Hex #FF3C00
RGB 255, 60, 0
CMYK 0, 76, 100, 0

Buff Orange
Nowadays, the word “buff” may be a reflection of an individual’s strength or appearance, but in Victorian England, it referred to a specific shade of orange-brown. Buff Orange is a reflection of that outdated language, and the pale, soft brown hues of this shade are “buff” in the truest sense.


Buff Orange
Hex #F2CA85 
RGB 242, 202, 133
CMYK 0, 17, 45, 5

Bumblebee Orange
When we think of bumblebees, most of us think of pure yellow or black, but Bumblebee Orange deserves a space at the table, too. Bumblebee Orange is a bright, cheerful color that captures some of the energy and curiosity of watching a bumblebee blunder its careful way around the garden.

Bumblebee Orange
Hex #FFC82A
RGB 255, 200, 42
CMYK 0, 22, 84, 0

Burnt Orange
Burnt Orange is an ever-popular color that’s long been a go-to choice for clothing, branding, and interior decorating. The “burnt” part of its name alludes to the slightly muted, slightly darkened aspect of this color, making it look a little bit more burnt or worn than traditional orange.

Burnt Orange
Hex #CC5500 
RGB 204, 85, 0
CMYK 0, 58, 100, 20

Butterscotch Orange
Butterscotch has been a mainstay in various cuisines since at least the late medieval era. Sweet, rich, and just a little bit salty, butterscotch traditionally provided an alternative to more expensive or exclusive desserts. Today, the distinctive qualities of butterscotch are captured in this warm and equally sweet orange color.


Butterscotch Orange
Hex #D99151 
RGB 217, 145, 81
CMYK 0, 33, 63, 15

Cheese Orange
Obviously, cheese comes in a wide range of colors, from creamy white to mottled green and blue. However, when you think of cheddar cheese, Cheese Orange is probably the color that you’re picturing – a strong, cheerful color that still carries some of the sharp bite that makes cheddar cheese pop.

Cheese Orange
Hex #FFA600 
RGB 255, 166, 0
CMYK 0, 35, 100, 0

Chocolate Orange
Chocolate oranges are a popular Christmastime treat in many countries around the world, but Chocolate Orange is more of a nod to the typical shade of milk chocolate, instead of a reference to any one specific treat. Mellow, warm, and sweet, this orange color will have you craving something sugary.

Chocolate Orange
Hex #D2691E 
RGB 210, 105, 30
CMYK 0, 50, 86, 18

Cider Orange
Regardless of the time of year, there’s nothing like a nice hot mug of cider to put you in a winter-y or autumnal mood. Cider Orange carries some of the spice and cheer of a cup of cider so that you’ll feel warm no matter where – or when – you are.


Cider Orange
Hex #D8A175 
RGB 216, 161, 117
CMYK 0, 25, 46, 15

Copper Orange
Copper tends to corrode or break down very quickly, losing its distinctive color, but fresh or clean copper has a brilliant orange-gold glow to it that can be absolutely dazzling. Copper Orange reflects this exact shade of orange and brown in order to preserve some of the metal’s quickly-fading allure.

Copper Orange
Hex #BB772E 
RGB 187, 119, 46
CMYK 0, 36, 75, 27

Crayola Orange
Crayola Orange may look like your stereotypical orange shade, but it’s actually a very specific hue, designed by experts at the Crayola crayon company to create a shade of orange that would strike a chord with children without being overwhelmingly bright or abrasive.

Crayola Orange
Hex #FF7538 
RGB 255, 117, 56
CMYK 0, 54, 78, 0

Desert Orange
If you’ve ever been out in the desert, you know that this color isn’t so much a reflection of any one color as it is a summation of the overall feeling of the desert – the burning heat and sand and the endless energy of the sky that stretches over you.


Desert Orange
Hex #ED8E4A 
RGB 237, 142, 74
CMYK 0, 40, 69, 7

Desert Sand Orange
Desert Sand Orange, on the other hand, specifically reflects the vast expanses of sun-bleached sand that stretch away in every direction. It’s a pale orange with brown and red undertones that reflect some of the heat and the boundless exploration that a trip to the desert often inspires.

Desert Sand Orange
Hex #EDC9AF 
RGB 237, 201, 175
CMYK 0, 15, 26, 7

Dragon Fire Orange
Dragon Fire Orange is one of those shades of orange that wouldn’t look out of place in a medieval fantasy. It’s bright, energetic, and ready to explode – a perfect match for a color that takes its name from the bursts of flame produced by the dragons of ancient lore.

Dragon Fire Orange
Hex #FD652D 
RGB 253, 101, 45
CMYK 0, 60, 82, 1

Dull Orange
Despite what the name would have you believe, Dull Orange is still pretty bright. While it’s a little bit more muted than Pantone Orange or other bright orange shades, Dull Orange still has plenty of energy and excitement to ensure that it won’t be overlooked by those looking for brightness.


Dull Orange
Hex #DB804E 
RGB 219, 128, 78
CMYK 0, 42, 64, 14

Giants Orange
The New York Giants are a professional baseball team that have been around since the early 1900s and continue to capture the attention of fans across the nation. Their colors include a dark navy blue and the specific shade of orange that takes its name from the team itself – Giants Orange.

Giants Orange
Hex #FE5A1D 
RGB 254, 90, 29
CMYK 0, 65, 89, 0

Ginger Orange
Ginger Orange isn’t necessarily the color of a fresh ginger root. Instead, Ginger Orange is a strong burst of color that reminds the viewer of gingerbread houses and other holiday traditions. It’s warm, bold, and laced with just a little bit of spice to keep the viewer on their toes.

Ginger Orange
Hex #B06500 
RGB 176, 101, 0
CMYK 0, 43, 100, 31

Golden Gate Bridge Orange
The Golden Gate Bridge is one of the most iconic landmarks in the United States, and its distinctive shade of reddish orange helps it stand out against the foggy San Francisco skyline. Golden Gate Bridge Orange echoes the strength and the unique identity that the Golden Gate Bridge embodies.


Golden Gate Bridge Orange
Hex #C0362C
RGB 192, 54, 44
CMYK 0, 72, 77, 25

Goldenrod Orange
Depending on where you live, you may be used to seeing goldenrod flowers growing in gardens or just along the side of the road. These bright, yellowish orange flowers can instantly transform any landscape.

Goldenrod Orange
Hex #DAA520
RGB 218, 165, 32
CMYK 0, 24, 85, 15

Goldfish Orange
Whether you’re thinking of the goldfish fish or the snack of the same name, Goldfish Orange is a close match to the shade that you’re probably picturing. Goldfish have long been some of the most popular aquarium pets in the world, and this bright shade provides a good explanation for it.

Goldfish Orange
Hex #FF9913
RGB 255, 153, 19
CMYK 0, 40, 93, 0

Honey Orange
Similar in shade and feeling to Amber, which has more yellow in it, Honey Orange is named after the sweet substance that you probably have somewhere in your kitchen right now. The light, homey shade captures some of the brightness and sweetness that makes honey such a popular mainstay in homes and kitchens worldwide.


Honey Orange
Hex #FFBD31
RGB 255, 189, 49
CMYK 0, 26, 81, 0

Hunyadi Orange
Hunyadi Orange refers to the color found on the Hunyadi coat of arms. As the name might suggest, the Hunyadi family was one of the most powerful families in early Hungary, and their vision and drive for improvement shaped the nation into what it is today.

Hunyadi Orange
Hex #E8AC41
RGB 232, 172, 65
CMYK 0, 26, 72, 9

Koi Orange
Whether you’ve got a koi pond in your own backyard or have only seen them at various botanical gardens or outdoor decorative ponds, you know that koi fish are actually similar in shade – and family tree – to most goldfish. As a result, this color somewhat matches Goldfish Orange in hue, although it’s a couple of shades darker.

Koi Orange
Hex #D15837
RGB 209, 88, 55
CMYK 0, 58, 74, 18

Light Orange
Light Orange is pretty much exactly what it says on the tin. It’s a lighter or paler shade of the typical Pantone Orange, which means that it’s basically just the “usual” orange with a little bit more white and yellow added in order to soften the tone and make it brighter.


Light Orange
Hex #FED8B1
RGB 254, 216, 177
CMYK 0, 15, 30, 0

Light Copper Orange
We’ve already seen Copper Orange, so now it’s time for Light Copper Orange. The lightness detracts somewhat from the copper comparison, as some of the brightness and intensity of “true” Copper Orange is what makes it similar to its namesake, but the color is still very clearly linked to its foundation.

Light Copper Orange
Hex #F6CBA0
RGB 246, 203, 160
CMYK 0, 17, 35, 4

Pumpkin Orange
As soon as we see Pumpkin Orange we think of Halloween. However, this shade is a little brighter in appearance than the color Halloween Orange. It also reminds us of harvest in fall and it brings back fond memories of baking pumpkin pies.

Pumpkin Orange
Hex #FF7518
RGB 255, 117, 24
CMYK 0, 54, 91, 0

Dark Topaz Orange
Dark Topaz Orange is a color that probably wouldn’t be too highly valued in an actual gemstone. However, as a color, this soft, brilliant tone is still beautiful enough to earn its spot on the list of Topaz Oranges.


Dark Topaz Orange
Hex #EABD8C
RGB 234, 189, 140
CMYK 0, 19, 40, 8

Mahogany Orange
Mahogany is a type of wood that has long been prized for its durable grain and its deep, rich color. Mahogany Orange mimics this same color to create a bold, dramatic shade of orange that almost passes for red, echoing the wealth and luxury of mahogany’s prized grain.

Mahogany Orange
Hex #C04000
RGB 192, 64, 0
CMYK 0, 67, 100, 25

Marigold Orange
Marigolds are small, golden-orange flowers that are found growing in temperate regions around the world. They’re an extremely popular garden or interior design plant, and this bright shade of orange, modeled after the hue of their petals, makes it easy to see why.

Marigold Orange
Hex #EAA221
RGB 234, 162, 33
CMYK 0, 31, 86, 8

Melon Orange
No matter what time of year it is or how you feel about melon fruits, Melon Orange provides a distinctly summery feel. The sweetness of a cantaloupe comes through clear and strong in the bright and cheerful undertones of this mellow melon shade.


Melon Orange
Hex #DF9166
RGB 223, 145, 102
CMYK 0, 35, 54, 13

Mimosa Orange
When we say “mimosa”, what pops into your mind first – the flower or the alcoholic drink that’s always a hit at brunches? Regardless of your first association, the soft red and pink notes of Mimosa Orange are sure to find a match with whatever image you pictured first in your mind.

Mimosa Orange
Hex #FFCA4B
RGB 255, 202, 75
CMYK 0, 21, 71, 0

Neon Orange
Neon Orange is named for the shade of orange typically found in neon orange signs, which in turn derive their color from the gaseous form of the element Neon. It’s a lively and energetic shade that wouldn’t look out of place lighting up the background of any major city’s night life.

Neon Orange
Hex #FFAD00
RGB 255, 173, 0
CMYK 0, 32, 100, 0

Ochre Orange
Ochre Orange is similar to Burnt Orange in a lot of ways. Both shades of orange have the same vibrant base layer, muted somewhat by the darker green or yellow-red notes that give Burnt Orange its aged appearance. The main difference is that Ochre Orange is brighter and less red.


Ochre Orange
Hex #C99700
RGB 201, 151, 0 
CMYK 0, 25, 100, 21

Orange Pale Orange
Orange Pale refers to the specific light shades combined to make this specific hue, so while “Orange Pale Orange” may sound redundant, it’s really the only way to accurately refer to the uniquely soft and gentle shade of orange that has more than earned its spot on this color list.

Orange Pale Orange
Hex #FFDFBF 
RGB 255, 223, 191
CMYK 0, 13, 25, 0

Orange Paper Orange
Like the previous entry, it may sound strange to use the word “orange” twice in a single color’s name. However, “orange paper” is the name for any sheet of paper made with this light, almost plain shade – although it can also refer to rougher pressed paper made with orange peels.

Orange Paper Orange
Hex #FEE8D6 
RGB 254, 232, 214
CMYK 0, 9, 16, 0

Orange Spice Orange
Orange Spice Orange and Spice Orange and Pumpkin Spice Orange may all look fairly similar, but they definitely have their differences. Orange Spice Orange is a brighter, lighter, sweeter, and more fruity shade of orange as compared to a darker, more autumnal tone.


Orange Spice Orange
Hex #D76B00 
RGB 215, 107, 0
CMYK 0, 50, 100, 16

Outrageous Orange
Outrageous Orange promises to be, well, outrageous. The vivid, almost startling intensity of this shade certainly delivers on that promise, and the end result is a dazzling, exciting, and fun-filled shade of orange that easily walks the fine line between outrageous and what could have ended up being just obnoxious.

Outrageous Orange
Hex #FF6E4A 
RGB 255, 110, 74
CMYK 0, 57, 71, 0

Pantone Orange
Pantone Orange is probably the most “typically” orange shade on this list. It takes its name from the Pantone Color Registry, which seeks to classify and organize the hundreds of thousands – if not millions – of different colors, shades, and variations that are found in works of art around the world.

Pantone Orange
Hex #FE5000 
RGB 254, 80, 0
CMYK 0, 69, 100, 0

Peach Orange
We’ve already seen Apricot Orange, but Peach Orange is the more famous variation on the same color. With its bright, sunny undertones and soft, almost pink top notes, Peach Orange is designed to remind viewers of the fuzzy outer layer of a peach. It’s not loud enough to be considered a pink orange, but it’s still got hints of that overall shade.


Peach Orange
Hex #FFCC99 
RGB 255, 204, 153
CMYK 0, 20, 40, 0

Pepper Orange
It may sound strange to name a shade of orange after the famously black spice, but Pepper Orange is actually named after the orange bell pepper. This fruit is really a type of berry, but it was considered too spicy for the Columbus-era Europeans, who accordingly named it for its “spice”.

Pepper Orange
Hex #E77D22 
RGB 231, 125, 34
CMYK 0, 46, 85, 9

Red Fox Orange
Small, clever, and infinitely curious, foxes have played a part in human cultures around the world for centuries. Red Fox Orange captures some of the energy and curiosity that those furry little figures seem to embody, and it also highlights the liveliness that’s left them alternately loved and hated throughout history.

Red Fox Orange
Hex #985629 
RGB 152, 86, 41
CMYK 0, 43, 73, 40

Rumba Orange
It may be popular today as a way of keeping fit, but rumba is a style of dance that long predates the current workout craze. Regardless of where or how you first learned the word, Rumba Orange is a flirtatious shade that captures some of that excitement and love for life.


Rumba Orange
Hex #F06631 
RGB 240, 102, 49
CMYK 0, 57, 80, 6

Safety Orange
If you’ve ever seen a traffic cone, an orange reflective vest, or a sign marking a construction area, then you’ve seen Safety Orange. Safety Orange is the internationally recognized color used to signal an area, event, or object that requires some extra-careful level of protection or observation for everyone’s continued safety.

Safety Orange
Hex #FF6700 
RGB 255, 103, 0
CMYK 0, 60, 100, 0

Safflower Orange
Safflower is a small flowering plant used to make saffron, an aromatic spice that stars in the cuisines of several different cultures. While the flower of the safflower plant may vary in color, the center of any flower will always hold several bright stems that carry this distinctive yellowish orange hue.

Safflower Orange
Hex #FDAE44
RGB 253, 174, 68
CMYK 0, 31, 73, 1

Salamander Orange
Salamanders are small reptiles that live in rotting wood and densely forested areas. Because they were often seen emerging from wood placed on the fire, several ancient cultures thought that these brightly colored creatures actually preferred to live in the fire itself, and the myth still persists down to this day.


Salamander Orange
Hex #F05E23
RGB 240, 94, 35
CMYK 0, 61, 85, 6

Salmon Orange
Salmon Orange is named for the bright pink flesh of the fish that’s so popular at restaurants across the country. For most of their lives, salmon are a dull greenish-blue, but their scales turn to a vivid shade of orange or red as they prepare to birth the next generation.

Salmon Orange
Hex #FF8066 
RGB 255, 128, 102
CMYK 0, 50, 60, 0

Squash Orange
Squash Orange may be in the same family as Pumpkin Orange, but it’s got a bit more variation to it. Because squashes can come in a wide range of sizes, shapes, and colors, Squash Orange reflects some of that versatility in its yellow undertones, which prevent it from being too orange.

Squash Orange
Hex #E89362 
RGB 232, 147, 98
CMYK 0, 37, 58, 9

Sunrise Orange
Sunrise Orange is named for the soft, brilliant streaks of light that color the morning sky each day. Homer might have referred to the dawn as having fingers made of rose, but the warmer light of orange and yellow tend to be more in line with what most of us see.


Sunrise Orange
Hex #E67451
RGB 230, 116, 81
CMYK 0, 50, 65, 10

Sunset Orange
Sunset Orange is a bright, energetic color that has a little bit more “fire” to it than Sunrise Orange does. Sunrises are gorgeous, but sunsets tend to be where you see the vivid reds, oranges, blues and pinks that seem to set the sky ablaze, so this color feels more fitting.

Sunset Orange
Hex #FD5E53
RGB 253, 94, 83
CMYK 0, 63, 67, 1

Syracuse Orange
They’re sometimes referred to as the Syracuse Orangemen, so it should go without saying that one of Syracuse University’s official colors is a bold and vibrant shade of orange. Syracuse Orange is a bright and almost dramatic shade that looks fast-paced, lively, and brimming with energy – just like the university’s students.

Syracuse Orange
Hex #D44500
RGB 212, 69, 0
CMYK 0, 67, 100, 17

Tawny Orange
Tawny Orange is a warm, energetic shade of orange that has a relatively high level of red included in its undertones. As a result, even this relatively muted variation of orange looks bright and heated without looking too overwhelmingly orange or yellow when it’s first observed or noticed.


Tawny Orange
Hex #B25A38
RGB 178, 90, 56
CMYK 0, 49, 69, 30

Tiger Orange
Tiger Orange is a bright, energetic shade of orange that you’ve definitely seen before if you’ve looked at any animal of the same name – or even a picture of the jungle cat. The orange, black, and white patterns of a tiger’s coat help them camouflage almost perfectly with their surroundings.

Tiger Orange
Hex #F96815
RGB 249, 104, 21
CMYK 0, 58, 92, 2

Tiger’s Eye Orange
Tiger’s Eye Orange is full of the thrill of the fight – or, more seriously, it’s a close reflection of the orange-brown blend that often distinguishes the eyes and faces of some of the largest cats in the world. It’s also a close match to the mineral of the same name.

Tiger’s Eye Orange
Hex #E08D3C
RGB 224, 141, 60
CMYK 0, 37, 73, 12

Topaz Orange
Topaz Orange has just a little bit more fire to it than Dark Topaz Orange. In this sense, it’s closer to a prized topaz gemstone, with the elusive notes of red and gold that give those precious stones their uniquely energetic and often enigmatic appearance.


Topaz Orange
Hex #FFC87C
RGB 255, 200, 124
CMYK 0, 22, 51, 0

Tree Sap Orange
Amber is dried or crystallized tree sap, but Tree Sap Orange is more closely linked to the color of tree sap when it first escapes the bark. It’s a little bit darker, a little bit more intense, but it still carries the warmth of amber.

Tree Sap Orange
Hex #CC7711
RGB 204, 119, 17
CMYK 0, 42, 92, 20

Web Orange
Web Orange doesn’t really have anything to do with spiders or even with a weaver’s loom. Instead, Web Orange is named after the world wide web. Web Orange is often used in web design to create sites that are engaging and engrossing without appearing overly aggressive or harsh on the eyes.

Web Orange
Hex #FFA500
RGB 255, 165, 0
CMYK 0, 35, 100, 0

West Side Orange
West Side Orange is very similar to Sunrise Orange and Sunset Orange in that it puts the viewer in mind of the vibrant energy of a late afternoon, but West Side Orange sets itself apart with some of the fast-paced energy that reminds viewers of life in the big city.


West Side Orange
Hex #FF9916
RGB 255, 153, 22
CMYK 0, 40, 91, 0

Wheat Orange
Wheat Orange is an incredibly pale shade of orange that captures some of the vast energy and waving motion of an open field of grain. The soft red undertones keep it in the orange family, but the overall look is a soft golden glow.

Wheat Orange
Hex #F5DEB3
RGB 245, 222, 179
CMYK 0, 9, 27, 4

Xanthous Orange
Xanthous Orange may sound like an exotic shade, but it’s most likely a color that you’ll see in one very specific place. According to the American Kennel Club standard, Golden Retrievers should have a “xanthous” coat. In other words, they should have red, gold, or orange-brown fur.

Xanthous Orange
Hex #F1B42F
RGB 241, 180, 47
CMYK 0, 25, 80, 5

Yam Orange
Packed with vitamins and nutrients, yams are a root vegetable that gets its distinctive orange color from an overdose of carotene, an all-natural content rich in vitamin K. Yam Orange may not be as good for you as its namesake, but it still conveys some of that bright, cheerful color.


Yam Orange
Hex #E17E45
RGB 225, 126, 69
CMYK 0, 44, 69, 12

Mecca Orange
This energetic, vibrant red-orange has an exotic feel to it. The color name itself comes from Pantone’s Textile Cotton selection. As you would likely expect, Mecca Orange has a very large amount of red compared to both green and blue. Though it doesn’t have the cool influence of cyan, this color’s energy is tempered by a moderate K value. Mecca Orange pops against goldenrod-like yellows, and it also looks great in color palettes made primarily of quiet neutrals.

Mecca Orange
Hex #BD5745
RGB 189, 87, 69
CMYK 0, 54, 63, 26

Lava Orange
This is an especially bright, almost electric orange, but it’s uniquely different from a neon shade. Lava Orange has enough depth to balance out its brightness. It also looks especially at home in very bright color palettes. Its complementary color is just as bright as Lava Orange – it’s Vivid Cerulean. Lava Orange has more yellow than magenta, and that helps explain its dazzling brightness.

Lava Orange
Hex #F76806
RGB 247, 104, 6
CMYK 0, 58, 98, 3

Dutch Orange
Dutch Orange is a versatile, medium orange shade. Thanks to its very large amount of yellow (as compared to magenta), it’s a high-energy color that really commands attention. Dutch Orange is an ideal color to use in advertising or in logos. It also has some historical significance. Dutch Orange is also known as Holland Orange or Netherlands Orange. It was even used as one of the colors in the flag flown during the Dutch Revolt.


Dutch Orange
Hex #FF9B00
RGB 255, 155, 0
CMYK 0, 39, 100, 0

Amber
Amber certainly has a golden quality about it. But at least in the case of this color, it also has an orange glow. It’s a great color to select if you want a bright color that commands attention but isn’t quite as bright as a neon or near-neon orange. Though it may be more subdued than some orange hues, Amber still gains considerable energy from its sizable portion of yellow.

Amber
Hex #FFC600
RGB 255, 198, 0
CMYK 0, 22, 100, 0

Aesthetic Orange
Aesthetic Orange is a pleasant, peachy shade perfect for projects that need a quiet, paler color. Aesthetic Orange’s values of magenta and yellow are closer than those of most other orange variants. Its bright yet soft glow looks great alongside pastel blues, greens, and purples.

Aesthetic Orange
Hex #F4AB6A
RGB 244, 171, 106
CMYK 0, 30, 57, 4

Hot Orange
Orange is one of the most attention-grabbing colors out there. And of the orange shades, Hot Orange just might be the most electric of all. In a somewhat unusual twist, Hot Orange contains a decent amount of both green and red. The green helps give it some of its depth while its 100 CMYK value for yellow ensures that it’s plenty bright. Like many of the other very bright shades of orange, Hot Orange is ideal for use in advertising or any other applications that require an attention-getting shade.


Hot Orange
Hex #FF6E00
RGB 255, 110, 0
CMYK 0, 57, 100, 0

Glossy Orange
It’s hard to make a color look truly glossy through a screen. But Glossy Orange is a balanced color that does especially well when printed on glossy paper. It’s an energetic shade whose yellow CMYK value is more than twice that of its magenta values. However, its energy is very slightly tempered by a small amount of black.

Glossy Orange
Hex #E78400
RGB 231, 132, 0
CMYK 0, 43, 100, 9

Pure Orange
Though there are seemingly endless shades of orange out there, Pure Orange is effectively the standard for all other orange shades. Most shades have uneven CMYK values, but this one’s yellow value is exactly twice that of its magenta value. The result is a classic, middle-of-the-road orange that’s especially versatile.

Pure Orange
Hex #FF8000
RGB 255, 128, 0
CMYK 0, 50, 100, 0

Rustic Orange
Sometimes, you just need a shade of orange that has an authentically weathered look. Rustic Orange is close to the color of weathered wood that has been stained. It’s somewhat more muted than other shades of orange. It has a higher K value than most other shades, and its value for yellow is not as high. Like many other muted orange shades, Rustic Orange is a great addition to fall-inspired color palettes and designs.


Rustic Orange
Hex #D78C3D
RGB 215, 140, 61
CMYK 0, 35, 72, 16

Baby Orange
As its name suggests, Baby Orange is a soft, delicate shade of orange. It is noticeably paler than many of the orange shades mentioned here. That fact is shown in its CMYK values too. The values for both magenta and yellow are much lower than most shades. Baby Orange would be a wonderful addition to a spring-inspired color palette with other pastels.

Baby Orange
Hex #FCBE85
RGB 252, 190, 133
CMYK 0, 25, 47, 1

Irish Orange
This specific shade of orange is indicated in Irish official documents as being the official orange used on the Irish flag. But its vibrant nature makes it useful for other applications as well. Irish Orange pairs beautifully with its complementary color, the refreshing Ocean Boat Blue.

Irish Orange
Hex #F5883F 
RGB 245, 136, 63
CMYK 0, 44, 74, 4

Marmalade
If you’re familiar with the cheerful brightness of freshly-made orange marmalade, you’ll probably agree that the name of this shade is a fitting one. Marmalade is just slightly deeper in color than Irish Orange. It also contains more magenta, yellow, and black. Like similar hues, Marmalade pops against bright to medium greens.


Marmalade
Hex #D16002
RGB 209, 96, 2
CMYK 0, 54, 99, 18

Vintage Orange
Vintage-inspired colors are going through a revival, and Vintage Orange is an excellent wall color or color for other elements of home decor. It’s very close to being a neutral, so it can be worked into a wide range of color schemes. It also looks very nice as a background for darker brown text. If your project requires a color that’s essentially an orange-tinged neutral, Vintage Orange is a great option.

Vintage Orange
Hex #C9995D
RGB 201, 153, 93
CMYK 0, 24, 54, 21

Rust
Rust is an accurately named color. It is close to the color of metal that’s significantly rusted. This color is a deep orange that’s fairly close to being red. In fact, when you look at its RGB values, Rust is actually 70% red. This color looks great alongside deep green or blue jewel tones, and it’s also a great way to make a statement without being garish.

Rust
Hex #B7410E
RGB 183, 65, 14
CMYK 0, 64, 92, 28

India Saffron
Saffron is an exotic spice that adds a burst of bright orange-yellow color and memorable flavor to any dish. India Saffron does justice to the spice itself. It’s a different color than Deep Saffron. In fact, India Saffron is the exact color of orange that you see in the Indian flag. In Indian culture, this color is sometimes called kesari.


India Saffron
Hex #FF9933
RGB 255, 153, 51
CMYK 0, 40, 80, 0

Atomic Tangerine
This color has one of the most exciting names on our list. Atomic Tangerine is a gentle, rosy orange that is close to being a shade of pink. The name comes from Crayola. One of the company’s crayons by the same name is this exact color. Atomic Tangerine has more yellow than magenta, so it’s especially bright and cheerful.

Atomic Tangerine
Hex #FF9966
RGB 255, 153, 102
CMYK 0, 40, 60, 0

Red Orange (RAL)
Red Orange is redder than Burnt Orange, similar to Brick Red with just a hint more orange. It has a rust-like quality that makes it pair well with slightly muted versions of blues and greens. It offers a striking contrast when paired with its complementary color, Cyan Cornflower Blue.

Red Orange (RAL)
Hex #B6481C
RGB 182, 72, 28
CMYK 0, 60, 85, 29

Willpower Orange
Willpower Orange is a very intense shade. It looks a lot like a deeper version of the color of an orange highlighter. It has markedly more yellow than magenta. It also has an extremely high red value compared to blue or green. This shade has similar qualities to Safety Orange. It can be used as a burst of color in an otherwise neutral palette, and it works very well alongside demure grays.


Willpower Orange
Hex #FD5602
RGB 253, 86, 2
CMYK 0, 66, 99, 1

Dusty Orange
Dusty versions of colors can be excellent choices when you’re looking for a calmer, more muted version of your chosen color. Dusty Orange is an interesting shade. It’s close to being a tamer version of Atomic Tangerine. For an especially attention-grabbing palette, try pairing it with its complementary color, Picton Blue.

Dusty Orange
Hex #E27A53
RGB 226, 122, 83
CMYK 0, 46, 63, 11

Spring Orange
Spring Orange is an unusual shade. It’s not quite a standard orange and not quite a pastel. It evokes the energy of spring in a palette with softer, cool-color pastels. But if you’re going for a more summer-inspired color scheme, try pairing it with its red and yellow analogous colors. It also works well as a logo on a white background.

Spring Orange
Hex #FD963D
RGB 253, 150, 61
CMYK 0, 41, 76, 1

Greek Orange
Greek Orange is a lovely, warm orange that’s close to the color of a pumpkin. It’s striking when paired with True Blue, its complementary color. Greek Orange is dark enough to serve as an effective background for white text, but it’s also bright enough to work well as a text color on a very dark background.


Greek Orange
Hex #E06E04
RGB 224, 110, 4
CMYK 0, 51, 98, 12

Calm Orange
Most people associate orange with energy. But if your project would work better with a quieter, mellower shade, Calm Orange might just be the right choice. This soothing color is similar to that of orange sherbet, and it pairs well with ivory and other warm off-whites.

Calm Orange
Hex #FAB972
RGB 250, 185, 114
CMYK 0, 26, 54, 2

Faded Orange
Faded Orange is somewhat similar to Dusty Orange. It has a little bit of a rosy quality about it, but it also comes close to being a neutral. Part of its calmer energy comes from its relatively low values for yellow and magenta.

Faded Orange
Hex #CD946A
RGB 205, 148, 106
CMYK 0, 28, 48, 20

Luminous Bright Orange (RAL)
This cheery, yellowish orange is part of the RAL Classic list. RAL is a color matching system (like Pantone) that is popular in Europe. Luminous Bright Orange carries a warm energy that pops against bright blues.

Luminous Bright Orange (RAL)
Hex #FFB700
RGB 255, 183, 0
CMYK 0, 28, 100, 0

////////////// End of orange

///////////////////////////////////// Yellow

Sunshine Yellow
Sunshine yellow is a bright, medium shade of yellow named after the light from the sun. It is often thought of as a cheerful, warm color.

Sunshine Yellow
Hex #FFFD37
RGB 255, 253, 55
CMYK 0, 1, 78, 0

Canary Yellow
Canary yellow is a bright shade of yellow, somewhat lighter in tone than the standard bright yellow. It is named after the bright plumage of the canary bird.

Canary Yellow
Hex #FFEF00
RGB 255, 239, 0
CMYK 0, 6, 100, 0

Lemon Yellow
Lemon yellow is a light to medium shade of yellow similar in shade to the color of the rind of a lemon fruit.

Lemon Yellow
Hex #FDFF00
RGB 253, 255, 0
CMYK 1, 0, 100, 0


Goldenrod
Goldenrod is a deep, earthy, warm yellow that is named after the wildflower of the same name. It is similar in shade to mustard.

Goldenrod
Hex #DAA520
RGB 218, 165, 32
CMYK 0, 24, 85, 15

Saffron
Saffron is a medium golden yellow to yellowish-orange hue similar in shade to the flowers of the saffron plant.

Saffron
Hex #F4C430
RGB 244, 196, 48
CMYK 0, 20, 80, 4

Citrine
Citrine is a golden yellow shade with an almost chemical-like hint of green. It has similarities to the warm tones of goldenrod and the bright tones of lemon.

Citrine
Hex #E4D00A
RGB 228, 208, 10
CMYK 0, 9, 96, 11

Trombone
Trombone is a brassy, dull gold or yellowish brown shade reminiscent of the color of the metal a trombone is made from. 


Trombone
Hex #D2B55B
RGB 210, 181, 91
CMYK 0, 14, 57, 18

Light Yellow
Light yellow is a pale, but not quite pastel, shade of yellow. It has the warmth of the color called banana, but with more saturation.

Light Yellow
Hex #FFFFE0
RGB 255, 255, 224
CMYK 0, 0, 12, 0

Lemon Chiffon
Lemon chiffon is a light, airy yellow shade slightly warmer in tone than light yellow. It is reminiscent of the color of lemon chiffon cake or that of spun sugar.

Lemon Chiffon
Hex #FFFACD
RGB 255, 250, 205
CMYK 0, 2, 20, 0

Flax
Flax is a dull, muted earthy yellow with similarities to tan and ecru. It is named after the dried stems of the flax plant, and it is often used to refer to hair of a light golden color.

Flax
Hex #EEDC82
RGB 238, 220, 130
CMYK 0, 8, 45, 7


Light Goldenrod
Light goldenrod is a very pale version of the goldenrod shade, but with a more pinkish undertone. It can be compared to a pale ecru.

Light Goldenrod
Hex #FAFAD2
RGB 250, 250, 210
CMYK 0, 0, 16, 2

Pale Goldenrod
Pale goldenrod differs from light goldenrod in that it has a more brownish or green undertone. As with light goldenrod, it is very pale in comparison to the goldenrod flower.

Pale Goldenrod
Hex #EEE8AA
RGB 238, 232, 170
CMYK 0, 3, 29, 7

Light Khaki
Light khaki or khaki tan is a brownish beige yellow that is often used to describe the color and style of a particular type of trousers.

Light Khaki
Hex #F0E68C
RGB 240, 230, 140
CMYK 0, 4, 42, 6

Clover Lime
Clover lime is a light, buttery yellow shade that was created by the Crayola crayon company in 1903.


Clover Lime
Hex #FCE883
RGB 252, 232, 131
CMYK 0, 8, 48, 1

Xanthic
Xanthic is a bright, acidic yellow with slight brown undertones. It is named after the acidic compounds Xanthine and Xanthate.

Xanthic
Hex #EEED09
RGB 238, 237, 9
CMYK 0, 0, 96, 7

Royal Yellow
First referred to in the English language by this name in 1548, this color was once used to describe the clothing of Chinese royalty. It is a warm and light, somewhat golden brown shade of yellow.

Royal Yellow
Hex #FADA5E
RGB 250, 218, 94
CMYK 0, 13, 62, 2

Cream
Cream refers to a yellow shade that is pale but warm, somewhat like the color of butter but closer to an off-white. It is a little more yellow than the color of actual dairy cream.

Cream
Hex #FFFFCC
RGB 255, 255, 204
CMYK 0, 0, 20, 0


Gold
Gold refers to a warm, brownish or orangey shade of yellow named after the mineral element gold.

Gold
Hex #FFD700
RGB 255, 215, 0
CMYK 0, 16, 100, 0

Safety Yellow
Safety yellow refers to the shade of yellow seen on warning signs, hazard signs and school busses. The shade was chosen because it is said to be one of the most noticeable colors the human mind detects rapidly. It is a dark golden or mustard type shade.

Safety Yellow
Hex #EED202
RGB 238, 210, 2
CMYK 0, 12, 99, 7

Laguna
Laguna is a warm, creamy medium shade of yellow with similar tones to banana, but darker in hue.

Laguna
Hex #F8E473
RGB 248, 228, 115
CMYK 0, 8, 54, 3

Hunyadi Yellow
Hunyadi yellow is a deep golden brown yellow named after John Hunyadi, a 15th century Hungarian military officer. This yellow shade is found in the Hunyadi family coat of arms.


Hunyadi Yellow
Hex #E8AC41
RGB 232, 172, 65
CMYK 0, 26, 72, 9

Bright Yellow
Bright yellow is a vibrant, nearly neon shade of medium yellow. It is similar in shade to buttercup flowers.

Bright Yellow
Hex #FFFD01
RGB 255, 253, 1
CMYK 0, 1, 100, 0

Greenish Yellow
Greenish yellow is a light shade of yellow with brownish green to tan undertones. This color can be found on the 20 rupee denomination of Indian banknotes.

Greenish Yellow
Hex #EEEA62
RGB 238, 234, 98
CMYK 0, 2, 59, 7

Neon Yellow
Neon yellow is a bright yellow shade that can be compared to the color of a yellow highlighter. Sometimes it has a slightly greenish tint.

Neon Yellow
Hex #CFFF04 
RGB 207, 255, 4
CMYK 19, 0, 98, 0

Dark Yellow
Dark yellow refers to a golden to brownish yellow shade that is darker in hue than mustard but brighter than gold.

Dark Yellow
Hex #D5B60A
RGB 213, 182, 10
CMYK 0, 15, 95, 16

Sand
Sand is a light tannish yellow shade that resembles the color of sand on a beach. It can be compared to a warm ecru or a brownish shade of pale yellow.

Sand
Hex #E2CA76
RGB 226, 202, 118
CMYK 0, 11, 48, 11

Sunflower
Sunflower is a warm medium to dark yellow shade that is similar in color to the petals of the sunflower.

Sunflower
Hex #FFDA03
RGB 255, 218, 3
CMYK 0, 15, 99, 0

Bumblebee
Bumblebee is a warm, somewhat golden shade of medium yellow. This color is named after the yellow found on the bumblebee insect’s body.

Bumblebee
Hex #FCE205
RGB 252, 226, 5
CMYK 0, 10, 98, 1

Butter
Butter is a term used to describe a pale shade of yellow that strongly resembles the shade of the dairy product butter.

Butter
Hex #FFFD74
RGB 255, 253, 116
CMYK 0, 1, 55, 0

Yellow Tan
Yellow tan is light tannish yellow shade that is somewhat paler in hue than sand but darker than butter.

Yellow Tan
Hex #FFE36E
RGB 255, 227, 110
CMYK 0, 11, 57, 0

Cyber Yellow
Cyber yellow refers to a shade of medium to dark yellow that is used for warning and hazard signs. It is similar in color to safety yellow.

Cyber Yellow
Hex #FFD300
RGB 255, 211, 0
CMYK 0, 17, 100, 0

Banana
Banana, as the name suggests, is a pale to medium shade of yellow similar in color to the peel of the banana fruit.

Banana
Hex #FFE135
RGB 255, 225, 53
CMYK 0, 12, 79, 0

Tuscany
Tuscany refers to a warm, medium shade of yellow that is similar in hue to honey, but slightly lighter. It can also be compared to a light goldenrod.

Tuscany
Hex #FCD12A
RGB 252, 209, 42
CMYK 0, 17, 83, 1

Honey
Honey refers to a shade of warm, golden to medium yellow. This color gets its name from the honey syrup created by bees, but the color is more yellow in hue than natural honey.

Honey
Hex #FFC30B
RGB 255, 195, 11
CMYK 0, 24, 96, 0

Dijon
Dijon is a shade of dark brownish yellow that resembles Dijon mustard. It is darker in hue than mustard and has somewhat greenish undertones.

Dijon
Hex #C49102
RGB 196, 145, 2
CMYK 0, 26, 99, 23

Amber
Amber refers to a shade of warm, golden brown to orangey yellow that gets its name from the fossilized tree resin of the same name.

Amber
Hex #FFBF00
RGB 255, 191, 0
CMYK 0, 25, 100, 0

Beige
Beige is a light brownish shade of yellow that can be compared to pale sand. It is also similar in color to parchment.

Beige
Hex #F5F5DC
RGB 245, 245, 220
CMYK 0, 0, 10, 4

Mustard
Mustard is a medium to dark shade of yellow similar in hue to the condiment of the same name, although it is usually depicted as slightly lighter in tone than actual mustard.

Mustard
Hex #FEDC56
RGB 254, 220, 86
CMYK 0, 13, 66, 0

Maximum Yellow
Maximum yellow is a medium shade of bright yellow created by the Crayola company. It is very similar to bright yellow.

Maximum Yellow
Hex #FAFA37
RGB 250, 250, 55
CMYK 0, 0, 78, 2

Mellow Yellow
Mellow yellow refers to a light, buttery yellow with a somewhat tan hue. It is similar in color to royal yellow and laguna.

Mellow Yellow
Hex #F8DE7E
RGB 248, 222, 126
CMYK 0, 10, 49, 3

Unmellow Yellow
Unmellow yellow is a bright, nearly florescent yellow shade created by the Crayola crayon company. It is brighter in tone than lemon yellow. Crayola has another color called laser lemon which is identical to this one.

Unmellow Yellow
Hex #FFFF66
RGB 255, 255, 102
CMYK 0, 0, 60, 0

Lemon Curry
Lemon curry is a dark brownish yellow created by the Pantone Textile Paper company. It is similar in color to some curry sauces used in Indian cuisine.

Lemon Curry
Hex #CCA01D
RGB 204, 160, 29
CMYK 0, 22, 86, 20

Moccasin
Moccasin is a light peachy yellow shade that can be compared to papaya whip or peach but with more of a tan undertone.

Moccasin
Hex #FFE4B5
RGB 255, 228, 181
CMYK 0, 11, 29, 0

Orange Yellow
Orange yellow refers to a shade of dark yellow that borders on orange. Most people would probably say orange if asked to describe this color.

Orange Yellow
Hex #FFAD01
RGB 255, 173, 1
CMYK 0, 32, 100, 0

Pastel Yellow
Pastel yellow is a very light shade of yellow. It is often used for gender-neutral baby gifts and nursery décor. It can be compared to a slightly lighter shade of butter.

Pastel Yellow
Hex #FFFE71
RGB 255, 254, 113
CMYK 0, 0, 56, 0

Taxi Cab Yellow
Taxi Cab Yellow is a robust, golden-tinged yellow that’s reminiscent of the color of a taxi cab. It’s bright and sunny without being overpowering, and it looks especially nice alongside bright blue shades. Its slight hint of orange gives it a burst of energy and confidence.

Taxi Cab Yellow
Hex #FDB813
RGB 253, 184, 19
CMYK 0, 27, 92, 1 

Aureolin
Aureolin is a stunningly bright yellow that looks a lot like the color of a canary. But despite its brightness, aureolin isn’t hard on the eyes. It has just a hint of warmth. It’s been around for a while, too. As a pigment, it was first made in 1848. Because the physical pigment is made from potassium cobaltinitrite, aureolin is sometimes referred to as “cobalt yellow.”

Aureolin
Hex #FDEE00
RGB 253, 238, 0
CMYK 0, 6, 100, 1

Electric Yellow
As the name suggests, this is a powerfully striking color. Interestingly enough, it’s nearly identical to the color of the Electric Yellow African Cichlid, a fish native to East Africa. Thanks to its cheerful, bright color, the Electric Yellow African Cichlid is a very popular aquarium fish for hobbyists.

Electric Yellow
Hex #FFFF33
RGB 255, 255, 51
CMYK 0, 0, 80, 0

Chartreuse (traditional)
Chartreuse usually describes a greenish color (the color “Chartreuse (web)” is more green). However, this interesting color is more traditional yellow with the barest hint of green. This gives it an intriguing quality that makes it ideal for use in advertising or in any application where you need to draw attention.

Chartreuse (traditional)
Hex #DFFF00
RGB 223, 255, 0
CMYK 13, 0, 100, 0

Titanium Yellow
Most of us don’t often think of yellow when we think of titanium. But this color is named after a yellow pigment of the same name. The pigment has an extremely high melting point of over 1000 degrees Celsius. This color is bold yet cheerful.

Titanium Yellow
Hex #EEE600
RGB 238, 230, 0
CMYK 0, 3, 100, 7

Mikado Yellow
At first glance, this noble shade looks slightly more orange than yellow. It’s used in the flags of two countries: Kazakhstan and Colombia. The Lincoln auto company used it as a vehicle color for a time as well. Thanks to its deep, almost mango-like color, Mikado Yellow is a good choice if you need a shade of yellow that stands out on a white background.

Mikado Yellow
Hex #FFC40C
RGB 255, 196, 12
CMYK 0, 23, 95, 0

Fluorescent Yellow
If you need a high-energy color that splits the difference between yellow and green, this one is an excellent choice. Fluorescent Yellow has a distinctly modern edge, and it looks especially striking against a black or dark blue background. It’s ideal if you like the look of yellow but want a slightly cooler color.

Fluorescent Yellow
Hex #CCFF00
RGB 204, 255, 0
CMYK 20, 0, 100, 0

Arylide Yellow
This muted, almost tan yellow gets its name from a collection of organic compounds used for pigments. These pigments are commonly found in oil paints, watercolors, and acrylics. Arylide Yellow is also sometimes known as monoazo yellow or Hansa yellow.

Arylide Yellow
Hex #E9D66B
RGB 233, 214, 107
CMYK 0, 8, 54, 9

Indian Yellow
Indian Yellow is one of the most ancient yellow shades in the world. As a pigment, it was first developed in India in the 15th century, where it was used in art and to dye clothing. It’s an unusual shade that’s a bit reminiscent of red clay, and it looks especially beautiful alongside pale periwinkle blue.

Indian Yellow
Hex #E3A857
RGB 227, 168, 87
CMYK 0, 26, 62, 11

Durian Yellow
This slightly-gold yellow is named after the durian, a fruit native to Southeast Asia. Durian has yellow flesh and is nutritious, but it’s notorious for having a pungent, bad odor. This color, though, is warm and slightly golden without crossing over into olive or bronze territory.

Durian Yellow
Hex #E1BD27
RGB 225, 189, 39
CMYK 0, 16, 83, 12

Minion Yellow
If you’re wondering whether Minion Yellow was named after the TV characters, you’re right. This cheerful yellow shade is perfect if you like a bright yellow that’s still slightly muted. This color’s warmth makes it a good choice for wall color if you’re looking for something different.

Minion Yellow
Hex #F5E050
RGB 245, 224, 80
CMYK 0, 9, 67, 4

Selective Yellow
You might be wondering where this interesting color got its name. It’s named after the color used for car headlamps and fog lamps. The “selective” in the name means that the lamps only let certain wavelengths of light through. The color itself is mango-like and cheerful, and it would be especially at home in tropical-inspired decor.

Selective Yellow
Hex #FFBA00
RGB 255, 186, 0
CMYK 0, 27, 100, 0

Laser Lemon
Some yellow shades have fun and unusual names, and this is one of them. Laser Lemon is one of the more energetic shades of yellow out there. If you want to draw the attention of your audience, this color (especially if it’s paired with black or a similarly dark color) is a great choice.

Laser Lemon
Hex #FEFE22
RGB 254, 254, 34
CMYK 0, 0, 87, 0

Munsell Yellow
This yellow is named after Albert H. Munsell, founder of Munsell color theory. This theory classifies colors based on hue, value, and chroma. This particular yellow shade is a bit mustard-like, which makes it somewhat muted. It’s a deep yellow that works well when adding a pop of color to a neutral color scheme.

Munsell Yellow
Hex #EFCC00
RGB 239, 204, 0
CMYK 0, 15, 100, 6

Yellow Rose
Appropriately, this especially bright yellow is true to the color of yellow roses. Yellow roses are traditionally believed to symbolize friendship and joy, and this color seems to do that well. Though it may be too bright for some tastes, this sunshine-inspired color is an excellent option if you need to command attention. It’s bright without moving into neon territory, which many artists and designers will appreciate.

Yellow Rose
Hex #FFF000
RGB 255, 240, 0
CMYK 0, 6, 100, 0

Very Pale Yellow
This mild color may not be interestingly named, but its calming hue is easy on the eyes. In particular, Very Pale Yellow makes a great wall color if you like subtle warmth. It sits somewhere between cream and pastel yellow in terms of color.

Very Pale Yellow
Hex #FFFFBF
RGB 255, 255, 191
CMYK 0, 0, 25, 0

Earth Yellow
When you first look at Earth Yellow, you might not consider it to be a yellow at all. Earth Yellow is similar to Indian Yellow, but it’s a bit more brown. If you need an earthy neutral that’s brighter than your traditional brown, Earth Yellow is a great place to look.

Earth Yellow
Hex #E1A95F
RGB 225, 169, 95
CMYK 0, 25, 58, 12

Yellow (Pantone)
Yellow (Pantone) is a shade of yellow named by the Pantone company. Pantone uses a color-matching system to ensure continuity across print and online media. This yellow color is warm and sunny and it looks especially nice when paired with turquoise.

Yellow (Pantone)
Hex #FEDF00
RGB 254, 223, 0
CMYK 0, 12, 100, 0

Tangerine Yellow
Most of us think of tangerines as being orange as opposed to yellow, but Tangerine Yellow captures the look of a pale tangerine. It looks almost more orange than yellow, and it works well in warmer color schemes without looking overly hot. If you’re designing something especially energetic, it looks nice against a bright lime green.

Tangerine Yellow
Hex #FFCC00
RGB 255, 204, 0
CMYK 0, 20, 100, 0

Bronze Yellow
It can be tough to capture a metallic color, but Bronze Yellow does it fairly well. It has more of an olive tone than you might expect. If you’re creating a neutral color scheme but want to stray away from the expected choices, Bronze Yellow offers a beautiful yet unconventional starting point.

Bronze Yellow
Hex #737000
RGB 115, 112, 0
CMYK 0, 3, 100, 55

Psychedelic Yellow
Psychedelic Yellow isn’t quite as wild as you would expect it to be given the name. It’s actually a very nice middle-of-the-road yellow. It’s bright without being too bright, soft without being too soft. It’s ideal if you need a background that’s bright but not bright enough to hurt your eyes.

Psychedelic Yellow
Hex #FFF53D
RGB 255, 245, 61
CMYK 0, 4, 76, 0

Maize Yellow (RAL)
This lovely earth-tone yellow can be found on the RAL Classic list of colors. RAL is a popular European color-matching company similar to Pantone. Maize Yellow looks especially nice in autumn-inspired applications.

Maize Yellow (RAL)
Hex #DB9100
RGB 219, 145, 0
CMYK 0, 34, 100, 14

Muted Yellow
This appropriately-named yellow color looks more khaki than yellow. At first glance, you might want to call it a light tan. Muted Yellow is another great color to choose if you’re working with a neutral color scheme but want to make it just slightly warm.

Muted Yellow
Hex #E0D268
RGB 224, 210, 104
CMYK 0, 6, 54, 12

Sulfur Yellow
This yellow, named after the element, is a great yellow if you want something that’s just slightly muted. It has the slightest greenish touch, and it looks great when placed against its complementary color, a bright blue called Palatinate Blue.

Sulfur Yellow
Hex #E8DE35
RGB 232, 222, 53
CMYK 0, 4, 77, 9

Yellow Jasmine
This color is named after the yellowish tint of the jasmine flower. However, it has more of a hint of brown than what you typically see on the flower. Yellow Jasmine is almost an earth tone, and it does well in autumnal color schemes.

Yellow Jasmine
Hex #CEB00D
RGB 206, 176, 13
CMYK 0, 15, 94, 19

Dusty Yellow
This yellow shade certainly doesn’t have the most exciting name. However, when it comes to neutrals, it’s an excellent choice. It comes from Pantone’s Textile Cotton eXtended color list, and it is a textile-like color. For a more subdued room, it would make an excellent wall color.

Dusty Yellow
Hex #D4CC9A
RGB 212, 204, 154
CMYK 0, 4, 27, 17

Yolk Yellow (Pantone)
Despite the name, this color is a little more brown than you’d typically notice on an egg yolk. However, it’s a warm neutral that works well in a variety of situations. This one is also from the Textile Cotton eXtended list from Pantone.

Yolk Yellow (Pantone)
Hex #E2B051
RGB 226, 176, 81
CMYK 0, 22, 64, 11

Light Chrome Yellow
This pleasant, orangish yellow is a bit like the yellow you would see on a #2 pencil. For a slightly pale color, it’s a very high-energy one, and it really pops with its complementary color, Ultramarine Blue. Light Chrome Yellow stands out against a black or dark blue background, and it looks especially nice when used in patterns.

Light Chrome Yellow
Hex #FFCA37
RGB 255, 202, 55
CMYK 0, 21, 78, 0

Cadmium Yellow Lemon
Cadmium Yellow Lemon is one of the most incredibly bright yellows on the list. You combine the extraordinary bright yellow of Cadmium with a refreshing burst of Lemon Yellow. When evaluated on the HSV/HSB scale, Cadmium Yellow Lemon has a brightness value of 100%. A color this bright won’t suit every situation, but it’s great when you’re working on a high-energy project.

Cadmium Yellow Lemon
Hex #FFF23E
RGB 255, 242, 62
CMYK 0, 5, 76, 0

Vibrant Yellow
Colors can have a significant impact on mood, and Vibrant Yellow is certainly a mood booster. This sunny color is reminiscent of a sunflower, but it’s soft enough that it isn’t overly energizing, either. It looks especially stunning when used along with the other members of its square palette.

Vibrant Yellow
Hex #FFDA29
RGB 255, 218, 41
CMYK 0, 15, 84, 0

Yellow CMYK
You likely know that CMYK stands for cyan/magenta/yellow/key (where key is black). This yellow is the exact value of the yellow in the CMYK standard. As you see below, its CMYK value for yellow is 100%, while its values for cyan, magenta, and key are all zero. If you need a bright, true yellow for a project, Yellow CMYK is a great choice.

Yellow CMYK
Hex #FFFF00
RGB 255, 255, 0
CMYK 0, 0, 100, 0

Fire Yellow
We usually associate yellow with summer, but this bold and energizing shade has a distinctive autumnal aura. If you want to conjure up the feeling of sitting by a campfire in early fall, Fire Yellow can help you do so.

Fire Yellow
Hex #FEDE17
RGB 254, 222, 23
CMYK 0, 13, 91, 0

Buff Yellow
Buff yellow might not be the most dazzlingly bright yellow shade, but its classic, timeless look means that it’s still fairly popular. Its complementary color is Cornflower Blue, and together, they create an airy, calming sense. When used alone, Buff Yellow makes a great wall color. Or if you want a neutral webpage background that still manages to be energizing, it’s a good choice.

Buff Yellow
Hex #F1BF70 
RGB 241, 191, 112
CMYK 0, 21, 54, 5

Yellow Cream
If you’re in search of a soothing neutral, Yellow Cream just might be your answer. This is roughly the color of homemade vanilla ice cream or custard. It’s distinct from Cream in that it’s more yellow than white. This is another color from the Pantone Textile Cotton eXtended list.

Yellow Cream
Hex #EFDC75
RGB 239, 220, 117
CMYK 0, 8, 51, 6

Empire Yellow
This commanding color is designed to be a standout. Its dictionary definition states that Empire Yellow can be a “light to brilliant” color, and this example sits right in the middle. Though it’s similar to several other yellow colors, Empire Yellow has an additional warmth that many people will find welcoming.

Empire Yellow
Hex #F7D000
RGB 247, 208, 0
CMYK 0, 16, 100, 3

Zinc Yellow (RAL)
Zinc Yellow is named after a pigment that’s made using zinc oxide. This bright pigment is often used in printing. And while it was once used in oil paints, its tendency to fade to brown means that it is rarely (if ever) used in artistic work.

Zinc Yellow (RAL)
Hex #F2CB2E
RGB 242, 203, 46
CMYK 0, 16, 81, 5

Signal Yellow
This might seem like an unusual color name, but Signal Yellow does have some popularity. In the 1960s and 1970s, Porsche used Signal Yellow finishes on some of their 911 models. Not surprisingly, Signal Yellow is very close to the color you see on traffic lights.

Signal Yellow
Hex #F2A900
RGB 242, 169, 0
CMYK 0, 30, 100, 5

Matte Yellow
This color is somewhat interestingly named. After all, without added shine, all colors tend to look matte on a computer screen. Matte Yellow is a subdued hue, and as a pigment, it’s commonly sold in powder form. If you paint with Matte Yellow, you can mix it with other colors to deepen them slightly.

Matte Yellow
Hex #EDD94C
RGB 237, 217, 76
CMYK 0, 8, 68, 7

Aesthetic Yellow
This color certainly lives up to its name. Aesthetic Yellow is a perfectly balanced yellow shade that’s just a touch more demure than some of yellow’s louder hues. If tinted to become lighter, Aesthetic Yellow has a soft look that’s reminiscent of peaches and cream.

Aesthetic Yellow
Hex #EFD033
RGB 239, 208, 51
CMYK 0, 13, 79, 6

Rustic Yellow
Brighter shades of yellow are often associated with newness and energy. But more muted, earth-tone shades can sometimes help create the illusion of age. As the name suggests, if you’re going for a rustic look and appeal for your project, Rustic Yellow’s rich, deep color is sure to add something significant.

Rustic Yellow
Hex #E2C400
RGB 226, 196, 0
CMYK 0, 13, 100, 11

Pale Yellow
This pale, creamy yellow has a soothing aura about it. It’s the slightly less-pale relative of Very Pale Yellow. Its soft, neutral look makes it ideal for tranquil website backdrops or for the wall color in a quiet home.

Pale Yellow
Hex #FFFFA7
RGB 255, 255, 167
CMYK 0, 0, 35, 0

Colza Yellow
Colza Yellow is a beautiful, jewel-toned yellow with orangish undertones. It gets its name from the flower of the colza plant, which is sometimes harvested to produce an oil that’s used in manufacturing. The colza flowers can vary in color from a soft pastel yellow to a deep, rich tone like this color.

Colza Yellow
Hex #EEB700
RGB 238, 183, 0
CMYK 0, 23, 100, 7

Transparent Yellow
Many of the yellow shades we’ve covered so far are bright, energetic colors. But for when you need a barely-there shade with just a hint of yellow, Transparent Yellow offers a solution. The soft, almost pinkish color makes it a great alternative to white when it comes to selecting a background.

Transparent Yellow
Hex #F4ECC2
RGB 244, 236, 194
CMYK 0, 3, 20, 4

Blazing Yellow
One of those bright, energetic yellows mentioned above is Blazing Yellow. Appropriately, this fiery hue has a little bit of an orange undertone. If you need a splash of color on an advertisement or other project, Blazing Yellow can certainly deliver.

Blazing Yellow
Hex #FEE715
RGB 254, 231, 21
CMYK 0, 9, 92, 0

Tender Yellow
The word “tender” might seem odd when used as part of a color name, but in the case of Tender Yellow, it seems apt. This soft, gentle color is a perfect example of how a very lightened yellow can make a wonderfully understated neutral.

Tender Yellow
Hex #EDEEB7
RGB 237, 238, 183
CMYK 0, 0, 23, 7

Pale Lime Yellow
The name of this color can be a little confusing. After all, limes are green and not yellow. But Pale Lime Yellow might better be described as a lemon-lime color. The lime seems to overpower the yellow slightly, but the yellow adds in just enough warmth.

Pale Lime Yellow
Hex #DFE69F
RGB 223, 230, 159
CMYK 3, 0, 31, 10

Vintage Yellow
If you’re looking for a color to conjure up the spirit of the yellowed pages of old parchment, Vintage Yellow just might be what you’re looking for. The understated elegance of this unusual shade makes it a good choice for any project that needs an extra air of sophistication.

Vintage Yellow
Hex #CBA92B
RGB 203, 169, 43
CMYK 0, 17, 79, 20

Spectrum Yellow
You already know that yellow appears to be the brightest of the colors on the spectrum of light. And Spectrum Yellow is certainly bright. It’s sunny yet rich, making it one of the more powerful examples of a yellow shade on the list.

Spectrum Yellow
Hex #FCE517
RGB 252, 229, 23
CMYK 0, 9, 91, 1

Retro Yellow
Take a trip back in time with this warm yet understated yellow. Retro Yellow is a great background color, and it’s a warmer alternative to white in just about any project.

Retro Yellow
Hex #F0E27B
RGB 240, 226, 123
CMYK 0, 6, 49, 6

Old Yellow
This color may have a somewhat dull name, but it’s a soft neutral that’s reminiscent of coffee. It’s similar to Vintage Yellow, but lighter.

Old Yellow
Hex #C8AF55
RGB 200, 175, 85
CMYK 0, 12, 58, 22

Chinese Yellow
This color is a cheerfully light yellow-orange. It’s similar in color to Mandarin orange slices. If you need a bright color with a modern edge, Chinese Yellow is a great choice.

Chinese Yellow
Hex #FFB200
RGB 255, 178, 0
CMYK 0, 30, 100, 0

Spanish Yellow
Appropriately, Spanish Yellow is roughly the same yellow color of homes made in the traditional Spanish architectural style. It’s warm but not overly so, but it isn’t quite as deep as most earth tones.

Spanish Yellow
Hex #F9D73D
RGB 249, 215, 61
CMYK 0, 14, 76, 2

Refresh Yellow
Yellow can certainly be a refreshing color. Think of a glass of lemonade on a hot day. Refresh Yellow isn’t quite the same color as lemonade, but its light nature can refresh just about any project.

Refresh Yellow
Hex #FFE992
RGB 255, 233, 146
CMYK 0, 9, 43, 0

Sun Yellow (RAL)
This yellow is a bit more orange than many depictions of the sun. But its vibrancy has a similar effect. Sun Yellow (RAL) can infuse energy into whatever you’re working on.

Sun Yellow (RAL)
Hex #EA9300
RGB 234, 147, 0
CMYK 0, 37, 100, 8

Baby Yellow
You’ve heard of baby pink and baby blue. This shade of yellow follows the same concept. Its washed-out glow communicates a sense of quiet joy.

Baby Yellow
Hex #FCEF91
RGB 252, 239, 145
CMYK 0, 5, 42, 1

Dahlia Yellow (RAL)
This color is similar to Chinese Yellow. It’s named after the dahlia flower, a bright bloom that comes in many different colors.

Dahlia Yellow (RAL)
Hex #F39B1B 
RGB 243, 155, 27
CMYK 0, 36, 89, 5

Broom Yellow
This is another color from the RAL Classic color list. Though it has an unusual name, the color does approximately match the bristles on an old broom. It’s also sometimes called Ginster Yellow.

Broom Yellow
Hex #DBA400
RGB 219, 164, 0
CMYK 0, 25, 100, 14

Camouflage Yellow
This is another yellow shade that leans a little more toward brown. However, it is very similar to the yellowish patches found on camo gear. It’s a calm neutral that goes well with a pop of bright color.

Camouflage Yellow
Hex #978942
RGB 151, 137, 66
CMYK 0, 9, 56, 41

Trust Yellow
This yellow shade is extremely bright and eye-catching. It works well in a colorful design scheme with other near-neon colors, but it can also pop against a neutral backdrop.

Trust Yellow
Hex #EEBE15
RGB 238, 190, 21
CMYK 0, 20, 91, 7

Warm Yellow
This is another example of a pale yellow that looks more like a cream color. Warm Yellow is an especially good color for stationery or cards.

Warm Yellow
Hex #F4E98C
RGB 244, 233, 140
CMYK 0, 5, 43, 4

Vivid Yellow
Vivid Yellow is a hotter shade of yellow than most. As you can see below, the presence of red/magenta helps make it especially assertive.

Vivid Yellow
Hex #FFE302
RGB 255, 227, 2
CMYK 0, 11, 99, 0

Turmeric
If you enjoy cooking, this one is probably familiar. It’s just about exactly the color of turmeric, the brightly-colored spice that’s been shown to have anti-inflammatory properties.

Turmeric
Hex #F0CA28
RGB 240, 202, 40
CMYK 0, 16, 83, 6

Sunglow
It’s no surprise that, in a list of shades of the color yellow, you’ll run into several mentions of the sun. But Sunglow is an especially captivating color. It takes after the falling golden light at the end of the day.

Sunglow
Hex #FFCC33
RGB 255, 204, 51
CMYK 0, 20, 80, 0

Light Saffron
As a spice, saffron brings both gold color and bold flavor to dishes. And while the full color of saffron may be too much for some projects, Light Saffron lets you enjoy the color in a more muted way. This color is perfect for rooms that need to project an airy sense of openness.

Light Saffron
Hex #FFE797
RGB 255, 231, 151
CMYK 0, 9, 41, 0

Radioactive
Radioactivity signs are designed to get your attention. And as a shade of yellow, Radioactive does just that. Whether you’re creating a banner ad or selecting the colors for a new brand of activewear, Radioactive is ideal for drawing the eye.

Radioactive
Hex #FAE500
RGB 250, 229, 0
CMYK 0, 8, 100, 2

Golden Poppy
If you need a shade of yellow that captures the spirit of hope and joy, this one is a good choice. It’s named after the golden poppy or California poppy, the flower that blooms and covers California hillsides each year. Its sunny yellow-orange color stays true to the flower itself, and Golden Poppy is ready to add carefree spirit to any space.

Golden Poppy
Hex #FCC200
RGB 252, 194, 0
CMYK 0, 23, 100, 1

Real Gold
Though it isn’t metallic, Real Gold can still carry a regal sense to any project you’re working on. This color is primarily yellow, but a hint of orange gives it just enough strength. It looks especially nice alongside similarly muted tones.

Real Gold
Hex #E2BF36
RGB 226, 191, 54
CMYK 0, 15, 76, 11

Glossy Gold
Glossy Gold is a truly intriguing shade. It doesn’t have the same concentration of yellow that you typically find in colors with “gold” in the name, but it does look like light yellow gold. Nonetheless, Glossy Gold is a soft orangeish-yellow with diverse applications.

Glossy Gold
Hex #FAE481
RGB 250, 228, 129
CMYK 0, 9, 48, 2

Snapchat Yellow
Snapchat Yellow has already proven itself to be successful when it comes to marketing. People across the world easily recognize the dizzyingly bright yellow background with the floating white ghost. Thanks to its extremely bright color, Snapchat Yellow looks great when it’s placed next to a contrasting color. Try it against black or a deep blue. If you need something similarly loud, Snapchat Yellow may be right for the job.

Snapchat Yellow
Hex #FFFC00
RGB 255, 252, 0
CMYK 0, 1, 100, 0

Deep Chrome Yellow (Ferrario)
This color is a beautifully unique shade that seems to sit right between yellow and orange. It’s been included on oil paint color lists by Ferrario 1919. This is an established Italian manufacturer of paint for artists.

Deep Chrome Yellow (Ferrario)
Hex #FFB045
RGB 255, 176, 69
CMYK 0, 31, 73, 0

Melon Yellow
It may sound a bit like Mellow Yellow, but Melon Yellow is an entirely different color. And of all the yellow shades, it is one of the more orange ones. The color resembles the inside of a very ripe cantaloupe, so Melon Yellow may well be the next refreshing color for your project.

Melon Yellow
Hex #FF9C00
RGB 255, 156, 0
CMYK 0, 39, 100, 0

Bright Canary Yellow
Distinct from Canary Yellow, Bright Canary Yellow is designed to evoke the image of a deep yellow canary. It’s a good one to use if you want a high-energy, attractive yellow that doesn’t hurt your eyes to look at.

Bright Canary Yellow
Hex #FFE41E
RGB 255, 228, 30
CMYK 0, 11, 88, 0

Deep Napoli Yellow
This color comes from the Ferrario 1919 list of colors. It’s based on Naples Yellow, one of the earliest pigments used to create paint. The pigment varies between reddish yellow (as you can see with Deep Napoli Yellow) and a simple pale yellow. This color has a delicate quality that helps it work well with both pastels and neutrals.

Deep Napoli Yellow
Hex #FFCF99
RGB 255, 207, 153
CMYK 0, 19, 40, 0

Radiant Yellow
Many (maybe even most) shades of yellow are radiant, but Radiant Yellow is especially so. It’s somewhat close in color to Dahlia Yellow, and it also resembles a flower. Radiant Yellow looks a lot like the petals of a blooming Gerbera daisy.

Radiant Yellow
Hex #FC9E21
RGB 252, 158, 33
CMYK 0, 37, 87, 1

Daffodil Yellow
Daffodils are a near-universal reminder of spring (along with tulips). They come in a few different shades of yellow, and Daffodil Yellow aptly captures the shade of the most colorful daffodils out there. If you need to add something cheerful to a design or project, Daffodil Yellow is worth considering.

Daffodil Yellow
Hex #E28D00
RGB 226, 141, 0
CMYK 0, 38, 100, 11

Mineral Yellow
It’s hard to tell which specific mineral this shade of yellow is named after, but it’s tinged with an earthy orangeness that gives it a rustic look. If you like earth-tone neutrals, Mineral Yellow is a color worth considering.

Mineral Yellow
Hex #D39C43
RGB 211, 156, 67
CMYK 0, 26, 68, 17

Relax Yellow
This soothing yellow shade somewhat resembles Cream, but the color is a little stronger. Relax Yellow looks a bit like ivory. It looks especially nice in a palette of cool colors, especially blues and greens.

Relax Yellow
Hex #F3E496
RGB 243, 228, 150
CMYK 0, 6, 38, 5

Rainbow Yellow
As you delve through the seemingly infinite shades of yellow, you may notice that there are small degrees of difference between the many types of bright yellow. This one, which is somewhat confusingly called Rainbow Yellow, is a little darker than some. Its depth means that it offers a powerful statement, and the presence of red in it makes it look slightly golden, too.

Rainbow Yellow
Hex #F5DE10
RGB 245, 222, 16
CMYK 0, 9, 93, 4

Deep Yellow
Deep Yellow is very similar to Rustic Yellow, and it’s great to use if you want to give your project a somewhat vintage vibe. If you’re looking for a yellow that’s close to a jewel tone but is still very bright, Deep Yellow might be your answer.

Deep Yellow
Hex #EACE09
RGB 234, 206, 9
CMYK 0, 12, 96, 8

Ochre Yellow
This is one of the shades of yellow that’s based on a natural pigment. Ochre is a mix of sand, clay, and ferric oxide. It’s usually found in clay-rich soil and is somewhat reddish. With yellow ochre like this color, the pigment is more of a yellowish brown than a reddish brown.

Ochre Yellow
Hex #B5904B
RGB 181, 144, 75
CMYK 0, 20, 59, 29

Dull Yellow
This color is somewhat unfortunately named, but Dull Yellow is actually a very pretty neutral-like yellow. It’s a little lighter than most, and it’s roughly the color of dijon mustard.

Dull Yellow
Hex #DECA57
RGB 222, 202, 87
CMYK 0, 9, 61, 13

Hot Yellow
In contrast to Dull Yellow, Hot Yellow is more excitingly named. This deep yet bright yellow has a touch of magenta, making it similar to Fire Yellow. Hot Yellow is a nice alternative to very bright shades like Snapchat Yellow if you want something with plenty of presence but prefer your yellows a little darker.

Hot Yellow
Hex #FFDA00
RGB 255, 218, 0
CMYK 0, 15, 100, 0 

Traffic Yellow (RAL)
Traffic Yellow is somewhat similar to signal yellow in that it’s roughly the same shade of yellow you see on road signs and traffic lights. You may also see school buses in this color.

Traffic Yellow (RAL)
Hex #EFB700
RGB 239, 183, 0
CMYK 0, 23, 100, 6

Yellow Orange
Many available shades of yellow have some degree of orange in them. This is one of the most orange yellows on the list. It looks a lot like true orange (a mix of equal parts red and yellow), but there’s slightly more yellow than there is red. Since orange is tied to energy and creativity, this is a good color to use if you want a burst of inspiration.

Yellow Orange
Hex #D56F00
RGB 213, 111, 0
CMYK 0, 48, 100, 16

Olive Yellow (RAL)
Olive Yellow might sound like a very unusual color name, but it’s essentially the same concept as olive green. It’s a deep olive color with some yellow added. This Olive Yellow is almost pastel-like, and it looks especially good alongside a variety of soft pastels.

Olive Yellow (RAL)
Hex #9D8F65 
RGB 157, 143, 101
CMYK 0, 9, 36, 38

Faded Yellow
Faded Yellow has a lovely, parchment-like appearance that gives it some vintage appeal. Faded colors in general are great for creating casual, throwback looks and retro ambience.

Faded Yellow
Hex #ECE3A1
RGB 236, 227, 161
CMYK 0, 4, 32, 7

Solid Yellow
“Solid” may seem like an odd descriptor for a color. But in this case, it fits. This yellow has a rich, almost sturdy appearance in contrast to translucent or pastel-like yellow shades. Solid Yellow is a bold color that looks striking alongside other strong solids.

Solid Yellow
Hex #FFE81C
RGB 255, 232, 28
CMYK 0, 9, 89, 0

Golden Yellow (RAL)
Plenty of yellow shades are touched with gold, but Golden Yellow is an especially strong color. It’s a little darker than Traffic Yellow and similar colors, and it’s reminiscent of golden-colored leaves in autumn.

Golden Yellow (RAL)
Hex #DD9F00
RGB 221, 159, 0
CMYK 0, 28, 100, 13

Corn
Though the color name is simple, this is actually a beautiful, soft yellow. The color name is apt, too. It’s almost exactly the color of fresh corn. This is an interesting shade of yellow. It’s light, but it isn’t quite a pastel.

Corn
Hex #FBEC5D
RGB 251, 236, 93
CMYK 0, 6, 63, 2

Dandelion
Like daffodils, dandelions are cheerful flowers that many associate with spring. Children enjoy sending the plants’ floating seeds out into the air, and anyone can enjoy dandelion greens in a fresh spring or summer salad. This color captures the sunny glow of a new dandelion bloom perfectly, and it’s great for adding a burst of color to your project.

Dandelion
Hex #F0E130
RGB 240, 225, 48
CMYK 0, 6, 80, 6

Icterine
Icterine has a somewhat unusual name. It comes from an ancient Greek word meaning “jaundice.” Despite the fact that it’s designed to have about the same yellow cast as jaundice, Icterine is actually a very pretty shade of yellow that’s close to the color of a newly hatched chick.

Icterine
Hex #FCF75E
RGB 252, 247, 94
CMYK 0, 2, 63, 1

Sandstorm
This distinctive sandy yellow is a great choice for wall colorings if you prefer something a little bolder. You might have noticed that many shades of yellow are named after soil types or natural elements. Sandstorm, along with some of these other naturally-named yellows, is an outstanding option if you’re trying to cultivate a rustic look.

Sandstorm
Hex #ECD540
RGB 236, 213, 64
CMYK 0, 10, 73, 7

Macaroon
This tasty-sounding yellow color is great to use if you like warm, smooth-looking colors that aren’t overpowering. Macaroon is almost exactly the color of toasted coconut. It makes a nice backdrop color, and it’s demure enough to get along with most neutrals.

Macaroon
Hex #F9E076
RGB 249, 224, 118
CMYK 0, 10, 53, 2

Urobilin
This color is a pretty, deep golden yellow that’s almost the color of sand. But despite that fact, it does have a somewhat unfortunate name. It’s named Urobilin after the naturally-occurring chemical that causes urine to be yellow.

Urobilin
Hex #E1AD21
RGB 225, 173, 33
CMYK 0, 23, 85, 12

Satin Sheen Gold
Satin Sheen Gold is another of the deep, autumnal golden yellows. It’s a great-looking jewel tone that looks especially nice alongside a deep navy blue. And of course, while you can’t really give an on-screen color a shine, Satin Sheen Gold seems to get pretty close.

Satin Sheen Gold
Hex #CBA135
RGB 203, 161, 53
CMYK 0, 21, 74, 20

School Bus Yellow
School Bus Yellow is a color we all know. The National Highway Traffic Safety Administration officially calls it “National School Bus Glossy Yellow” and they use a variation of this color with the hex code #F5A400. Thanks to this association, you might want to consider including School Bus Yellow if you’re working on education-related projects.

School Bus Yellow
Hex #FFD800
RGB 255, 216, 0
CMYK 0, 15, 100, 0

British Standard BS 4800 10 E 51 Yellow
This deep yellow is from the British Standard BS 4800, which is a standard for colors used for painting buildings and coordinating colors across projects. Essentially, it’s a color matching system. This particular shade is deep and slightly golden, and it isn’t quite as orange as Traffic Yellow and similar colors.

British Standard BS 4800 10 E 51 Yellow
Hex #EDC001
RGB 237, 192, 1
CMYK 0, 19, 100, 7

Mimosa
This delicate, pale yellow color has a very slight pink hue to it. It’s closer to the color of pinkish mimosa flowers than to the orange color of the mimosa beverage. Because it’s so pale, Mimosa works as an alternative to stark white. It’s a great way to add some extra dimension to a design project.

Mimosa
Hex #FFF4BC
RGB 255, 244, 188
CMYK 0, 4, 26, 0

Marigold
Even if you know next to nothing about gardening, chances are that you’re familiar with the marigold, the cheery little flower that brings a little sun to gardens everywhere. This color is remarkably close to the color of actual marigolds. If you’re looking for a light, springlike orangish-yellow, this is a good color to use.

Marigold
Hex #FCB810
RGB 252, 184, 16
CMYK 0, 27, 94, 1

Daisy Yellow
This soft, gentle pale yellow was inspired by the yellow center of the daisy flower. It’s close to a pastel yellow with a touch of orange. It would be very at home in a color palette with other soft pastels.

Daisy Yellow
Hex #F8DC75
RGB 248, 220, 117
CMYK 0, 11, 53, 3

///////////////////////////// End of yellow

///////////////////////////////////////////////// Green
Forest Green
We all know what forest green looks like; it’s a rich, deep color that reminds one of Evergreen trees. It’s a nice dark shade if you’re looking for a darker color for your design.

Forest green
Hex #0B6623
RGB 11, 102, 35
CMYK 89, 0, 66, 60

Olive
A color you may recognize if you’re familiar with olives, like those infamous fruits (yes olives are fruits) we all know and either love or hate. Olive green shouldn’t need much description for you to picture what it looks like.

Olive
Hex #708238
RGB 112, 130, 56
CMYK 14, 0, 57, 49

Hunter Green
Hunter green is a pale green. It’s a mellow color that reminds one of a forest floor near the end of autumn; the grass isn’t vibrant at this time of year and because of this lack of vibrancy, the grass can look pale. That’s what hunter green can be described as.

Hunter green
Hex #3F704D
RGB 63, 112, 77
CMYK 44, 0, 31, 56

Artichoke Green
You may be thinking that artichoke green has to look and have the exact same color as its aforementioned namesake, but artichokes are slightly brighter than this color. Artichoke green can look a little pale when you first see it, about a mix between gray and green, but incorporate it in your design and you’ll find yourself staring at a soothing green color that can complement every element and style that exists.


Artichoke green
Hex #8F9779
RGB 143, 151, 121
CMYK 5, 0, 20, 41

Jungle Green
Jungle green is another color that you may think you already know the looks of without seeing it, but when you discover it, you realize that it’s entirely different. Jungle green is a hard color to describe as the color can be all over the place, since there are even variations of jungle green itself. These include tropical rainforest, amazon, deep jungle green, medium jungle green, and dark jungle green. If you don’t like the look of jungle green itself, color codes for the other shades are included below. Jungle green is used in the United States Army for the color of the uniforms and berets that are worn by the United States Army Special Forces.

Because jungle green is such a rich and versatile color, it can be utilized for almost everything.

Jungle green
Hex #29AB87
RGB 41, 171, 135
CMYK 76, 0, 21, 33

Tropical Rainforest
Hex #00755E
RGB 0, 117, 94
CMYK 100, 0, 20, 54

Amazon
Hex #3B7A57
RGB 59, 122, 87
CMYK 52, 0, 29, 52


Deep Jungle green
Hex #004B49
RGB 0, 75, 73
CMYK 100, 0, 3, 71

Medium Jungle green
Hex #1C352D
RGB 28, 53, 45
CMYK 47, 0, 15, 79

Dark Jungle green
Hex #1A2421
RGB 26, 36, 33
CMYK 28, 0, 8, 86

Moss Green
A color that is slightly similar to its namesake, as moss green resembles the coloration that you see in moss.

Moss green
Hex #8A9A5B
RGB 138, 154, 91
CMYK 10, 0, 41, 40

Myrtle Green
As much as one would think that myrtle green is the appropriate word to describe the color Moaning Myrtle from the Harry Potter series living face would have taken if she needed to barf (yes, I’m a huge HP fan), this color is anything but that. Myrtle green is meant to represent the unique color that are the leaves of a myrtle plant. Myrtle is a genus of flowering plants that are native to the Mediterranean region of southern Europe as well as North Africa.


If you need an idea of what myrtle green might look like, the modern cricket caps worn by Australian test cricketers are dyed myrtle green.

Myrtle green
Hex #317873
RGB 49, 120, 115
CMYK 59, 0, 4, 53

Pine Green
Pine green is what you would think it looks like. It’s a rich color and a shade of spring green that is akin to the color of pine trees. It has been an official color in the Crayola company since 1903.

Pine green
Hex #01796F
RGB 1, 121, 111
CMYK 99, 0, 8, 53

Persian Green
Persian green is a unique color that doesn’t tend to be used often. It’s a color that is typically seen in Persian carpets and pottery. It’s a color that you can find all over Iran due to its positive connotation, as the color is renowned for representing nature, heaven, and sanctity.

Persian green
Hex #00A693
RGB 0, 166, 147
CMYK 100, 0, 11, 35

Emerald Green
Emerald green is one of those unique colors that has been featured a lot in popular culture, from Ireland’s nickname as the Emerald Isle due to the countries abundance of lush greenery, to the infamous city in The Wonderful Wizard of Oz where Dorthy encounters that not only is the food emerald green, but so are the people. Emerald green is a shade of green that isn’t particularly light or bright, as the color is similar to the appearance of an emerald gemstone.


Emerald green
Hex #50C878
RGB 80, 200, 120
CMYK 60, 0, 40, 22

Neon Green
Neon green is a very bright shade of green that is primarily seen in psychedelic art, fashion, or if you’ve ever had laser lights in a club flash directly into your eyes, then you have an idea of what this color looks like.

Neon green
Hex #39FF14
RGB 57, 255, 20
CMYK 78, 0, 92, 0

Sacramento Green
Aptly named because of its use as the official color for California’s Sacramento State University. While this color might not see much use outside of the official capacity for the college, it’s a variation of green that you should know exist.

Sacramento green
Hex #043927
RGB 4, 57, 39
CMYK 93, 0, 32, 78

Sea Green
Sea green is a color that resembles the seafloor, which is then reflected through the water. So if you’ve ever gone swimming at a beach and found that the water had a green tinge to it, that effect is caused by sea green.

Sea green
Hex #2E8B57
RGB 46, 139, 87
CMYK 67, 0, 37, 45


Sage Green
This is a greenish-gray color that resembles the color of dried sage leaves.

Sage green
Hex #9DC183
RGB 157, 193, 131
CMYK 19, 0, 32, 24

Lime Green
Lime green is a color that resembles the color of the fruit, lime. It’s bright and vivid in coloration.

Lime green
Hex #C7EA46
RGB 199, 234, 70
CMYK 15, 0, 70, 8

Jade Green
Jade green got its name due to the fact that its color closely resembles that of the jade gemstone, despite the fact that the hue of jades themselves can vary widely.

Jade green
Hex #00A86B
RGB 0, 168, 107
CMYK 100, 0, 36, 34

Fern Green
Fern green got its name as the color closely resembles fern leaves. In 1998, Crayola officially included fern green into their products, though it tends to be fairly lighter than the official color swatches for fern green.


Fern green
Hex #4F7942
RGB 79, 121, 66
CMYK 35, 0, 45, 53

Laurel Green
While laurel green sounds like it could be the name of a country singer with several platinum records to her name, laurel green is anything but that. It’s a medium-light hue of greenish-gray, similar in color to asparagus, but lighter than that.

Laurel green
Hex #A9BA9D
RGB 169, 186, 157
CMYK 9, 0, 16, 27

Mint Green
Mint green is a color that you will discover if you like mint chocolate chip ice cream. Mint green gets its name because it shares a similar color with the mint leaf.

Mint green
Hex #98FB98
RGB 152, 251, 152
CMYK 39, 0, 39, 2

Tea Green
A light shade of green that gets its name from the color of brewed green tea. 

Tea green
Hex #D0F0C0
RGB 208, 240, 192
CMYK 13, 0, 20, 6


Army Green
Army green is a color that has been used in militaries since World War II or even before that period, although the hue of army green in military uniforms varies between nations.

Army green
Hex #4B5320
RGB 75, 83, 32
CMYK 10, 0, 61, 67

Kelly Green
Kelly green is a unique color that only seems to exist in America and was coined back in the early 1900s. Kelly green refers to the fact that the surname Kelly, along with the color green, are both popular in Ireland. Due to the fact that much of America’s early history was made up by the abundance of Irish immigrants, the name grew to popularity in America.

Kelly green
Hex #4CBB17
RGB 76, 187, 23
CMYK 59, 0, 88, 27

Russian Green
Russian green has a similar history to some other variations of green that appear in this list. It got the name Russian green when it started being used as the shade of green worn by many regiments of the Imperial Russian Army, from 1700 to 1914.

Russian green
Hex #679267
RGB 103, 146, 103
CMYK 29, 0, 29, 43


Paris Green
Paris green has a lengthy range. It can be pale or even a vivid bluish-green, to a deeper shade of regular green itself. Paris green gets its name from the popular pigment that appeared in artists’ paints and was primarily found in inorganic compound copper acetoarsenite.

Paris green
Hex #50C878
RGB 80, 200, 120
CMYK 60, 0, 40, 22

Pakistan Green
Pakistan green is a dark shade of green that is primarily used in web development and graphic design. It gets the name from its use as the background color of the Pakistani flag.

Pakistan green
Hex #006600
RGB 0, 102, 0
CMYK 100, 0, 100, 60

Midnight Green
Midnight green is a relatively dark, green-bluish color. It’s the official primary color of the Philadelphia Eagles, which is why it’s also sometimes referred to as eagle green.

Midnight green
Hex #004953
RGB 0, 73, 83
CMYK 100, 12, 0, 67

India Green
India green gets its name from its official use as the color of the lower band of the flag of India. The color is used in the flag to represent fertility and prosperity.


India green
Hex #138808
RGB 19, 136, 8
CMYK 86, 0, 94, 47

Hunter Green
Hunter green is a color that was mostly worn by hunters in the 1800s. However, most hunters changed and took to wearing olive-colored garbs rather than anything with hunter green by the 1900s. Today, some hunters still wear clothing or bandanas in hunter green.

Hunter green is the official primary color of the Green Bay Packers, as well as the New York Jets from a period of 1998 to 2019.

Hunter green
Hex #355E3B
RGB 53, 94, 59
CMYK 44, 0, 37, 63

Celadon
Celadon is a shade of green that is grayish and pale in nature. It’s named after a class of Chinese ceramics that made its way to Korea and Japan. Because Celadon has European linguistic roots, its name may have been derived from a character, Celadon, that appears in the work L’Astrée, a French pastoral novel that depicts life in an idealized manner for the reader. The character in the novel wore a light green color.

In the past, Celadon was used as a glaze in pottery; it was fairly common in Asia for its resemblance to jade.

Celadon
Hex #ACE1AF
RGB 172, 225, 175
CMYK 24, 0, 22, 12


Avocado
This is a lovely, deep green that isn’t quite as dark as the skin of most avocados. However, if you want to inspire a sense of calm and even evoke the peace of a forest, this is a great color to choose for your next project.

Avocado
Hex #568203
RGB 86, 130, 3
CMYK 34, 0, 98, 49

Harlequin
If you like a neon, in-your-face green, this bright and exciting color is an excellent choice. While its highlighter-like glow may be too much for some projects, it’s ideal for applications where grabbing attention is absolutely essential.

Harlequin
Hex #3FFF00
RGB 63, 255, 0
CMYK 75, 0, 100, 0 

Spring
Spring is the season of new beginnings, and this delicate, pale green captures the idea well. Reminiscent of very new shoots and unfolding leaves, it’s ideal if you want a lighter green that isn’t quite a pastel.

Spring
Hex #00F0A8
RGB 0, 240, 168
CMYK 100, 0, 30, 6

Kaitoke
This deep green is reminiscent of vast forests, which seems appropriate. It’s named for the Kaitoke Regional Park in New Zealand. For a darker green that still has a lot of energy to it, Kaitoke is an excellent choice.


Kaitoke
Hex #004830
RGB 0, 72, 48
CMYK 100, 0, 33, 72

Screamin’ Green
From the name, you’d probably guess that Screamin’ Green is a neon color. However, while it’s fairly bright, it hasn’t quite reached neon level. This color is a lot like seafoam green with a bit less blue.

Screamin’ Green
Hex #76FF7A
RGB 118, 255, 122
CMYK 54, 0, 52, 0

Chateau
This dignified green makes a beautiful wall color if you prefer the slightly darker look. Paler and lighter than olive, Chateau also looks very nice when lightened to a paler green tint.

Chateau
Hex #48A860
RGB 72, 168, 96
CMYK 57, 0, 43, 34

Dark Moss Green
If you’re looking for a deeper green that approaches the level of a neutral color, Dark Moss Green might be your answer. At first glance, this brownish green looks unremarkable. But it offers a quiet elegance that makes it perfect for a backdrop, or even for a text color against a cream white background.


Dark Moss Green
Hex #4A5D23
RGB 74, 93, 35
CMYK 20, 0, 62, 64

Swamp
Let’s face it, most of us probably aren’t jumping to get a color called “Swamp.” But if you can get past the drab name, Swamp is actually a pleasant gray-green that can be used as a neutral color in most applications.

Swamp
Hex #A8C090
RGB 168, 192, 144
CMYK 13, 0, 25, 25

Mantis
If you’ve ever been transfixed by the beauty of a praying mantis, you might appreciate this interesting green shade. Mantis is close to being a pale hunter green, and it’s a good middle-of-the-road green shade. Not too light, not too dark.

Mantis
Hex #74C365
RGB 116, 195, 101
CMYK 41, 0, 48, 24 

Fun
You might expect a green called “fun” to be a bright, neon-like shade. However, this green is surprisingly somewhat dark. It’s roughly between a forest and hunter green. If you’re looking for a nice dark green, this one is certainly an option.

Fun
Hex #007848
RGB 0, 120, 72
CMYK 100, 0, 40, 53


Pantone Artichoke Green
Distinct from Artichoke Green, this color comes from Pantone, the world-renowned color-matching company. Its grayish-green shade does get close to the color of the outside of an artichoke, too.

Pantone Artichoke Green
Hex #4B6F44
RGB 75, 111, 68
CMYK 32, 0, 39, 56

Viridian
Bluish greens tend to inspire a sense of calm, and Viridian does just that. This deep and peaceful green looks a lot like the ocean on a cloudy day. Its grayish quality makes it close to being a neutral, but not quite.

Viridian
Hex #609078
RGB 96, 144, 120
CMYK 33, 0, 17, 44

Reseda Green
This interesting shade is similar to Russian Green, but it’s a bit darker. It gets its name from the plant Reseda odorata, and it is included as part of Germany’s RAL color standard.

Reseda Green
Hex #6C7C59
RGB 108, 124, 89
CMYK 13, 0, 28, 51 

Chetwode
Chetwode is a pale, barely-there green, but it’s perfectly balanced. As you can see from the RGB values, it has almost equal amounts of blue and green. And if you’re wondering about the unusual name, Chetwode has the same name as a small village in England.


Chetwode
Hex #F0FFF0
RGB 240, 255, 240
CMYK 6, 0, 6, 0

Shamrock Green
We all know of the shamrock, a good-luck charm and symbol of Ireland. And while most shamrocks have a bit more yellow in them than this green does, this shamrock green is nonetheless a pretty, sprightly green that can add some life to your project.

Shamrock Green
Hex #009E60
RGB 0, 158, 96
CMYK 100, 0, 39, 38 

Verdun
Verdun is a city in northern France, and it’s also the name of this interesting dark green. Despite its depth, Verdun manages to still be fairly energetic. This is thanks to its high yellow CMYK value. However, the relatively high amounts of black and blue stop it from becoming overly bright.

Verdun
Hex #487800
RGB 72, 120, 0
CMYK 40, 0, 100, 53

Castleton Green
This green is the official color of Castleton University in Vermont. It’s a bluish pine green with a stately air to it, and it looks especially nice against white. If you’re looking for a bluish twist on a classic color, this is a great option.


Castleton Green
Hex #00563B
RGB 0, 86, 59
CMYK 100, 0, 31, 66

Gin
This pleasantly pale green looks a bit like a diluted form of the color of juniper, the plant used to make gin. It’s a grayish, almost khaki green that’s ideal if you want just a touch of a neutral-like green.

Gin
Hex #D8E4BC
RGB 216, 228, 188
CMYK 5, 0, 18, 11

Granny Smith Apple
Just about everyone is familiar with the tart crispness of the classic Granny Smith apple. This slightly demure green, while it’s a bit less yellow than most Granny Smiths, is nonetheless a great tribute. It’s ideal if you like mint-like greens but want something slightly darker.

Granny Smith Apple
Hex #A8E4A0
RGB 168, 228, 160
CMYK 26, 0, 30, 11

Bitter Lime
Bitter Lime is an interesting twist on the classic lime green. And just like an actual lime that’s on the tart side, this color has more yellow than blue. The result is an unusual color, but it’s great for applications like advertising when you want a bright color without going to a near-blinding neon shade.


Bitter Lime
Hex #BFFF00
RGB 191, 255, 0
CMYK 25, 0, 100, 0

Bright Mint
Like Bitter Lime, Bright Mint is a twist on a classic green shade. Specifically, Bright Mint is a little more blue and a little brighter. The result is something that looks like a cross between turquoise and seafoam green. If you need a color that’s eye-catching without being overwhelming, this is a great answer.

Bright Mint
Hex #4FFFB0
RGB 79, 255, 176
CMYK 69, 0, 31, 0

Bottle Green
As the name suggests, this color is similar to that of a dark green glass bottle (and especially close to the color of an older bottle). It’s another bluish green, but it leans more to the blue side (as evidenced by the 100% cyan value).

Bottle Green
Hex #006A4E
RGB 0, 106, 78
CMYK 100, 0, 26, 58

Cadmium Green
Cadmium Green, sometimes also called Empire, is a bold and confident shade that’s just a bit lighter than hunter green. It’s deep without being overly dark, making it a well-balanced choice for most projects.


Cadmium Green
Hex #006B3C
RGB 0, 107, 60
CMYK 100, 0, 44, 58

Camouflage Green
There are practically as many camouflage patterns as there are terrains. But Camouflage Green (or a very close color) can be found in most. This is a unique, bluish-gray green that works as a neutral. It makes an excellent, quiet wall color, and it also looks nice in a lighter tint.

Camouflage Green
Hex #78866B
RGB 120, 134, 107
CMYK 10, 0, 20, 47

Pear
This pleasant yellow-green is almost exactly the color of a ripe Bartlett pear. Thanks to the K value (black), it’s a little quieter than many yellow greens. If you want to evoke a spring-like atmosphere in your project, this is a great shade of green to consider.

Pear
Hex #D1E231
RGB 209, 226, 49
CMYK 8, 0, 78, 11

Dollar Bill
The color green is commonly associated with money, and Dollar Bill is a color that gets close to the green on the dollar bill. Its sage-like color gives it a classic, understated look, and it’s especially pretty in paler tints.


Dollar Bill
Hex #85BB65
RGB 133, 187, 101
CMYK 29, 0, 46, 27

Inchworm
As a child, you might have noticed these bright yellow-green bugs inching slowly along in springtime. This cheerful bright green is slightly softened by a bit of black, making it a well-balanced shade that’s ideal for a range of different projects.

Inchworm
Hex #B2EC5D
RGB 178, 236, 93
CMYK 25, 0, 61, 7

Asparagus
This sage-like green isn’t really the color of asparagus, but it’s nonetheless a classic, beautiful color that’s well-suited to a variety of uses. Asparagus is slightly muted, and it pairs well with soft pinks and purples.

Asparagus
Hex #87A96B
RGB 135, 169, 107
CMYK 20, 0, 37, 34

Caribbean Green
Caribbean Green is just barely a green. Like the bright, clear waters of the Caribbean, this color is more of a blue with a hint of green. It’s a great way to help create the idea of a warm, summery atmosphere.

Caribbean Green
Hex #00CC99
RGB 0, 204, 153
CMYK 100, 0, 25, 20


GO Green
This standout shade of green looks a bit like the needles of a blue spruce tree. It’s a medium green in color, but its slight blue cast makes it a bit different from most colors on the list.

GO Green
Hex #00AB66
RGB 0, 171, 102
CMYK 100, 0, 40, 33

Phthalo Green
This oddly-named color is a synthetic green pigment that’s frequently used to make oil and acrylic paints. Among the ingredients for the pigment are copper and the chemical phthalocyanine, which is where the name comes from. This deep green is almost exactly the same color as the pigment itself.

Phthalo Green
Hex #123524
RGB 18, 53, 36
CMYK 66, 0, 32, 79

Napier Green
This is an interesting bright-green color with a high amount of yellow. If you know about supercars, you might recognize the color as one that is sometimes used on McLaren cars. If you need a high-energy color similar to Kelly Green, Napier Green is a good one to look into.

Napier Green
Hex #2A8000
RGB 42, 128, 0
CMYK 67, 0, 100, 50


Feldgrau
If you’re a history buff, Feldgrau may look familiar. This grayish green color was the official color of the uniforms of German soldiers from the early 1900s to the 1940s. If you need a stately gray with just a hint of green, Feldgrau is a good color to choose.

Feldgrau
Hex #4D5D53
RGB 77, 93, 83
CMYK 17, 0, 11, 64

Green-Yellow
Green-Yellow doesn’t have a very exciting name. But the name does describe the color perfectly: it’s a greenish yellow. As you can see from the CMYK values, it leans more yellow than blue, creating a bright and high-energy hue.

Green-Yellow
Hex #ADFF2F
RGB 173, 255, 47
CMYK 32, 0, 82, 0

Malachite
This beautifully balanced color is what most people likely picture when they imagine green. Though it has slightly more blue than yellow, Malachite offers a classic green that may well be the right color for your project.

Malachite
Hex #0BDA51
RGB 11, 218, 81
CMYK 95, 0, 63, 15

Rifle Green
This deep olive green gets its name from the fact that it (or colors like it) is sometimes used as the uniform color for rifle regiments. It’s an ideal choice if you need a darker color but don’t want to go for the more typical black or plain dark gray.


Rifle Green
Hex #444C38
RGB 68, 76, 56
CMYK 11, 0, 26, 70

Volt
Even the name of this color suggests high energy. And as you may have guessed, Volt is one of the yellowest greens on the list. With a yellow value of 100 and a cyan value of 19, its brightness is tempered just enough. Still, if you need a shock of near-yellow for your project, Volt is certainly an option.

Volt
Hex #CEFF00
RGB 206, 255, 0
CMYK 19, 0, 100, 0

British Racing Green
As you’ve likely figured out from the name, British Racing Green is the official color of the United Kingdom’s motor racing. It’s a deep green that looks a lot like both hunter and forest greens.

British Racing Green
Hex #004225
RGB 0, 66, 37
CMYK 100, 0, 44, 74

Thyme
The name of this shade of green is somewhat deceptive. While it’s close to the shade of natural thyme, it has a bit more yellow. Still, it’s a versatile color that’s similar to Kelly Green.


Thyme
Hex #5EDC1F
RGB 94, 220, 31
CMYK 57, 0, 86, 14

Chartreuse
This bright greenish-yellow is named after a green or yellow French liqueur that has been made since the 1700s. It’s a great option if you are looking for an almost-neon shade of green.

Chartreuse
Hex #7FFF00
RGB 127, 255, 0
CMYK 50, 0, 100, 0

Corn Green
Most of us likely don’t think of corn when we imagine the color green. However, this dusky greenish-yellow is just about the exact color of the leaves that cover an ear of corn. If you need a shade of green that’s light and yellow-heavy without being overly bright, this is a great candidate.

Corn Green
Hex #71A92C
RGB 113, 169, 44
CMYK 33, 0, 74, 34

Shrek Green
Many shades of green are named after things in nature, but Shrek Green gets its name from the popular animated ogre. It’s an unusual mixture of yellow-green and olive, but if you want something that breaks the mold, it’s a great choice.


Shrek Green
Hex #C4D300
RGB 196, 211, 0
CMYK 7, 0, 100, 17

Christmas Green
If you need a color to commemorate the most wonderful time of the year, Christmas Green is it. It’s bright yet deep, and it’s just about the exact shade of green icing you’d make to decorate Christmas tree cookies.

Christmas Green
Hex #00873E
RGB 0, 135, 62
CMYK 100, 0, 54, 47

Irish Green
From green fields to shamrocks to the green bar on the flag, green has long been a color associated with Ireland. Irish Green is a balanced and pleasantly energetic color that’s ideal for use if you want a classic green that’s more blue than yellow.

Irish Green
Hex #009A44
RGB 0, 154, 68
CMYK 100, 0, 56, 40

Road Sign Green
This relaxed blue-green is meant to resemble the colors of some road signs. As you can see from CMYK values, it leans heavily blue as opposed to yellow. This makes it a better choice if your project features primarily cool colors, or if you need a cooler color to balance out a too-hot color scheme.


Road Sign Green
Hex #01735C
RGB 1, 115, 92
CMYK 99, 0, 20, 55

Lightsaber Green
This lively green is similar to both Harlequin and Chartreuse. If you need a neon green that’s so bright it glows, Lightsaber Green just might be your answer. It looks especially striking against pure black or deep blue.

Lightsaber Green
Hex #2FF924
RGB 47, 249, 36
CMYK 81, 0, 86, 2

Girl Scout Green
If you’ve ever bought Girl Scout cookies, then you’re familiar with the green and white logo for the Girl Scouts. But even for other design purposes, this classic and distinguished green is a wise choice. Pair it with white for an elegant look, or pair it with pale pink to make it really pop.

Girl Scout Green
Hex #00AE58
RGB 0, 174, 88
CMYK 100, 0, 49, 32

Tennis Court Green
Any tennis player, casual or serious, will immediately recognize this shade of green. Its sage-like color looks great with white, but it also serves as a useful backdrop for brighter colors and pastels.


Tennis Court Green
Hex #6C935C
RGB 108, 147, 92
CMYK 27, 0, 37, 42

Spring Bud
We’re all familiar with the thin, yellow-green leaf buds that signal the start of spring. This high-energy green captures that color beautifully. Though not as green as Chartreuse or Harlequin, it’s still useful for adding a pop of color to your project.

Spring Bud
Hex #A7FC00
RGB 167, 252, 0
CMYK 34, 0, 100, 1

Chinese Green
This unusual green looks, at first glance, more like a yellow-brown. However, it has an almost jewel-tone look to it, and it pairs well with deep reds. While Chinese Green likely would not be considered a true neutral, it’s somewhat close.

Chinese Green
Hex #D0DB61
RGB 208, 219, 97
CMYK 5, 0, 56, 14

Arctic Lime
If you pay attention to color trends, you may have noticed that colors like Arctic Lime are making a comeback. Arctic Lime has some characteristics of neon, but it’s not quite as bright, making it generally more pleasing to the eye. It looks especially dramatic against stark black.


Arctic Lime
Hex #D0FF14
RGB 208, 255, 20
CMYK 18, 0, 92, 0

Nyanza
Named after a city in Rwanda, Nyanza is a beautifully soft mint green. If you like pastels, it makes an especially soothing wall color. It also works as an alternative to white if you’re selecting background colors. Nyanza would also work well in a watercolor-esque, pastel color palette.

Nyanza
Hex #E9FFDB
RGB 233, 255, 219
CMYK 9, 0, 14, 0

Dark Lemon-Lime
When you think of lemon-lime, you probably picture a slightly brighter, yellower shade. This medium green simply offers a little more lime than it does lemon.

Dark Lemon-Lime
Hex #76BA1B
RGB 118, 186, 27
CMYK 37, 0, 85, 27

Crayola Yellow-Green
This color, which is in similar vein to lemon-lime, is the same color as Crayola’s yellow-green crayon. It’s sure to bring back memories of coloring as a child. Crayola Yellow-Green is roughly the shade of grass as it begins to yellow. And thanks to the fact that it has very little black, it manages to be bright without becoming overpowering.


Crayola Yellow-Green
Hex #ACDF87 
RGB 172, 223, 135
CMYK 23, 0, 39, 13

Maximum Green
Like a few other shades on the list, Maximum Green is close to the classic idea of green most people have in their heads. It’s a bright, strong green with just enough depth, and it works well in a variety of applications. And as you can see from the RGB values, the presence of green dramatically outshines both red and blue.

Maximum Green
Hex #4C9A2A
RGB 76, 154, 42
CMYK 51, 0, 73, 40

Vivid Lime Green
Lime green is more than just one shade. From Arctic Lime to Vivid Lime Green, you can find it in seemingly endless iterations. Vivid Lime Green has a high percentage of yellow, but it has enough black to add some depth. Compared to some more fluorescent types of lime, Vivid Lime Green has a bit more presence.

Vivid Lime Green
Hex #A4DE02
RGB 164, 222, 2
CMYK 26, 0, 99, 13

Pistachio
This color is named after everyone’s favorite green nut, and it’s about the color of pistachio ice cream. It’s a great choice if you want a medium-light green that isn’t overly bright. Since it’s tempered by black, this shade of green is a little muted, although not as much as the various shades of olive green.


Pistachio
Hex #93C572
RGB 147, 197, 114
CMYK 25, 0, 42, 23

Medium Spring Green
Medium Spring Green is an especially lovely spring green. It manages to be both soft and bright, and it looks almost like a slightly darker mint-green pastel. It can be easy to mix up the various shades of spring green, but this is one that really shouldn’t get lost in the shuffle.

Medium Spring Green
Hex #00FA9A
RGB 0, 250, 154
CMYK 100, 0, 38, 2

Sheen Green
This oddly-named color looks like an interesting mix between moss green and spring green. It’s easy on the eyes and looks especially nice as a backdrop for black text. It gets its name from the Sheen Green crayon by Crayola.

Sheen Green
Hex #8FD400
RGB 143, 212, 0
CMYK 33, 0, 100, 17

La Salle Green
This bold green is the official color of the La Salle Greenies. This is the varsity team at La Salle Green Hills, a school in the Philippines. In the NCAA, the Greenies are the junior affiliate team of the St. Benilde Blazers.


La Salle Green
Hex #087830
RGB 8, 120, 48
CMYK 93, 0, 60, 53

Spanish Viridian
This bluish-green color is a variant of Viridian, mentioned earlier. However, Spanish Viridian is a bit more green (as opposed to blue) than the generic Viridian.

Spanish Viridian
Hex #007F5C 
RGB 0, 127, 92
CMYK 100, 0, 28, 50

Dartmouth Green
Many colleges have colors involving some form of dark green. This particular shade is the official green of Dartmouth College, an Ivy League college in New Hampshire. The official Dartmouth colors are white and Dartmouth Green. Side-by-side with white, Dartmouth Green creates a pleasing contrast. Though not as loud as some other collegiate colors, this deep green is incredibly elegant.

Dartmouth Green
Hex #00703C
RGB 0, 112, 60
CMYK 100, 0, 46, 56

Pine Needle Color
Every so often, you run across a shade of green whose name doesn’t really seem to match up. Pine Needle Color is one of those shades. It’s much more brown than you might expect. Its deep, dark color is partially explained by the high percentage of black compared to yellow and green. If you want a neutral color that has some green in it, the unusual Pine Needle Color is worth considering.

Pine Needle Color
Hex #454D32
RGB 69, 77, 50
CMYK 10, 0, 35, 70

Olive Drab
Despite its unappealing name, Olive Drab is actually a fairly nice color. It’s slightly lighter than many olive shades, and it’s just about exactly the color of a manzanilla olive. If you like olive greens but want one you don’t see too often, Olive Drab is a good choice.

Olive Drab
Hex #6B8E23
RGB 107, 142, 35
CMYK 25, 0, 75, 44

Lawn Green
Lawn Green is somewhat close to Chartreuse in color, making it a lot brighter than many people’s lawns. However, it’s close to the color of grass when it’s illuminated by falling light. This is a good color to choose if you like the lightness of spring greens and pastels but want something that’s a bit more energizing.

Lawn Green
Hex #7CFC00
RGB 124, 252, 0
CMYK 51, 0, 100, 1

Xanadu
At first glance, Xanadu looks more like slate gray than any shade of green. However, as you can see by RGB values, it still does have a relatively high proportion of green. But thanks to also having a good bit of black (as shown in the CMYK values), Xanadu has a largely gray appearance. If you’re looking for a distinctive, uncommon neutral, this is a great one to consider.


Xanadu
Hex #738678
RGB 115, 134, 120
CMYK 14, 0, 10, 47

Dark Olive Green
When it comes to choosing a shade of green, types of olive are generally popular. Olive is understated yet elegant, and it comes close to being a neutral color. Dark Olive Green is an excellent option. It looks especially nice with various shades of yellow, and it fits in well with neutrals like gray and tan.

Dark Olive Green
Hex #556B2F
RGB 85, 107, 47
CMYK 21, 0, 56, 58

Dark Sea Green
This color is roughly the shade of the ocean on a cloudy day. It’s also an excellent uncommon color to choose for a project. Most of us are familiar with sea green, but it’s fairly common, especially around the summertime. This variant can let your work stand out. And thanks to its relatively high degree of blue and black, it’s very much at home in a cooler color palette.

Dark Sea Green
Hex #8FBC8F
RGB 143, 188, 143
CMYK 24, 0, 24, 26

Green (Munsell)
This color is a green featured by the Munsell Color Company. The company was founded by Albert H. Munsell, developer of Munsell Color Theory. Munsell’s Color System focused on the chroma, value, and hue of different colors. “Chroma” refers to intensity, “value” refers to lightness, and “hue” refers to the basic color. This green has a good bit of blue, giving it a pleasing, cool cast.


Green (Munsell)
Hex #00A877
RGB 0, 168, 119
CMYK 100, 0, 29, 34

Mughal Green
Mughal Green is a shade of green with ancient and royal connections. It’s named for the flag of the Mughal Empire that ruled northern India in the sixteenth, seventeenth, and eighteenth centuries. The flag features a dark green backdrop with a sun and golden lion in the foreground. It’s outlined in deep red.

Mughal Green
Hex #306030
RGB 48, 96, 48
CMYK 50, 0, 50, 62

John Deere Green
John Deere Green is iconic, especially in rural America. It’s the official color used on tractors and mowers made by John Deere. John Deere Green is an interesting shade. It’s somewhere between Kelly Green and Hunter Green. As you may have gathered from seeing the John Deere logo, it looks especially nice when paired with bright yellow.

John Deere Green
Hex #367C2B
RGB 54, 124, 43
CMYK 56, 0, 65, 51

Office Green
Office Green looks similar to John Deere Green, even though the name would suggest that it’s best for the indoors as opposed to outdoors. Office Green is one of the most balanced greens on the list. As you can see by the CMYK values, it contains an exactly equal amount of blue and yellow, and then it’s darkened by the presence of black.


Office Green
Hex #008000
RGB 0, 128, 0
CMYK 100, 0, 100, 50

Limerick
This whimsically-named green looks fairly similar to many of the yellow-greens and lemon-limes on the list. Like Irish Green, it inspires images of rolling hills and sunlight, as it’s a grassy green with a fair bit of yellow. If you like the various shades of lime on the list but want something a bit darker and less fluorescent, Limerick is a color you may want to consider.

Limerick
Hex #9DC209
RGB 157, 194, 9
CMYK 19, 0, 95, 24

Maximum Green Yellow
If Limerick is the color of grass, then Maximum Green Yellow is the color of dried, yellowed grass in winter. It’s an unusual shade that looks a bit like an olive green with a significant amount of yellow added. Due to its almost-golden appearance, it pairs very well with deeper shades of blue.

Maximum Green Yellow
Hex #D9E650
RGB 217, 230, 80
CMYK 6, 0, 65, 10

French Lime
As you’ve seen, many of the shades of lighter green have names involving lime. And while it might seem like this one is named after a species of lime native to France, that’s not the case. This shade appears on several French color lists where it’s simply called “lime.” So to differentiate it from the many other shades of lime, it was called “French Lime.”

French Lime
Hex #9EFD38
RGB 158, 253, 56
CMYK 38, 0, 78, 1

Medium Spring Bud
Not to be confused with Medium Spring Green, Medium Spring Bud is a color that looks roughly like a lightened combination of olive and sage. As you can see from its CMYK values, there’s far more yellow than there is blue or black. Medium Spring Bud is designed to be about the same color as a bud getting ready to bloom.

Medium Spring Bud
Hex #C9DC87
RGB 201, 220, 135
CMYK 9, 0, 39, 14

UFO Green
It isn’t really clear why this color is called UFO Green. After all, there’s nothing particularly otherworldly about it. In fact, it looks a lot like green grass. But if you’re looking for a somewhat bright, relatively balanced green with slightly more blue than yellow, UFO Green is a good choice.

UFO Green
Hex #3CD070
RGB 60, 208, 112
CMYK 71, 0, 46, 18

Acid Green
At first glance, Acid Green looks a lot like Olive Drab. It’s another olive-like green that’s significantly lightened up by yellow. For a real-world reference, this color is fairly similar to the color of pea soup.

Acid Green
Hex #B0BF1A
RGB 176, 191, 26
CMYK 8, 0, 86, 25

Chlorophyll Green
Chlorophyll allows plants to take energy from light, and it’s a key part of photosynthesis. And since chlorophyll is a green pigment, it makes sense that a shade of green would be named after it. Chlorophyll Green is a bright color similar to neon green.

Chlorophyll Green
Hex #4AFF00
RGB 74, 255, 0
CMYK 71, 0, 100, 0

Green Lizard
When it comes to naming green colors, there’s no shortage of plants and animals for inspiration. This color, Green Lizard, is roughly the color of an anole, which is a small green lizard. Though Green Lizard is fairly bright, it stops short of being neon, making it much easier to look at.

Green Lizard
Hex #A7F432
RGB 167, 244, 50
CMYK 32, 0, 80, 4

Iguana Green
Here’s another color named after a green lizard – Iguana Green. Iguana Green is a little bit more muted, and it has more blue and more black. It’s remarkably close to the color of an actual iguana.

Iguana Green
Hex #71BC78
RGB 113, 188, 120
CMYK 40, 0, 36, 26

Kombu Green
Kombu Green is easily one of the darkest greens on the list. It’s named after kombu, a form of edible kelp. As you can see from its CMYK value, Kombu Green has a very high percentage of black compared to other colors.

Kombu Green
Hex #354230
RGB 53, 66, 48
CMYK 20, 0, 27, 74

Middle Green
Sometimes, a project just needs a middle-of-the-road green. That’s where the appropriately-named Middle Green can help. It has very similar amounts of blue and yellow (though slightly more blue), and it’s a balanced shade with a calming effect.

Middle Green
Hex #4D8C57 
RGB 77, 140, 87
CMYK 45, 0, 38, 45

Paolo Veronese Green
This lovely, cool blue-green is named after Paolo Veronese, a renowned Renaissance painter. He was also known as Paolo Caliari, and his most famous paintings include The Feast in the House of Levi and The Wedding at Cana. The color is frequently described as being like Viridian but with additional blue.

Paolo Veronese Green
Hex #009B7D
RGB 0, 155, 125
CMYK 100, 0, 19, 39

Pullman Green
When you first look at Pullman Green, you might think it’s simply a very dark brown. However, it’s actually an incredibly deep olive color. The name comes from the Pullman Company, a railroad car manufacturer that operated during the American railroad boom. Its cars were painted this very deep olive green. Originally, the cars were painted chocolate brown. Once the official color was changed to Pullman Green (originally called Brewster Green), the cars continued to be painted in Pullman Green until the company went out of business.

Pullman Green
Hex #3B331C
RGB 59, 51, 28
CMYK 0, 14, 53, 77

Green Screen
Most of us know the green screen as a backdrop of promise. After filming, fantastical backgrounds can be added. This color is just like that of an actual green screen. It’s a pleasing green in its own right, though. With slightly more blue than yellow, it’s a bit on the calmer side, but it still manages to possess a quiet energy.

Green Screen
Hex #00B140
RGB 0, 177, 64
CMYK 100, 0, 64, 31

Android Green
This green is officially categorized as a shade of chartreuse. It was originally used as the color for the Android robot logo. But as of 2019, the brand switched to an updated hex value. However, the logo still appears in the original Android Green in some places. Android Green is very similar to the color of pea soup.

Android Green
Hex #A4C639
RGB 164, 198, 57
CMYK 17, 0, 71, 22

Bitter Lemon
Most of us associate lemons with bright yellow. However, this color is that of a bitter, very unripe lemon, so the greenish yellow color makes sense. Bitter Lemon is very similar in color to Pear, although it is just slightly more yellow.

Bitter Lemon
Hex #CAE00D
RGB 202, 224, 13
CMYK 10, 0, 94, 12

Wageningen Green
This name may seem like a mouthful at first, but it’s the name of a Dutch university. Wageningen Green is simply one of the school’s official colors. It’s somewhat rare in that its CMYK values for blue and yellow are exactly the same, which makes it pleasantly bright yet balanced.

Wageningen Green
Hex #34B233
RGB 52, 178, 51
CMYK 71, 0, 71, 30

Sap Green
Sap Green is one of the colors that was based on a historical paint. Traditionally, Sap Green was made with ripe buckthorn berries. Newer versions of the color typically aren’t made with berries, but they are nearly identical in color to the original. Sap Green is a balanced green that looks mildly like olive.

Sap Green
Hex #507D2A
RGB 80, 125, 42
CMYK 36, 0, 66, 51

Old Moss Green
This color is a brownish green with a vintage appeal. And as the name suggests, it is just about the color of old moss. Old Moss Green works well as a neutral, and it looks good paired with other darker shades of green.

Old Moss Green
Hex #867E36
RGB 134, 126, 54
CMYK 0, 6, 60, 47

Slimy Green
Slimy Green is another color whose name doesn’t sound particularly appealing. However, the color itself is promising. It’s a deep, rich green that offers plenty of presence despite not being especially dark or especially bright. It’s a great statement-making shade for logos.

Slimy Green
Hex #299617
RGB 41, 150, 23
CMYK 73, 0, 85, 41

Very Light Malachite Green
Malachite is an unusual-looking greenish mineral that comes in a variety of shades. Very Light Malachite Green very closely matches the lightest shades of malachite. As a color, it closely resembles some of the variants of spring green. It’s ideal if you want a light, airy-looking green that isn’t quite as pale as mint.

Very Light Malachite Green
Hex #64E986
RGB 100, 233, 134
CMYK 57, 0, 42, 9

Dark Spring Green
Speaking of spring greens, this is one of the more unusual variants. Dark Spring Green is, as the name suggests, a darker version of Spring Green. But it’s so dark that most people likely wouldn’t consider it to be a spring green. Dark Spring Green looks very similar to Dartmouth Green, and it’s a good choice if you want a dark green but prefer to stay away from common options like Hunter Green.

Dark Spring Green
Hex #177245
RGB 23, 114, 69
CMYK 80, 0, 39, 55

Guppie Green
In the world of show guppies, green is a rare and sought-after color. Luckily, at least Guppie Green is easily accessible for your next project. This cheerful light green is brighter than a spring green but not as bright as neon. It’s ideal for projects where you need a somewhat energetic color scheme.

Guppie Green
Hex #00FF7F
RGB 0, 255, 127
CMYK 100, 0, 50, 0

Apple Green
Despite the similar names, this is a different color from Granny Smith Apple. Apple Green is a little bit darker, and it closely resembles the color of green apples seen in cartoons.

Apple Green
Hex #8DB600
RGB 141, 182, 0
CMYK 23, 0, 100, 29

Deep Green
The name of Deep Green is largely self-explanatory. Its close blue/yellow balance makes it a fairly classic green, and the relatively high percentage of black gives it a “deeper” look, as if it were a deep pool of green. It manages to look deep without being overly dark.

Deep Green
Hex #056608
RGB 5, 102, 8
CMYK 95, 0, 92, 60

Hooker’s Green
Hooker’s Green originally was a pigment designed by botanical illustrator William Hooker, who needed an accurate dark green to paint large amounts of foliage. It was made by combining gamboge and Prussian blue. The color is still often produced, although it’s rarely made with natural pigments.

Hooker’s Green
Hex #49796B
RGB 73, 121, 107
CMYK 40, 0, 12, 53

Medium Sea Green
Like Dark Sea Green, Medium Sea Green is a variant of the very popular Sea Green. This is a beautiful, jade-like green that looks a bit like clear, blue-green ocean water. The color is deep yet cool, making it very centering to look at.


Medium Sea Green
Hex #3CB371
RGB 60, 179, 113
CMYK 66, 0, 37, 30

Turquoise Green
You probably know turquoise as a blue color, but turquoise green is a pretty and uncommon version. Turquoise Green is a very light bluish green. And as you can see from the CMYK values, it is mostly blue. However, the addition of some yellow and some black makes it a uniquely beautiful, pastel-like color.

Turquoise Green
Hex #A0D6B4
RGB 160, 214, 180
CMYK 25, 0, 16, 16
////////////////////////////////////////////////// End of green

////////////////////////////////////////////////////// Blue
Turquoise
Turquoise is a color that is related to the gemstone of the same name. Turquoise also has many different variations to it as listed below. It ranges from Celeste, which is a sky blue variation of turquoise, to light turquoise and then turquoise blue, which is a bluer version of turquoise. There is also medium turquoise, dark turquoise, and bright turquoise.


Turquoise
Hex #40E0D0
RGB 64, 224, 208
CMYK 71, 0, 7, 12

Celeste
Hex #B2FFFF
RGB 178, 255, 255
CMYK 30, 0, 0, 0

Light turquoise
Hex #AFEEEE
RGB 175, 238, 238
CMYK 26, 0, 0, 7

Turquoise blue
Hex #00FFEF
RGB 0, 255, 239
CMYK 100, 0, 6, 0

Medium turquoise
Hex #48D1CC
RGB 72, 209, 204
CMYK 66, 0, 2, 18

Dark turquoise
Hex #00CED1
RGB 0, 206, 209
CMYK 100, 1, 0, 18


Bright turquoise
Hex #08E8DE
RGB 8, 232, 222
CMYK 97, 0, 4, 9

Powder Blue
Powder blue is a very pale shade of blue. In the 1650s powder blue was primarily used to refer to cobalt glassware that was used in laundering and dying fabrics, until it became an official color name in 1894. Although in the past, the hue on the cobalt glassware had a much darker blue hue to it compared to the paleness of powder blue. Powder blue is typically used in web development projects.

Powder blue
Hex #B0E0E6
RGB 176, 224, 230
CMYK 23, 3, 0, 10

Sky Blue
Sky blue is often referred to as light blue, baby blue, or even angle blue. Sky blue is used in a variety of modern-day applications, ranging from being used in historical atlases to color code Germany and being used in Western culture to represent boys (though historically this color was used in the past to represent girls). Sky blue is also used for the national flags of various nations such as Argentina, the Bahamas, Botswana, Fiji, and more.

Sky blue is also a popular color to use in interior design as the color promotes a sense of calmness, relaxation, and water.

Sky blue
Hex #ADD8E6
RGB 173, 216, 230
CMYK 25, 6, 0, 10


Electric Blue
Electric blue is a hue of blue in which the defining characteristics of it varies. It’s a color that represents the bright glow of lightning and electric sparks, as well as the color of ionized argon gas. Electric blue originally got its name due to ionized air glow that is produced during electrical discharges. This definition has changed over the years to include blues that have an “electric” appearance due to their intense and vibrant looks. In popular culture, electric blue is associated with the star sign Aquarius.

Electric blue
Hex #7DF9FF
RGB 125, 249, 255
CMYK 51, 2, 0, 0

Air Force Blue
Air Force blue is a variety of colors that are different tones of azure, another shade of blue, that is primarily used in the United States Air Force (USAF), the Air Force Academy, as well as the Royal Air Force (RAF) uniforms, but various other hues of Air Force blue are utilized in different nations air forces as well.

Air Force blue (RAF)
Hex #5D8AA8
RGB 93, 138, 168
CMYK 45, 18, 0, 34

Air Force blue (USAF)
Hex #00308F
RGB 0, 48, 143
CMYK 100, 66, 0, 44

US Air Force Academy blue
Hex #004F98
RGB 0, 79, 152
CMYK 100, 48, 0, 40


Baby Blue
Baby blue is used as the official color for the national flag of Argentina. It’s a palish tint of azure and is considered a pastel color. It has many different variations, ranging from beau blue, which gets its name from the word “beautiful” in French, to baby blue, and little boy blue.

Beau blue
Hex #BCD4E6
RGB 188, 212, 230
CMYK 18, 8, 0, 10

Baby blue
Hex #89CFF0
RGB 137, 207, 240
CMYK 43, 14, 0, 6

Baby Blue Eyes
Hex #A1CAF1
RGB 161, 202, 241
CMYK 33, 16, 0, 5

Little Boy blue
Hex #6CA0DC
RGB 108, 160, 220
CMYK 51, 27, 0, 14

Tiffany Blue
Besides being a great name for a little girl, Tiffany blue is associated with the light-medium robin egg blue color that is mostly used in Tiffany & Co. jewelry created by the company. The color was officially used in 1845 in the cover of the company’s first-ever Tiffany’s Blue Book. After that period Tiffany blue has been used in promotional materials by the company, such as boxes and bags. Since 1998, Tiffany blue has been used as the color trademark for the company.


Tiffany blue
Hex #81D8D0
RGB 129, 216, 208
CMYK 40, 0, 4, 15

Steel Blue
Steel blue is renowned for its darker appearance as it is a shade of blue that resembles blue steel or steel that has undergone the process of bluing in order to protect the metal from rust. Steel blue is a less vibrant shade of blue and is often considered to be a bluish-grey color.

Steel blue is used in a variety of sports team’s uniforms and on stadiums. Ranging from being used in the uniforms of the Houston Texans football team, to the Lehigh Valley IronPigs or even the Colorado Avalanche hockey team.

Steel blue
Hex #4682B4
RGB 70, 130, 180
CMYK 61, 28, 0, 29

Carolina Blue
Carolina blue is a shade of blue that is used as the official school colors of the University of North Carolina, a place where Carolina blue is also referred to as Tar Heel blue.

Carolina blue
Hex #4B9CD3
RGB 75, 156, 211
CMYK 64, 26, 0, 17

Turkish Blue
Turkish blue is a shade of blue that has a gray-purple tinge to it, yet it is lighter and more vibrant compared to a navy blue.


Turkish blue
Hex #4F97A3
RGB 79, 151, 163
CMYK 52, 7, 0, 36

Maya Blue
Maya blue was and still is a unique shade of bright azure blue. In many pre-Columbian Mesoamerican cultures, Maya blue was a manufactured pigment that was used in many cultures, such as the Mayan or the Aztecs.

Maya blue is made up of organic and inorganic materials. Primarily indigo dyes that are created from the leaves of Indigofera suffruticosa plants, that are then combined with natural clay and other mineral additives.

Historically, Maya blue was recorded to have first appeared in the 800s and was still used up to the 1500s in several convents located in Colonial Mexico, where Maya blue was mainly used in paintings.

Maya blue has shown properties that showcase resistance to weathering, as many paintings that were done with the color haven’t faded despite being exposed to the weather and time.

Maya blue
Hex #73C2FB
RGB 115, 194, 251
CMYK 54, 23, 0, 2

Teal
Teal is a blue-green color that derives its name from the common teal bird. Teal also happens to be the official color of ovarian cancer awareness.

Teal
Hex #008080
RGB 0, 128, 128
CMYK 100, 0, 0, 50


Independence Blue
Independence blue is a dark grayish-blue color that was first utilized in 1927.

Independence blue
Hex #4C516D
RGB 76, 81, 109
CMYK 30, 26, 0, 57

Cornflower Blue
Cornflower blue is a shade of medium blue that contains very little pigments of green compared to other shades of blue. Sapphire gems that have a much higher value are referred to as cornflower blue, as they have a medium-dark bluish-violet tone to them.

Cornflower blue was considered to be the favorite hue of famous Dutch painter, Johannes Vermeer. In 1958, Crayola introduced cornflower blue into their products as an official color.

Cornflower blue
Hex #6495ED
RGB 100, 149, 237
CMYK 58, 37, 0, 7

Sapphire Blue
Sapphire blue is a nod to the gemstone of the same name, as sapphire gems are commonly found in various shades of blue, although some sapphire gems can be found in other colors. Sapphire blue is a saturated hue of blue and has many variations to it, such as medium sapphire and B’dazzled blue, which is a color that was introduced in 2001 for Crayola’s Metallic FX series. Blue sapphire and dark sapphire are other kinds of sapphire blue.

Sapphire blue
Hex #0F52BA
RGB 15, 82, 186
CMYK 92, 56, 0, 27


Medium Sapphire
Hex #2D5DA1
RGB 45, 93, 161
CMYK 72, 42, 0, 37

B’dazzled blue
Hex #2E5894
RGB 46, 88, 148
CMYK 69, 41, 0, 42

Blue Sapphire
Hex #126180
RGB 18, 97, 128
CMYK 86, 24, 0, 50

Dark Sapphire
Hex #082567
RGB 8, 37, 103
CMYK 92, 64, 0, 60

Azure
Azure is a bright blue color that is often used to describe the color of the sky when it’s clear.

Azure
Hex #007FFF
RGB 0, 127, 255
CMYK 100, 50, 0, 0

Egyptian Blue
Egyptian blue is a pigment of blue that was primarily used in ancient Egypt for thousands of years. It’s a synthetic pigment that was also introduced to the Romans at some point in time, but soon fell out of use after the Roman era. The manner in which Egyptian blue was produced has been lost to history.


However, with modern technology scientists have discovered that due to Egyptian blues properties of absorbing visible light, the color can prove useful in applications for construction materials that are designed to cool down rooftops or walls in particularly sunny climates.

Egyptian blue
Hex #1034A6
RGB 16, 52, 166
CMYK 90, 69, 0, 35

Yale Blue
Yale blue is a particular shade of dark azure that is primarily used in an official capacity at Yale University.

Yale blue
Hex #00356B
RGB 0, 53, 107
CMYK 100, 50, 0, 58

Navy Blue
Navy blue is a shade of blue that was named after the dark blue uniforms worn by officers of the British Royal Navy and has been in use since 1748, despite the color being later adopted by other nations’ navy forces.

Navy blue
Hex #000080
RGB 0, 0, 128
CMYK 100, 100, 0, 50

Prussian Blue
Prussian blue is a dark blue synthetic pigment that is produced via oxidizing ferrous ferrocyanide salts. It is also referred to as Berlin blue or Parisian blue. Prussian blue has many uses, some of which include in paintings, as the color isn’t solvable in water. It was famously used in Japanese woodblock prints.

Prussian blue also has a medicinal effect as an antidote for certain kinds of heavy metal poisonings, such as thallium and cesium.

Prussian blue
Hex #003153
RGB 0, 49, 83
CMYK 100, 41, 0, 67

Space Cadet
Often referred to as space cadet blue, it’s a color that is popular in Australia and New Zealand and was invented in 2007.

Space Cadet
Hex #1D2951
RGB 29, 41, 81
CMYK 64, 49, 0, 68

Royal Blue
Royal blue is a color that contains many hues of azure blue. Claimed to have been invented by millers in Rode, Somerset located in England, some of whom won a competition to make a dress for Queen Charlotte, the consort of King George III, that utilized the color. Some variations of the color include the traditional royal blue, queen blue, and imperial blue.

Traditional Royal blue
Hex #002366
RGB 0, 35, 102
CMYK 100, 66, 0, 60

Queen blue
Hex #436B95
RGB 67, 107, 149
CMYK 55, 28, 0, 42

Imperial blue
Hex #005A92
RGB 0, 90, 146
CMYK 100, 38, 0, 43

Periwinkle
Getting its name from the Periwinkle flower, it’s a lighter tone of blue that is often considered to be a lavender blue.

Periwinkle
Hex #CCCCFF
RGB 204, 204, 255
CMYK 20, 20, 0, 0

Morning Blue
Morning blue is said to be a representation of the morning sky.

Morning blue
Hex #8DA399
RGB 141, 163, 153
CMYK 13, 0, 6, 36

Uranian Blue
Uranian blue is a color that gets its name from the unique blue hue of the planet Uranus.

Uranian blue
Hex #AFDBF5
RGB 175, 219, 245
CMYK 29, 11, 0, 4

Fluorescent Blue
Fluorescent blue is a radiant blue that is based on fluorescence. It also serves as the main color for the Indian 50-rupee note.

Fluorescent blue
Hex #15F4EE
RGB 21, 244, 238
CMYK 91, 0, 2, 4

Ruddy Blue
Ruddy blue gets its name from the unique colored beak of the ruddy duck. It’s a lighter shade of azure blue.

Ruddy blue
Hex #76ABDF
RGB 118, 171, 223
CMYK 47, 23, 0, 13

Admiral Blue
Admiral Blue is a medium dark blue navy color. It takes its name from the “Admiral of the Blue” rank in the United Kingdom’s Royal Navy. Although this rank was officially abolished in 1864, its command flag bore that same distinctive blue color.

Admiral Blue
Hex #2C3863 
RGB 44, 56, 99
CMYK 56, 43, 0, 61

Aegean Blue
Aegean Blue is a muted blue color that looks almost gray in the right lights. Although it may be murkier than the stretch of the Mediterranean Sea from which it takes its name, it’s still strongly reminiscent of the sea during a storm.

Aegean Blue
Hex #4E6E81
RGB 78, 110, 129
CMYK 40, 15, 0, 49

Aero Blue
Technically a member of the green color family, Aero Blue looks more like a very pale shade of teal. This color tends to be used for a lot of health marketing and environmentally friendly advertising movement thanks to its soft, greenish blue hue.

Aero Blue
Hex #C9FFE5
RGB 201, 255, 229
CMYK 21, 0, 10, 0

Air Superiority Blue
One of the many official colors of the United States Air Force, Air Superiority Blue is a blue-gray shade that was officially adopted by the USAF in 1956. It’s usually used for federal engineering and military contractor projects as well as airplane design.

Air Superiority Blue
Hex #72A0C1
RGB 114, 160, 193
CMYK 41, 17, 0, 24

Alice Blue
So pale that it almost looks white, Alice Blue is named after the title character in Lewis Carrol’s Alice’s Adventures in Wonderland. The dress Alice wears in the 1951 animated film is closer to true blue, but the association is still there.

Alice Blue
Hex #F0F8FF
RGB 240, 248, 255
CMYK 6, 3, 0, 0

Aqua Blue
Very close in color to a true cyan blue, Aqua Blue is just a little bit brighter. This color is often associated with swimming pools, beach parties, and other water-themed or aquatic influences due to its bright, cheerful tone and vivid summertime hues.

Aqua Blue
Hex #0AFFFF
RGB 10, 255, 255
CMYK 96, 0, 0, 0

Aquamarine Blue
In nature, aquamarine is a specific type of beryl. The color Aquamarine Blue takes its name from that gemstone and is somewhere between blue and green. It dates all the way back to 1598, when it was first recorded.

Aquamarine Blue
Hex #6BCAE2
RGB 107, 202, 226
CMYK 53, 11, 0, 11

Arctic Blue
With its pale icy tone and muted blue shades, the coolly soothing Arctic Blue draws its inspiration from the icy waters of the Arctic circle, as well as the bright white reflections of the snow and ice that float upon those same waters.

Arctic Blue
Hex #C6E6FB
RGB 198, 230, 251
CMYK 21, 8, 0, 2

Argentina Blue
Argentina Blue is a bright light blue. While some claim that the two stripes on the flag of Argentina represent the color of the Argentinian sky, from a historical perspective, it’s far more likely that the colors were chosen to show loyalty to a specific royal house.

Argentina Blue
Hex #6CB4EE
RGB 108, 180, 238
CMYK 55, 24, 0, 7

Astros Navy
It may not be a color you’re likely to find in a typical color palette, but Astros Navy is a dark, bold navy blue that serves as one of the official colors of the Houston Astros baseball team, originally named the Colt .45s in 1961.

Astros Navy
Hex #002D62
RGB 0, 45, 98
CMYK 100, 54, 0, 62

Bayern Blue
Bayern Munich, FC Bayern, or FCB is a German football club that is widely considered to be the most successful football team in German history. The club’s official colors are blue and white with a specific shade of blue that sets FC Bayern apart.

Bayern Blue
Hex #0066B2
RGB 0, 102, 178
CMYK 100, 43, 0, 30

Berry Blue
While most “blue” berries tend to look closer to purple or even black in color, Berry Blue is a little closer in hue to what we often consider “blue raspberry” flavored candies, drinks, or foods. It’s a bright blue with purple undertones running throughout.

Berry Blue
Hex #4F86F7
RGB 79, 134, 247
CMYK 68, 46, 0, 3

Blue
True blue is actually relatively uncommon. While what we think of as “blue” may vary based on our personal preferences, the base color of blue is a bright, vivid tone that has no red or green undertones present to block the blue tones from shining.

Blue
Hex #0000FF
RGB 0, 0, 255
CMYK 100, 100, 0, 0

Blue Yonder
Blue Yonder is a dark blue color that has green and gray undertones. It draws its inspiration from the open sky, although the sky portrayed by this color may be slightly less cheerful than the bright, sunny “sky blue” that may be more familiar.

Blue Yonder
Hex #5072A7
RGB 80, 114, 167
CMYK 52, 32, 0, 35

Bleu de France Blue
As early as the 12th century CE, Bleu de France has been used to represent France, its people, and its once-sovereign royal family. Today, the color is most commonly seen in French motorsports, tearing around the track at Formula One racing events.

Bleu de France Blue
Hex #318CE7
RGB 49, 140, 231
CMYK 79, 39, 0, 9

Blue-Gray
As the name might suggest, Blue-Gray is a color that straddles the line between true blue and true gray. The result is a muted, slightly darker color that rounds out some of the harsh brightness of a true or neon blue for a more soothing effect.

Blue-Gray
Hex #6699CC
RGB 102, 153, 204
CMYK 50, 25, 0, 20

Boeing Blue
Founded in 1916, The Boeing Company has been a major powerhouse in aerospace design and occasional weapons manufacturing for more than a hundred years. Throughout the decades, Boeing’s trademarked blue label has been behind serious technological innovations in the public and private sectors alike.

Boeing Blue
Hex #0039A6
RGB 0, 57, 166
CMYK 100, 66, 0, 35

Braves Navy
The Atlanta Braves were originally founded in Boston in 1871 and claim to be the oldest operating professional sports franchise in the US. That may be true, but what is true is that their characteristic blue and red logo is recognized nationwide.

Braves Navy
Hex #13274F
RGB 19, 39, 79
CMYK 76, 51, 0, 69

Brewers Blue
The Milwaukee Brewers, another professional baseball team with a predominately navy blue color scheme, were originally founded in Seattle in 1969. Since then, they’ve moved across the country to their current home in Wisconsin, where they seem poised to stay for a long time.

Brewers Blue
Hex #0A2351
RGB 10, 35, 81
CMYK 88, 57, 0, 68

Broncos Blue
Moving over to the world of professional football, the Denver Broncos have been one of the most successful teams in the NFL since 1975, accompanied throughout each major win and loss by the dark navy and bright orange colors of their helmets and uniforms.

Broncos Blue
Hex #002244
RGB 0, 34, 68
CMYK 100, 50, 0, 73

Byzantine Blue
The art of the Byzantine Empire was marked by vivid colors and expressive imagery, so it should come as no surprise that Byzantine Blue should have that same characteristic brightness that helped establish the impact of the empire that gave this color its name.

Byzantine Blue
Hex #3457D5
RGB 52, 87, 213
CMYK 76, 59, 0, 16

Cambridge Blue
Sports teams from the University of Cambridge in England, Cambridge Blue is a pale bluish green that is most often seen on members of Cambridge’s University Boat Club. The color has been in use since 1862, although the exact shade has shifted throughout time.

Cambridge Blue
Hex #A3C1AD
RGB 163, 193, 173
CMYK 16, 0, 10, 24

Capri Blue
Named after the dazzling skies and seas that surround the island of Capri off the coast of southern Italy, Capri Blue is a bright, brilliant blue that has an almost jewel-toned glow to it. It’s vivid, cheerful, and leaves you longing for the open seas.

Capri Blue
Hex #00BFFF
RGB 0, 191, 255
CMYK 100, 25, 0, 0

Cerulean Blue
Cerulean Blue was first recorded as a color back in 1590. The color’s name derives from the Latin word caelum, meaning heaven or sky, and it was heavily favored by Impressionist painters during the late 1800’s.

Cerulean Blue
Hex #2A52BE
RGB 42, 82, 190
CMYK 78, 57, 0, 25

Chelsea Blue
The colors of the Chelsea Football Club are red, gold, and blue. The specific shade of blue used by the club is a little closer to a dark blue than true blue, but it’s not quite dark enough to be considered a navy blue.

Chelsea Blue
Hex #034694 
RGB 3, 70, 148 
CMYK 98, 53, 0, 42

Chlorine Blue
If you’ve ever been in a pool for long hours, you’re probably familiar with the bright blue tones of Chlorine Blue. Although chlorine in swimming pools is usually diluted enough to be pretty pale, chlorine blue still hearkens back to those long summer days.

Chlorine Blue
Hex #0CAFFF 
RGB 12, 175, 255 
CMYK 95, 31, 0, 0

Cobalt Blue
Cobalt blue has been called “the color of the millennium” by major paint companies and is a popular choice for artists and interior decorators alike. However, some studies suggest that the specific compound used to produce this color may have some dangerous side effects.

Cobalt Blue
Hex #0047AB 
RGB 0, 71, 171 
CMYK 100, 58, 0, 33

College Navy
College Navy is named for its use by many collegiate sports teams across the nation. While it may be linked to university teams, it’s also one of the official colors of the Seattle Seahawks. As a result, it’s most closely associated with that team.

College Navy
Hex #002244
RGB 0, 34, 68
CMYK 100, 50, 0, 73

Columbia Blue
Named after Columbia University, Columbia Blue actually predates the color classification system and had to be prescribed a designation once that system came into being. It’s the official color of the oldest student organization at Columbia University, the Philolexian Society, founded in 1802.

Columbia Blue
Hex #B9D9EB 
RGB 185, 217, 235
CMYK 21, 8, 0, 8

Crayola Blue
Technically speaking, Crayola LLC produces crayons in a wide variety of colors, including multiple shades of blue. This particular shade, however, was first pioneered by the Crayola crayon manufacturing division.

Crayola Blue
Hex #1F75FE 
RGB 31, 117, 254
CMYK 88, 54, 0, 0

Cyan Blue
Cyan Blue is the closest to “real” or genuine blue as most digital screens or computers can get. The C in CMYK stands for “cyan” and measures the amount of cyan blue present in any shade or color, which means that this is as blue as it gets.

Cyan Blue
Hex #00FFFF
RGB 0, 255, 255
CMYK 100, 0, 0, 0

Dallas Cowboys Blue
The Dallas Cowboys are a professional football team located in Dallas Texas. Walk into most general stores in the Dallas-Fort Worth area, and you’ll probably see a wide array of products in this dark blue color year-round.

Dallas Cowboys Blue
Hex #041E42
RGB 4, 30, 66
CMYK 94, 55, 0, 74

Dark Blue
Technically the same shade as “real” blue, except darker, Dark Blue provides a more somber approach to the blinding brightness of standard blue tones.

Dark Blue
Hex #00008B
RGB 0, 0, 139
CMYK 100, 100, 0, 45

Delft Blue
Delft Blue refers to the specific shade of blue that is often found on Dutch glazed earthenware. Named after the city in the Netherlands that specialized in this craft, Delft Blue originally got its color from various cobalt pigments that were applied in glazes.

Delft Blue
Hex #1F305E
RGB 31, 48, 94
CMYK 67, 49, 0, 63

Dell Blue
A lot of tech companies use blue as their main color, and Dell is no exception. The computer juggernaut has been using this warm shade of blue in its logos and advertising since the company was founded back in a college dorm in 1984.

Dell Blue
Hex #0076CE
RGB 0, 118, 206
CMYK 100, 43, 0, 19

Denim Blue
Most of us have a favorite pair of jeans that we love to wear, and we all know that the colors of those jeans can vary pretty widely. Nevertheless, Denim Blue is often considered the “classic” color for those sturdy, dependable articles of clothing.

Denim Blue
Hex #1560BD 
RGB 21, 96, 189
CMYK 89, 49, 0, 26

Dodgers Blue
Based in Los Angeles but originally hailing from New York, the Dodgers have long been one of the most famous and well-known baseball teams in the United States. Dodgers Blue is a nod to that heritage, as the color has stayed the same for generations.

Dodgers Blue
Hex #005A9C
RGB 0, 90, 156
CMYK 100, 42, 0, 39

Dolphins Aqua
Switching back over to football, the Miami Dolphins have a particularly unique shade of blue as one of their official colors, with a distinctive green tone to set it apart from other teams.

Dolphins Aqua
Hex #008E97
RGB 0, 142, 151
CMYK 100, 6, 0, 41

Duck Blue
Obviously ducks themselves are not blue, but if you’ve ever seen a common duck making their way around your neighborhood, you’ve probably noticed the unique blue-green colors that the male ducks in particular often spot among their feathers.

Duck Blue
Hex #007791
RGB 0, 119, 145
CMYK 100, 18, 0, 43

Duke Blue
Duke University was originally founded in 1838, but it moved to a different city in 1892 and underwent a name change in 1938. The characteristic dark blue color of its sports teams and advertising, however, has remained largely unchanged throughout its history.

Duke Blue
Hex #012169
RGB 1, 33, 105
CMYK 99, 69, 0, 59

Electric Indigo
Anything with “electric” in its name promises to be a little bit more vibrant than the rest of its peers, and Electric Indigo certainly doesn’t disappoint. Despite having a definite purple tone to it, Electric Indigo is brighter, more vivid, and humming with energy.

Electric Indigo
Hex #6F00FF
RGB 111, 0, 255
CMYK 56, 100, 0, 0

Everton Blue
Everton FC is a British football club based in Liverpool, England. The striking blue notes of its official logo can be seen in the kits and jerseys of its team members.

Everton Blue
Hex #003399
RGB 0, 51, 153
CMYK 100, 67, 0, 40

Facebook Blue
If you’ve ever spent too much time in front of the computer, odds are pretty good that you’re familiar with this specific shade of blue. Facebook Blue is often considered one of the most instantly recognizable shades of blue found around the world today.

Facebook Blue
Hex #1877F2
RGB 24, 119, 242
CMYK 90, 51, 0, 5

Ford Blue
It may not be as instantly recognizable as Facebook’s shade of blue, but Ford Motor Company has built its brand on the solid, muted dark blue that today adorns all of its trucks. Look for Ford Blue next time you’re out for a drive.

Ford Blue
Hex #2C3968 
RGB 44, 57, 104
CMYK 58, 45, 0, 59

General Motors Blue
Dark blue seems to be a popular choice among car companies, as General Motors has long used a very similar shade to Ford Blue in the production and advertisement of its own vehicles. They may look extremely similar, but GM Blue is noticeably lighter.

General Motors Blue
Hex #073980
RGB 7, 57, 128
CMYK 95, 55, 0, 50

Glaucous Blue
Glaucous Blue takes its name from the Latin glaucus, which means grayish blue or gray. This color is most often used to describe various sea creatures, including the feathers of various sea birds or some terrestrial plants.

Glaucous Blue
Hex #6082B6
RGB 96, 130, 182
CMYK 47, 29, 0, 29

IBM Blue
Heading back to the world of tech giants, IBM has long been a heavy hitter in the world of technological innovation. While flashier companies may have stolen some of their thunder in recent years, IBM and its distinctive blue logo remain a force to be reckoned with.

IBM Blue
Hex #0530AD 
RGB 5, 48, 173
CMYK 97, 72, 0, 32

Ice Blue
Ice, essentially the solid or mineral form of water, doesn’t automatically have any real color to it. Thanks to its highly reflective nature, however, what we consider to be Ice Blue is usually closer to Sky Blue.

Ice Blue
Hex #99FFFF 
RGB 153, 255, 255
CMYK 40, 0, 0, 0

Indigo Blue
Today, what we call Indigo Blue is very different from what the ancient Romans would have considered indigo. While “our” Indigo Blue refers to the pigment itself, the ancient Romans and other civilizations considered the dark blue, almost black color that results when indigo is used as a dye to be “true” indigo.

Indigo Blue
Hex #3F00FF
RGB 63, 0, 255
CMYK 75, 100, 0, 0

Indigo Dye Blue
Related to the above, while the pigment of indigo is a bright, soft blue, the color resulting from its use as a dye is a dark, rich blue that looks purple in some lights and black in others.

Indigo Dye Blue
Hex #00416A 
RGB 0, 65, 106
CMYK 100, 39, 0, 58

Intel Blue
Intel Blue is the color used by the international tech giant, Intel. In late 2020, Intel changed their logo so that most of the font is black, but the dot over the “i” still retains that characteristic blue color.

Intel Blue
Hex #0071C5 
RGB 0, 113, 197
CMYK 100, 43, 0, 23

International Klein Blue
International Klein Blue is a color that was developed and copyrighted by French artist Yves Klein. With its vibrant hue and bold presence, the color appears in multiple works throughout the artist’s career, most noticeably in a series of sculptures.

International Klein Blue
Hex #002FA7 
RGB 0, 47, 167
CMYK 100, 72, 0, 35

Iris Blue
Iris Blue is actually a little bit darker than the color of the blue irises you’ll find growing in nature. Nevertheless, the soft, deep blue with hints of purple undertones is strongly reminiscent of the small flowers that grow around the world in various countries.

Iris Blue
Hex #5A4FCF
RGB 90, 79, 207
CMYK 57, 62, 0, 19

KC Royals Blue
The Kansas City Royals are an American baseball team that have their home in Kansas City, Missouri. Their colors are dark blue and gold, as befits their royal or noble theme, and they’ve stuck to the same color scheme for more than fifty years.

KC Royals Blue
Hex #004687
RGB 0, 70, 135
CMYK 100, 48, 0, 47

Lapis Blue
Lapis lazuli isn’t considered a gemstone, but it is a precious stone found in nature, often with small flecks of gold standing out against the deep blue. Lapis Blue takes its name from this dark blue stone, once a favorite of Egyptians and Europeans alike.

Lapis Blue
Hex #26619C 
RGB 38, 97, 156
CMYK 76, 38, 0, 39

Liberty Blue
Liberty Blue, much like Independence Blue, is a deep blue color with cold undertones and an almost steely finish. Liberty Blue, however, is most often used to decorate plates, cups, and other decorative earthenware for a stark blue and white finished product.

Liberty Blue
Hex #545AA7
RGB 84, 90, 167
CMYK 50, 46, 0, 35

Lowes Blue
Lowes is one of two major home improvement stores found throughout the United States. Their logo, found in major cities and small towns alike, is comprised of white font against the dramatic backdrop of a dark blue background.

Lowes Blue
Hex #004792
RGB 0, 71, 146
CMYK 100, 51, 0, 43

Magic Blue
No one really knows how Magic Blue got its name. Perhaps it’s because the calm notes of this slightly muted blue hue carry a soothing, restorative quality, or perhaps it’s only because of its association with magic users in popular media around the world.

Magic Blue
Hex #0077C0 
RGB 0, 119, 192
CMYK 100, 38, 0, 25

Majorelle Blue
Majorelle Blue is a stunningly bright blue named after the French artist Jacques Majorelle, who drew inspiration from Moroccan art and architecture and trademarked the color as his own invention.

Majorelle Blue
Hex #6050DC
RGB 96, 80, 220
CMYK 56, 64, 0, 14

Marian Blue
Marian Blue is a pale, glowing blue that takes its name from its association with the Virgin Mary. In medieval art, Mary was often depicted wearing a light blue to symbolize purity as well as her importance, as blue was typically reserved for those of high rank in the Byzantine Empire.

Marian Blue
Hex #E1EBEE 
RGB 225, 235, 238
CMYK 5, 1, 0, 7

Mavericks Blue
The Dallas Mavericks are a Texas-based basketball team whose colors are dark blue, white, and black, although their uniforms were a bright green when they were first founded.

Mavericks Blue
Hex #00538C
RGB 0, 83, 140
CMYK 100, 41, 0, 45

Medium Blue
Not as dark as dark blue or as vivid as regular blue, Medium Blue is a variation that lands somewhere in the middle for a muted, but still brilliant color.

Medium Blue
Hex #0000CD
RGB 0, 0, 205
CMYK 100, 100, 0, 20

Medium Slate Blue
Slate Blue, as we’ll discuss later, is named after a gray-blue stone found throughout Europe. Medium Slate Blue dials up the blue tones of the typical slate color and results in a brighter and far more lively hue with subtle purple and gray undertones.

Medium Slate Blue
Hex #7B68EE
RGB 123, 104, 238
CMYK 48, 56, 0, 7

Millennium Blue
Millennium Blue is another deep blue color that’s dark enough to almost pass as black. The color puts the viewer in mind of the vastness of space and the time required to reach even our closest neighbors in the solar system.

Millennium Blue
Hex #002244
RGB 0, 34, 68
CMYK 100, 50, 0, 73

Munsell Blue
Munsell Blue is named after Albert Henry Munsell, an artist, inventor, and teacher who developed an early system for classifying colors. Although the Pantone system is more widely used today, Munsell Blue bears its name in honor of this early pioneer.

Munsell Blue
Hex #0093AF
RGB 0, 147, 175
CMYK 100, 16, 0, 31

Neon Blue
Neon Blue is a staple of late-night diners and interior design portfolios alike. It’s bright, cool, and gives a sense of energy and vibrancy to what could otherwise be just another shade of blue.

Neon Blue
Hex #4D4DFF
RGB 77, 77, 255
CMYK 70, 70, 0, 0

Non-Photo Blue
Non-photo blue is a pale shade of light blue that is commonly used by graphic artists, traditional artists, and layout editors for one simple reason: it doesn’t show up on most camera films. As a result, it can be used to make edits which will virtually disappear once photographed.

Non-Photo Blue
Hex #A4DDED
RGB 164, 221, 237
CMYK 31, 7, 0, 7

Ocean Blue
Technically, the ocean has no true color of its own. If you’ve ever scooped some seawater up in your hand, you know that the only color of the sea is the reflection of the sky above. Ocean Blue, however, is the bluish green hue that we tend to think of as “ocean colored”.

Ocean Blue
Hex #009DC4 
RGB 0, 157, 196
CMYK 100, 20, 0, 23

Oxford Blue
The official color of the University of Oxford in the UK, Oxford Blue is a bold, dramatic blue tone that has been a part of the university’s branding since 1829.

Oxford Blue
Hex #002147
RGB 0, 33, 71
CMYK 100, 54, 0, 72

Paris Saint-Germain (PSG) Blue
Paris Saint-Germain or PSG is a Parisian football club that competes in the top league of French football. Their colors are dark blue, red, and gold.

PSG Blue
Hex #004170 
RGB 0, 65, 112
CMYK 100, 42, 0, 56

Pacific Blue
The Pacific Ocean often has many different shades of blue lurking within its depths. Nevertheless, Pacific Blue, as a color, evokes the slightly green-tinged, slightly gray-tinged waters and waves that are often seen glinting beneath the sun’s rays.

Pacific Blue
Hex #1CA9C9 
RGB 28, 169, 201
CMYK 86, 16, 0, 21

Pantone Blue
Pantone Blue is a bright, almost electric blue color that shares its name with the Pantone Matching System, the system used to classify and organize every shade of color known and recorded by traditional artists, graphic artists, and fashion designers.

Pantone Blue
Hex #0018A8 
RGB 0, 24, 168
CMYK 100, 86, 0, 34

Peacock Blue
Peacocks have long been treasured and admired for their brilliant plumage and dazzling display of color. True to its inspiration, Peacock Blue has some definite green notes running throughout.

Peacock Blue
Hex #005F69 
RGB 0, 95, 105
CMYK 100, 10, 0, 59

Penn Blue
The University of Pennsylvania picked its official school colors in 1910, but they were using what we know today as Penn Blue much earlier than that. The dark, bold blue has long been a staple of the university’s prestige and influence.

Penn Blue
Hex #011F5B
RGB 1, 31, 91
CMYK 99, 66, 0, 64

Persian Blue
Persian Blue is named after the color favored by a lot of early Persian artists. In particular, Persian Blue is found in a lot of pottery and ceramic artwork and is a bright, vivid blue that was often associated with lapis lazuli.

Persian Blue
Hex #1C39BB
RGB 28, 57, 187
CMYK 85, 70, 0, 27

Phthalo Blue
Phthalo Blue is a synthetic pigment that is used in inks, plastics, and other industrial settings. It’s also used in a lot of lab settings, where the bright blue color is used as an indicator that a reaction has occurred.

Phthalo Blue
Hex #000F89 
RGB 0, 15, 137
CMYK 100, 89, 0, 46

Picotee Blue
The word “picotee” technically refers to any flower that’s got an “outline” around the edges of its petals that’s different from the rest of the flower’s color. However, as it’s often associated with Morning Glory flowers, Picotee Blue has the soft purplish-blue of those blooms.

Picotee Blue
Hex #2E2787
RGB 46, 39, 135
CMYK 66, 71, 0, 47

Polynesian Blue
Polynesian Blue is a dark shade of blue that takes its name from the deep waters surrounding the Polynesian Islands, including Hawaii, New Zealand, and American Samoa.

Polynesian Blue
Hex #224C98
RGB 34, 76, 152
CMYK 78, 50, 0, 40

Resolution Blue
Resolution Blue gets its name from a bizarre set of legal proceedings. In 2005, the Blue Lacy dog was approved as the state dog of Texas following the introduction of Senate Resolution No. 436. While the dog itself is closer to gray than blue, Resolution Blue stuck around as a reminder of the legislation that got the dog on the floor.

Resolution Blue
Hex #002387
RGB 0, 35, 135
CMYK 100, 74, 0, 47

Robin Egg Blue
Robin’s eggs are some of the few distinctively blue objects found in nature, and the eye-catching color of those little eggs has left an indelible mark upon the human imagination.

Robin Egg Blue
Hex #00CCCC
RGB 0, 204, 204
CMYK 100, 0, 0, 20

Savoy Blue
Savoy Blue is a bright, rich blue color that was historically associated with the House of Savoy, a ruling dynasty in what is today Italy. While the House of Savoy was officially deposed in 1946, the color remains as a reminder of Italy’s rich monarchic heritage.

Savoy Blue
Hex #4B61D1
RGB 75, 97, 209
CMYK 64, 54, 0, 18

Slate Blue
Slate Blue is named after slate, a type of volcanic rock that is found in large quantities in Spain and other parts of Europe. This stone fractures easily into plates or sheets and has a distinctive blue-gray color.

Slate Blue
Hex #6A5ACD
RGB 106, 90, 205
CMYK 48, 56, 0, 20

Spanish Blue
Spanish Blue is technically considered a shade of azure instead of blue, but most people would agree that it “passes” for blue easily enough. The end result is a strong, vivid blue that is especially popular in many Spanish-speaking countries, from whence it gets its name.

Spanish Blue
Hex #0070BB
RGB 0, 112, 187
CMYK 100, 40, 0, 27

Spruce Blue
Spruce trees are found growing throughout much of the world. The needles and spines that grow in place of leaves have a distinctive deep green color that takes on a frosted blue appearance throughout the year, giving Spruce Blue its name as a result.

Spruce Blue
Hex #617178 
RGB 97, 113, 120
CMYK 19, 6, 0, 53

Stone Blue
Another shade of blue that veers closer to the gray side of the color wheel, Stone Blue actually has hints of green and yellow running throughout it. These underlying notes give this muted color a mossy or weathered look, adding to its stony nature.

Stone Blue
Hex #819EA8 
RGB 129, 158, 168
CMYK 23, 6, 0, 34

Tottenham Navy
Tottenham Hotspur Football Club is another professional English football team that was founded in the late 1800s and continues to play professionally to this day. Although most of their apparel is white, team members often feature accents in this distinctive shade of dark blue.

Tottenham Navy
Hex #132257
RGB 19, 34, 87
CMYK 78, 61, 0, 66

True Blue
Despite the name, True Blue isn’t actually true or “real” blue. Instead, it’s a few shades paler and slightly less intense than the official color.

True Blue
Hex #2D68C4
RGB 45, 104, 196
CMYK 77, 47, 0, 23

Tufts Blue
Founded in 1852, Tufts University is a private university that has long been considered an exclusive and prestigious place of higher learning. The pale blue shade associated with that school has been in use nearly as long and provides a bright, cheerfully academic appearance.

Tufts Blue
Hex #3E8EDE
RGB 62, 142, 222
CMYK 72, 36, 0, 13

Twitter Blue
Similar to Facebook Blue, most of us are probably pretty familiar with the specific shade of blue that Twitter uses for its official branding and merchandising.

Twitter Blue
Hex #1DA1F2 
RGB 29, 161, 242
CMYK 88, 33, 0, 5

UCLA Blue
UCLA Blue, as the name would suggest, is one of the colors used by the University of California, Los Angeles and is seen around the various courts and fields of that university’s sporting teams.

UCLA Blue
Hex #2774AE
RGB 39, 116, 174
CMYK 78, 33, 0, 32

Ultramarine Blue
Ultramarine Blue is true blue, but dialed up another notch. The “ultra” in the color’s name refers to the intense blue shades of this specific color.

Ultramarine Blue
Hex #120A8F
RGB 18, 10, 143
CMYK 87, 93, 0, 44

Violet Blue
If you’ve ever seen a violet in nature, you know violets are usually closer to purple. In the 1700s and 1800s, however, the word “violet” was often used to describe objects that we would consider blue today, and so this dark blue color is violet.

Violet Blue
Hex #324AB2
RGB 50, 74, 178
CMYK 72, 58, 0, 30

Visa Blue
Most of us have seen the advertisements for various Visa savings plans and credit or debit cards throughout the years. Even if you strip away all of the extra set dressing, however, the cool, dark blue Visa Blue color remains in the logo.

Visa Blue
Hex #1A1F71 
RGB 26, 31, 113
CMYK 77, 73, 0, 56

Vivid Sky Blue
As the name would suggest, Vivid Sky Blue is very similar to Sky Blue, but a little bit more, well, vivid. The bright tones of this particular color remind us of a brilliantly sunny late October sky without a single cloud in sight.

Vivid Sky Blue
Hex #00CCFF
RGB 0, 204, 255
CMYK 100, 20, 0, 0

Warriors Blue
The Golden State Warriors, a professionally ranked basketball team based in San Francisco and often referred to affectionately as “the Dubs”, feature a striking blue and gold logo that has changed dramatically over the years while still retaining the characteristic deep blue tones.

Warriors Blue
Hex #1D428A
RGB 29, 66, 138
CMYK 79, 52, 0, 46

Yankees Blue
The New York Yankees have been playing since 1901, which means that their blue and white color scheme has captured the public imagination for well over a hundred years. Today, their dark blue and white uniforms are absolutely iconic.

Yankees Blue
Hex #0C2340
RGB 12, 35, 64
CMYK 81, 45, 0, 75

YInMn Blue
YInMn Blue was discovered in 2009 and is a vibrant blue produced naturally by the combination of yttrium, indium, and manganese. The color doesn’t fade over time and is safer than other natural pigments.

YInMn Blue
Hex #2E5090 
RGB 46, 80, 144
CMYK 68, 44, 0, 44

Steel Blue
Steel Blue is a cool blue with definite gray undertones. It’s a little more blue than what steel truly looks like, but the name’s stuck around nevertheless.

Steel Blue
Hex #4682B4
RGB 70, 130, 180
CMYK 61, 28, 0, 29

Alaskan Blue
Alaskan Blue is very similar to Ice Blue, but it carries some of the green undertones that represent Alaska’s rich plant life and thriving tundra landscapes.

Alaskan Blue
Hex #6DA9D2
RGB 109, 169, 210
CMYK 48, 20, 0, 18

Tall Ships Blue
Tall Ships Blue, like some of the other ocean-themed blues on this list, has notes of green and yellow running throughout in order to reflect the sea-glass green color that the tall ships of long ago used to sail across.


Tall Ships Blue
Hex #0E81B9
RGB 14, 129, 185
CMYK 92, 30, 0, 27
//////////////////////////////////////////////////////// End of blue

// Purple
True Purple
True purple is a shade similar to violet. However, unlike violet, as it is composed of mixing red and blue, true purple is a secondary color.

True Purple
Hex #6A0DAD
RGB 106, 13, 173
CMYK 39, 92, 0, 32

Thistle
This light purple color is meant to reflect the natural coloring of the thistle plant often associated with Scotland.

Thistle
Hex #D8BFD8
RGB 216, 191, 216
CMYK 0, 12, 0, 15

Plum
A pale, purple color made using light reddish-purple. Much paler than the color of the plum fruit, the color officially recognized as plum is also brightly vivid.

Plum
Hex #DDA0DD
RGB 221, 160, 221
CMYK 0, 28, 0, 13

Violet
So purple as to appear almost blue, this shade is a tertiary color to purple and close in appearance to the natural color of Amethyst.


Violet
Hex #8F00FF
RGB 143, 0, 255
CMYK 44, 100, 0, 0

Orchid
This rich, bright purple is meant to reflect the naturally vivid color of the orchid flower.

Orchid
Hex #DA70D6
RGB 218, 112, 214
CMYK 0, 49, 2, 15

Fuchsia
Leaning more towards pink, fuchsia incorporates a larger amount of red than other shades of purple to be brightly vibrant.

Fuchsia
Hex #FF00FF
RGB 255, 0, 255
CMYK 0, 100, 0, 0

Medium Orchid
While medium orchid incorporates large amounts of red and blue, it is also composed of a good amount of green, which keeps it looking like a vibrant yet medium shade of purple.

Medium Orchid
Hex #BA55D3
RGB 186, 85, 211
CMYK 12, 60, 0, 17


Medium Purple
With more blue than red, this medium purple color reflects that of classic purple while remaining much more vibrant.

Medium Purple
Hex #9370DB
RGB 147, 112, 219
CMYK 33, 49, 0, 14

Blue Violet
With so much blue that this shade appears almost classic blue, it has just enough red to remain in the purple family.

Blue Violet
Hex #8A2BE2
RGB 138, 43, 226
CMYK 39, 81, 0, 11

Dark Violet
This is a deep, dark purple that remains slightly vibrant thanks to the violet tones present.

Dark Violet
Hex #9400D3
RGB 148, 0, 211
CMYK 30, 100, 0, 17

Dark Orchid
While this is a deeper color than the traditional orchid color, it is in no way to be considered a dark purple.


Dark Orchid
Hex #9932CC
RGB 153, 50, 204
CMYK 25, 75, 0, 20

Dark Magenta
This deep magenta color is the closest to natural purple, with enough red to appear slightly more vibrant than its base color.

Dark Magenta
Hex #8B008B
RGB 139, 0, 139
CMYK 0, 100, 0, 45

Indigo
Indigo incorporates enough blue to appear on the blue end of the spectrum while remaining rich and vibrant enough to be considered a shade of purple.

Indigo
Hex #4B0082
RGB 75, 0, 130
CMYK 42, 100, 0, 49

Veronica
An extremely bright purple color named after the flower veronica prostrata.

Veronica
Hex #A020F0
RGB 160, 32, 240
CMYK 33, 87, 0, 6


Pale Purple
A pale, purple-pink color that has the appearance of white with a slight purple tint.

Pale Purple
Hex #FAE6FA
RGB 250, 230, 250
CMYK 0, 8, 0, 2

Mauve
A very light, brilliant purple meant to reflect the natural color of the muted mallow wildflower.

Mauve
Hex #E0B0FF
RGB 224, 176, 255
CMYK 12, 31, 0, 0

Heliotrope
A pink-purple tone that reflects that of the naturally occurring heliotrope flower.

Heliotrope
Hex #DF73FF
RGB 223, 115, 255
CMYK 13, 55, 0, 0

Phlox
Also known as psychedelic purple, this color lies somewhere between the vivacity of electric purple and magenta. Made from fluorescent magenta and blue, this color gained a large amount of popularity with hippies in the 1960s and 70s.

Phlox
Hex #DF00FF
RGB 223, 0, 255
CMYK 13, 100, 0, 0


Purple Pizzazz
As the name would suggest, this color is extremely bright and vibrant. First appearing as a Crayola crayon color in 1900, this color has many of the traits necessary to be classified within the spectrum of magenta and purple.

Purple Pizzazz
Hex #FE4EDA
RGB 254, 78, 218
CMYK 0, 69, 14, 0

Liserian Purple
A bright purple with enough red to appear almost pink. The first reference to this color is from 1912.

Liserian Purple
Hex #DE6FA1
RGB 222, 111, 161
CMYK 0, 50, 27, 13

Mulberry
With enough red to lean towards the pink end of the purple spectrum, this is meant to reflect the color of mulberry jam.

Mulberry
Hex #C54B8C
RGB 197, 75, 140
CMYK 0, 62, 29, 23

Pearly Purple
A strong purple with more red than blue, this color first appeared in Crayola crayon sets in the 1990s.


Pearly Purple
Hex #B768A2
RGB 183, 104, 162
CMYK 0, 43, 11, 28

Purpureus
Purpureus is vividly purple and the naming of this color dates all the way back to 1382.

Purpureus
Hex #9A4EAE
RGB 154, 78, 174
CMYK 11, 55, 0, 32

Northwestern Purple
Deeply violet and close to blue on the color scale, this color was custom created as the official color of Northwestern University.

Northwestern Purple
Hex #4E2A84
RGB 78, 42, 132
CMYK 41, 68, 0, 48

KSU Purple
This shade falls somewhat closer to blue than red on the color scale, producing a dark, violet shade used in the print materials of Kansas State University. It is almost identical to northwestern purple.

KSU Purple
Hex #512888
RGB 81, 40, 136
CMYK 40, 71, 0, 47

Pomp and Power
This purple shade is deep yet muted, producing a more moderate purple color sometimes associated with royalty.

Pomp and Power
Hex #86608E
RGB 134, 96, 142
CMYK 6, 32, 0, 44

Mardi Gras
A deep, dark purple color commonly used in Mardi Gras decorations.

Mardi Gras
Hex #880085
RGB 136, 0, 133
CMYK 0, 100, 2, 47

Eminence
This deep, medium purple has been used since the 1800s in order to describe the deep majesty of the color commonly used by royals.

Eminence
Hex #6C3082
RGB 108, 48, 130
CMYK 17, 63, 0, 49

Pansy Purple
Named after the purple pansy flower, this color mirrors the bloom, a shade between indigo and violet.

Pansy Purple
Hex #78184A
RGB 120, 24, 74
CMYK 0, 80, 38, 53

Palatinate
This pale violet shade is associated with the University of Durham and Newcastle University Medical School, with the name alluding to the area’s historical status.

Palatinate
Hex #72246C
RGB 114, 36, 108
CMYK 0, 68, 5, 55

Dark Purple
A shade of purple so dark that it may almost be confused with black.

Dark Purple
Hex #301934
RGB 48, 25, 52
CMYK 8, 52, 0, 80

Byzantium
A dark shade of purple, the name of which was first recorded in 1926 in a reference to the ancient Byzantine empire.

Byzantium
Hex #702963
RGB 112, 41, 99
CMYK 0, 63, 12, 56

African Violet
A light Pantone purple based on the unique color of African violets.

African Violet
Hex #B284BE
RGB 178, 132, 190
CMYK 6, 31, 0, 25

Amethyst
This violet color is so moderate it almost appears to be transparent. Named after the color of amethyst crystals.

Amethyst
Hex #9966CC
RGB 153, 102, 204
CMYK 25, 50, 0, 20

Chinese Violet
A moderately deep purple. This subdued color correlates to the Chinese Violet flower.

Chinese Violet
Hex #856088
RGB 133, 96, 136
CMYK 2, 29, 0, 47

English Violet
An extremely dark purple. English Violet borders on black while retaining enough red hues to still be recognizably purple.

English Violet
Hex #563C5C
RGB 86, 60, 92
CMYK 7, 35, 0, 64

Russian Violet
As opposed to English Violet, Russian Violet contains more blue hues, giving this color the appearance of a blue that is edging towards black.

Russian Violet
Hex #32174D
RGB 50, 23, 77
CMYK 35, 70, 0, 70

Fairy Tale
This soft pink has enough lavender hues to pass for a purple shade. Making its display as a Pantone color, it is named after the color most seen attributed to typical fairy garb.

Fairy Tale
Hex #F2C1D1
RGB 242, 193, 209
CMYK 0, 20, 14, 5

Fandango
This vivid purplish red falls somewhere between a mix of pink and purple, giving this fun color its equally fanciful name.

Fandango
Hex #B53389
RGB 181, 51, 137
CMYK 0, 72, 24, 29

French Mauve
While this vivid purple may also be known as deep mauve, it is classified purely as “mauve” in French and it is named after the mallow flower.

French Mauve
Hex #D473D4
RGB 212, 115, 212
CMYK 0, 46, 0, 17

Affair
This unusually-named purple shade is a lot like a deeper version of lavender. It’s a great choice if you want something that has bold energy without the full depth of violet or similar colors.

Affair
Hex #6F4685
RGB 111, 70, 133
CMYK 17, 47, 0, 48

Boss’s Jokes
This bright magenta-like purple is perfect if you want a bright, energetic purple shade that is almost pink. It would do especially well as an accent color against neutrals or as a part of an especially bright color palette.

Boss’s Jokes
Hex #B0306A
RGB 176, 48, 106
CMYK 0, 73, 40, 31

Iris
The iris is a vibrant flower that comes in a whole range of colors. Iris is a well-balanced purple that manages to be light without being washed out. This springlike shade pairs very well with green and yellow pastels.

Iris
Hex #9867C5
RGB 152, 103, 197
CMYK 23, 48, 0, 23

Long Distance
This subdued color is a quiet grayish purple, as evidenced by its high percentage of black. And if you look at the RGB value, you can see that it has approximately equal amounts of red and blue, making it a great classic purple.

Long Distance
Hex #6F456E
RGB 111, 69, 110
CMYK 0, 38, 1, 56

Prince Charming
This Disney-associated color is fittingly regal. Its dark, bluish cast makes it look much like the coats worn by many cartoon princes atop their white horses.

Prince Charming
Hex #493F5E
RGB 73, 63, 94
CMYK 22, 33, 0, 63

Lipstick Stain
Purple lipstick isn’t for everyone, but appropriately, many purple lipsticks are made in a similar color to Lipstick Stain. This shade involves a good bit of both magenta and black. That explains its significant energy despite the fact that it’s a cool color. Similarly, Lipstick Stain also has roughly the same amount of red and blue.

Lipstick Stain
Hex #8E4785
RGB 142, 71, 133
CMYK 0, 50, 6, 44

Pompadour
The word “pompadour” refers to a distinctive hairstyle where the front of the hair is swept upward. Though it was popularized by Madame de Pompadour, one of the mistresses of King Louis XV, it is now especially popular as a men’s hairstyle. This color seems like an appropriate representation. It’s proud without being overly gaudy or hard on the eyes.

Pompadour
Hex #720058
RGB 114, 0, 88
CMYK 0, 100, 23, 55

Grape Color
Despite the name, Grape Color is more the color of cartoon grapes than it is the color of the actual fruit. It’s similar to a deep lavender with a little extra blue. As you can see from the RGB value, this color has a significant amount of blue. As a cool color that’s fairly energetic, Grape Color is an especially good choice for activewear or spring clothing.

Grape Color
Hex #6F2DA8
RGB 111, 45, 168
CMYK 34, 73, 0, 34

Wine
This aptly-named color is truer to the actual color of wine than many “wine red” colors are. As a deep, dark purple, it’s roughly the color of a good pinot noir. Though Wine will generally be too dark for walls, it’s an excellent choice for dramatic accents in any room. It pairs especially well with ivory or parchment shades.

Wine
Hex #2C041C
RGB 44, 4, 28
CMYK 0, 91, 36, 83

Pizza Edge
This color is somewhat confusingly named. After all, the edge of a pizza isn’t purple at all. Pizza Edge is roughly between the color of fuchsia and royal purple, and it has roughly equal amounts of red and blue. Pizza Edge pops when placed against yellow, but it also looks nice in a medley of cool colors like blue and green.

Pizza Edge
Hex #9A2CA0
RGB 154, 44, 160
CMYK 4, 72, 0, 37

Tyrian Purple
Tyrian Purple is named after a natural pigment that comes from a species of sea snail. It gets its name from the city of Tyre in Lebanon. You may sometimes hear it called royal purple or Phoenician purple. As a reddish-colored purple, this color is ideal if you want a rich, deep purple with some energy.

Tyrian Purple
Hex #66023C
RGB 102, 2, 60
CMYK 0, 98, 41, 60

Ultra Violet
Despite the name, Ultra Violet isn’t an overwhelming or incredibly loud purple shade. If anything, it’s one of the quieter ones on the list. As a bluish-purple, it’s a lovely shade if you want a calming color that’s still in the purple family. Its complementary color is a somewhat dull olive green, and it also looks nice near various shades of gray.

Ultra Violet
Hex #645394
RGB 100, 83, 148
CMYK 32, 44, 0, 42

Studio
This appropriately-named pale purple combines businesslike calm and playful creative energy. It’s essentially a version of lilac with more blue. And since working in blue spaces has been linked to greater productivity, Studio is a great color to pick if you’re designing a workspace but still want to be surrounded by purple.

Studio
Hex #7851A9
RGB 120, 81, 169
CMYK 29, 52, 0, 34

Electric Purple
Many purple shades are relatively calm, but this highly energetic purple is ideal if your project needs a splash of fun. As you’ll see on its CMYK values, Electric Purple is devoid of any black or yellow. It’s really a mixture of cyan and magenta. This color can really add some energy when paired with bright yellow or green.

Electric Purple
Hex #BF00FF
RGB 191, 0, 255
CMYK 25, 100, 0, 0

Eggplant
No list of purples is complete without the deep, dark shade of the beloved eggplant. This regal shade will add an air of quiet confidence to any project you’re working on. Pairing it with a dark green is a great choice. And because it has a relatively high proportion of black, Eggplant is a great choice for printing a logo or adding text on a white background.

Eggplant
Hex #311432
RGB 49, 20, 50
CMYK 2, 60, 0, 80

Periwinkle Purple
You might imagine a powder-blue shade when you think of periwinkle. But the periwinkle flowers the color is named for can actually vary considerably in color. Some are blue, some are white, and some are purple, and Periwinkle Purple accurately captures the color of the purple variant. This pastel-like color is pale and dreamy, and it would make a great wall color.

Periwinkle Purple
Hex #BE93E4
RGB 190, 147, 228
CMYK 17, 36, 0, 11

Sangria
The fruity aroma of sangria is the perfect complement to a summer night, and this deep purple is another darker shade that works well for printing text or making logos. It looks nice against darker greens and blues. Since it has almost equal amounts of magenta and black, it’s an interesting alternative to darker bluish purples.

Sangria
Hex #4D0F28
RGB 77, 15, 40
CMYK 0, 81, 48, 70

Raisin
Not many projects typically call for a dark brownish-purple. But if you’re working on one that does, Raisin should fit the bill perfectly. Its deep color would look stunning as a background to white lettering, and it also will look good next to a very deep forest green.

Raisin
Hex #290916
RGB 41, 9, 22
CMYK 0, 78, 46, 84

Mountbatten Pink
Though this color is described as pink, it has more of a purple cast. It also has an interesting history. Mountbatten Pink was used as a camouflage color for ships in WWII by Lord Mountbatten of Britain. Though Mountbatten believed that it worked, experts generally agreed that, if anything, being painted Mountbatten Pink actually made ships more obvious.

Mountbatten Pink
Hex #997A8D
RGB 153, 122, 141
CMYK 0, 20, 8, 40

Fuchsia Blue
You probably know fuchsia as being what’s essentially a bright magenta. But when you add some cyan, you get the lovely shade known as fuchsia blue. This color looks a lot like a quieter version of Electric Purple, which makes sense. Despite being over 55% magenta, this blue still has a significant amount of cyan and black.

Fuchsia Blue
Hex #9C51B6
RGB 156, 81, 182
CMYK 14, 55, 0, 29

Good Tax
As you’ve seen, there’s no shortage of purple shades with odd names, and Good Tax is certainly one. This is a pale, pastel-like purple, and it gives off a relaxed vibe thanks to a large amount of cyan. Remarkably, it has no yellow or black in it. This explains its cooler shade and pale appearance.

Good Tax
Hex #C9A0FF
RGB 201, 160, 255
CMYK 21, 37, 0, 0

Jam
Freshly-canned jam is something truly special, and this warm yet deep purple shade captures the essence of a jar the second you open it. Its dark red look gives it an appearance like that of cherry jam. This color makes a statement, and it’s a good choice for apparel design.

Jam
Hex #67032F
RGB 103, 3, 47
CMYK 0, 97, 54, 60

Ripe Plum
The color of a true ripe plum is typically a little darker than this, but Ripe Plum is nonetheless an excellent choice for a range of products. If you favor a bold look on a home, try using it to paint the shutters and door. Ripe Plum is also a dignified color if you need tablecloths for an event.

Ripe Plum
Hex #410056
RGB 65, 0, 86
CMYK 24, 100, 0, 66

Heather
You might picture gray when you imagine heather, but this soft purple is the actual color of most heather blossoms. Heather is a hardy shrub that grows in much of Scotland, and its flowers bloom toward the end of summer. This pale purple is calm enough to use in a bedroom, and it looks especially nice in a palette with other shades of purple.

Heather
Hex #9E7BB5
RGB 158, 123, 181
CMYK 13, 32, 0, 29

Magenta Purple
This pretty, medium shade is close to what most people think of when they imagine purple. The particular purple looks a bit like Electric Purple, and it’s somewhat bright in color without being pale. Thanks to its high proportion of magenta, this purple shade is somewhat high-energy and works very well as an accent color.

Magenta Purple
Hex #A32CC4
RGB 163, 44, 196
CMYK 17, 78, 0, 23

Mountain’s Majesty
This soothing color seems to tread the line between periwinkle blue and periwinkle purple. It would make a great color for a peaceful reading nook or for a bedroom. If you’re going for a fancier look, this color also pairs well with a touch of gold.

Mountain’s Majesty
Hex #9078C0
RGB 144, 120, 192
CMYK 25, 38, 0, 25

Old Lavender
Appropriately, this is a color that really looks like dried lavender. While it is technically still purple, its somewhat large amounts of green and black help give it its aged look. A diluted version of this color would work well for walls. And as it is, Old Lavender is a great color for accent pieces like pillows and rugs.

Old Lavender
Hex #796878
RGB 121, 104, 120
CMYK 0, 14, 1, 53

Rebecca Purple
Rebecca Purple has a tragic backstory. It was named for Rebecca Alison Meyer, the daughter of CSS pioneer Eric Meyer. Rebecca died on her sixth birthday, and designer Jeffrey Zeldman started a campaign to name this shade after her. Purple was Rebecca’s favorite color, and this shade was officially called “Rebecca Purple” in 2014.

Rebecca Purple
Hex #663399
RGB 102, 51, 153
CMYK 33, 67, 0, 40

Razzmic Berry Purple
This color might sound familiar – it’s the name of one of Crayola’s colors. As a twist on the color raspberry, Razzmic Berry is a little more purple and a little less red. If you’re looking for a whimsical color that just might hearken back to your childhood, try using Razzmic Berry in your next project.

Razzmic Berry Purple
Hex #8D4E85
RGB 141, 78, 133
CMYK 0, 45, 6, 45

Wine Dregs Purple
Unsurprisingly, this shade of purple has some major similarities to Wine. And fittingly, it’s a bit more gray, too. Wine Dregs Purple is an ideal choice if you want a shade of purple that doesn’t quite fit in anywhere. It’s too red to be mauve and too gray to be burgundy. But for that special project where you need a truly unique shade, Wine Dregs Purple just might be it.

Wine Dregs Purple
Hex #673147
RGB 103, 49, 71
CMYK 0, 52, 31, 60

Regalia Purple
Regalia Purple is a deep, regal purple that commands attention. It’s right at home next to gold, but it also would work very well in a palette with pastels like robin’s egg blue. Since it’s fairly heavy on both blue and black, Regalia Purple is much calmer than some other shades of deeper purple.

Regalia Purple
Hex #522D80
RGB 82, 45, 128
CMYK 36, 65, 0, 50

Twilight Lavender Purple
This beautifully unique, dusky color is a little like that of lavender fields at the golden hour. If you like mauve but need something with a little more red, it’s an ideal choice. Twilight Lavender Purple fits in well with grays, and it also looks good alongside some shades of green or blue.

Twilight Lavender Purple
Hex #8A496B
RGB 138, 73, 107
CMYK 0, 47, 22, 46

Traditional Purple
As the name suggests, Traditional Purple is another representation of what many people think of when they picture purple. And fittingly, it is an average purple in many respects. It has roughly the same amount of red and blue, as well as about the same amount of magenta and cyan. Traditional Purple looks great in palettes of various shades of bluish purple.

Traditional Purple
Hex #8E4585
RGB 142, 69, 133
CMYK 0, 51, 6, 44

Spanish Violet Purple
Some shades of purple have a bit of a backstory, and Spanish Violet Purple is one of them. You might think that it’s named after a special variety of violet. However, it’s the exact shade called violeta (“violet”) in a popular book of colors that’s used in many Spanish-speaking countries.

Spanish Violet Purple
Hex #4C2882
RGB 76, 40, 130
CMYK 42, 69, 0, 49

Imperial Purple
Though Tyrian Purple is sometimes called “imperial purple,” this particular Imperial Purple is a different shade altogether. This one is deep and particularly rich in blue, much more so than Tyrian Purple. It’s especially striking when placed next to deep blue-greens.

Imperial Purple
Hex #602F6B
RGB 96, 47, 107
CMYK 10, 56, 0, 58

Japanese Violet Purple
This shade is the color officially designated as “violet” in Japan. Japan names and numbers colors with what’s known as the traditional Japanese colors group. This collection of colors has been used since the year 660 CE.

Japanese Violet Purple
Hex #5B3256
RGB 91, 50, 86
CMYK 0, 45, 5, 64

Munsell Purple
This is another purple shade that’s part of a distinct color system. As the name suggests, Munsell Purple is part of the Munsell Color System, a group of colors put forth by professor Albert H. Munsell. This interesting system classifies colors based on hue (location on color spectrum), chroma (saturation), and value (lightness).

Munsell Purple
Hex #9F00C5
RGB 159, 0, 197
CMYK 19, 100, 0, 23

Deep Ruby Purple
This is another purple that comes very close to being a red. After all, based on the RGB value, you can see that it contains much more red than blue. And interestingly enough, it doesn’t include cyan (but is over 50% magenta). Its deep, slightly dusky color makes it pair nicely with slightly brighter colors.

Deep Ruby Purple
Hex #843F5B
RGB 132, 63, 91
CMYK 0, 52, 31, 48

Purple Heart
This shade of purple is another of Crayola’s classic colors. It’s paler than the purple that you see on Purple Heart medals. It looks a little more like saturated lavender. Though it’s fairly light thanks to having very little black, the amount of blue in Purple Heart makes it much cooler than some other purples.

Purple Heart
Hex #7442C8
RGB 116, 66, 200
CMYK 42, 67, 0, 22

Lavender Blush
Sometimes, you just need a barely-there purple for a project, and Lavender Blush is a prime example. At first, it looks more like a pale pink. But if you take a look at the RGB values, you’ll see that it has approximately equal parts red and blue. The very pale nature of Lavender Blush makes it a perfect understated wall color or color for stationery.

Lavender Blush
Hex #FFF0F5
RGB 255, 240, 245
CMYK 0, 6, 4, 0

Early Bird
Early Bird is another of the soothing, periwinkle-like purples. This one is a little more saturated than most, and it also has a bit more blue. Its name and the shade itself suggest the pale purplish blue you often see in the morning sky.

Early Bird
Hex #CEA2FD
RGB 206, 162, 253
CMYK 19, 36, 0, 1

Lilac
Though darker than the blooms on an actual lilac, this is nonetheless a very pretty shade of purple. Its relative lightness means that it can add some energy and life into just about any color palette. Lilac looks especially nice when paired with turquoise or similar colors.

Lilac
Hex #B65FCF
RGB 182, 95, 207
CMYK 12, 54, 0, 19

Purple Taupe
The name of this color might come as a bit of a surprise. After all, most of us don’t think of the dull brown color of taupe and the vibrance of purple as working together. However, Purple Taupe is a highly effective color choice if you need a neutral color scheme yet want to incorporate elements of purple. Similar to some shades of olive green, Purple Taupe can be used as a neutral on some projects.

Purple Taupe
Hex #50404D
RGB 80, 64, 77
CMYK 0, 20, 4, 69

Cyber Grape Purple
If you’re one to notice colors with unique names, Cyber Grape is certainly a standout. This deep, calm purple is similar to the fairly dark purple typically associated with grapes. However, thanks to its large amounts of blue, Cyber Grape is similar to slate blue.

Cyber Grape Purple
Hex #58427C
RGB 88, 66, 124
CMYK 29, 47, 0, 51

Kingfisher Daisy
This color is named after an actual plant that’s commonly called the kingfisher daisy, Felicia, or blue daisy. These daisies typically aren’t quite as purple as this particular color. But nonetheless, this quiet purple works well in a multi-purple palette or up against some cool blues.

Kingfisher Daisy
Hex #653780
RGB 101, 55, 128
CMYK 21, 57, 0, 50

Seance
Otherworldly and ominous, Seance is a perfectly named purple shade. Its large proportions of blue and black prevent it from becoming overly warm. Seance is still fairly close to what most of us see when we picture “purple,” so it’s a familiar choice for a lot of different applications.

Seance
Hex #61346B
RGB 97, 52, 107
CMYK 9, 51, 0, 58

Lavender Gray
Purple-gray colors aren’t typically as popular as blue-gray ones. But if you need just a hint of purple in a backdrop or wall color, you might want to consider the misty, peaceful lavender gray. This color is heavier on the blue than on the red, but it makes for a cool, relaxing color to be around.

Lavender Gray
Hex #B6B5D8
RGB 182, 181, 216
CMYK 16, 16, 0, 15

Hopbush
This magenta-heavy purple almost crosses the line into pink. Regardless of whether you consider it to be pink or purple, Hopbush is named for the fruit of a bush of the same name. Hopbush fruit is pinkish-purple in color and appears in the summer. It contrasts beautifully with the leaves of the hopbush, which are typically a bronze-green color.

Hopbush
Hex #D05FAD
RGB 208, 95, 173
CMYK 0, 54, 17, 18

Tacao
Tacao is a classic-looking purple that leans more blue than it does red. But its slightly cool edge makes it great for a variety of projects. Its fresh look makes it an ideal choice for spring outerwear and athletic wear. Tacao will pair well with most bright colors and most neutrals, making it incredibly versatile.

Tacao
Hex #6F3096
RGB 111, 48, 150
CMYK 26, 68, 0, 41

Brilliant Purple
You might expect a color called “brilliant purple” to be one of the deeper, royal-looking shades on the list. However, this one has its own brilliance. It’s light in color and similar to amethyst, and it’s easy to imagine a sparkle around the edges.

Brilliant Purple
Hex #D399E6
RGB 211, 153, 230
CMYK 8, 33, 0, 10

Murasaki Purple
Murasaki simply means “purple” in Japanese. The word is used to describe a range of purple vegetables. There’s a type of pepper known as Murasaki purple, and there are also Murasaki sweet potatoes. This color is very close to the color of Murasaki vegetables. It’s very deep and dark, making it ideal for creating dramatic accents on lighter backdrops.

Murasaki Purple
Hex #4F284B
RGB 79, 40, 75
CMYK 0, 49, 5, 69

Blackish Purple
This is one of the darkest purples you can possibly find. Blackish Purple may not be the color for every occasion. But since its proximity to black makes it essentially a neutral, it’s a good choice when you need a very dark, black-like neutral for a project.

Blackish Purple
Hex #291E29
RGB 41, 30, 41
CMYK 0, 27, 0, 84

Lovely Purple
True to its name, this color is a lovely shade of purple. It comes very close to being a shade of blue. As you can see from its RGB values, it’s made with a very high proportion of blue. It’s also one of the brighter shades on the list. Lovely Purple is dark enough to be used as a backdrop color, but it’s also light enough for use in the foreground of any project.

Lovely Purple
Hex #7F38EC
RGB 127, 56, 236
CMYK 46, 76, 0, 7

Vulgar Purple (Grape Jelly)
“Vulgar” technically just means “common,” but it has a generally negative connotation. So this color is often referred to by the more pleasant name of “Grape Jelly.” That’s a fitting name – Grape Jelly is about as dark as its namesake, although it may have a little extra blue.

Vulgar Purple (Grape Jelly)
Hex #3E2F84
RGB 62, 47, 132
CMYK 53, 64, 0, 48

University of Central Arkansas Purple
Just about every college and university selects a specific hex and CMYK value for each color used in its logo. That helps ensure that college materials look exactly the same whether they’re used on signage, printed on shirts, or incorporated into brochures. This deep bluish purple helps make up the shield logo of the University of Central Arkansas.

University of Central Arkansas Purple
Hex #4F2D7F 
RGB 79, 45, 127
CMYK 38, 65, 0, 50

FedEx Purple
Universities aren’t the only institutions that need to ensure color consistency across materials. The same is true of large companies. This particular shade of purple may be familiar. You’ve probably seen it on the sides of FedEx vehicles. It’s the color that makes up the first part of the company logo.

FedEx Purple
Hex #660099 
RGB 102, 0, 153
CMYK 33, 100, 0, 40

Carolina Plum
Some hex values are claimed by paint companies, and Carolina Plum is one of the colors that Benjamin Moore offers. This relatively pale, dusty-looking purple is kind of like a grayish lavender. It would make a good wall color if you prefer a room to be slightly dark in color without becoming suffocating.

Carolina Plum
Hex #9B84A1
RGB 155, 132, 161
CMYK 4, 18, 0, 37

Kalamata
Kalamata is another of Benjamin Moore’s paint colors. This one is appropriately named after the kalamata olive. The olives may be slightly more brown than this color, but Kalamata is an excellent choice for a dark background color or for use as text over a lighter background.

Kalamata
Hex #705160
RGB 112, 81, 96
CMYK 0, 28, 14, 56

Black Currant
Dark lipsticks never seem to completely go out of style, and most of them are shades of purple. This lovely color is one of those used by L.A. Girl. It stands out because, despite being a dark purple, Black Currant still has a high proportion of red. You can see this in its RGB values – it still has some blue, but it has far more red.

Black Currant
Hex #540E32
RGB 84, 14, 50
CMYK 0, 83, 40, 67

Purple 4
Not all shades of purple come with interesting names. Purple 4 is a beautiful bluish purple that isn’t excessively dark. It’s a great choice if you’re working on a project that needs an energetic shade that isn’t quite as loud as Electric Purple and similar colors.

Purple 4
Hex #551A8B
RGB 85, 26, 139
CMYK 39, 81, 0, 45

Strong Purple
Despite the name, Strong Purple isn’t quite what you’d think of when you imagine a strong version of this versatile color. That isn’t a problem, though. As evidenced by its RGB values, Strong Purple is a medium shade with approximately equal amounts of red and blue.

Strong Purple
Hex #875692
RGB 135, 86, 146
CMYK 8, 41, 0, 43

Pale Purple
This pretty color is similar to lilac, and it’s a versatile choice if you want a light purple that isn’t quite a pastel. Pale purple would do well in a palette with other pale versions of cool colors, and it also looks good with neutrals like brown or gray.

Pale Purple
Hex #AA98A9
RGB 170, 152, 169
CMYK 0, 11, 1, 33

Vivid Reddish Purple
Purple is a cool color, but shades that contain more red have a look that’s a little warmer. Bluish versions tend to appear more springlike, while reddish versions like this one have a more summery feel. Vivid Reddish Purple works well against a neutral palette where it will stand out, and it also looks nice alongside similarly bright colors.

Vivid Reddish Purple
Hex #870074
RGB 135, 0, 116
CMYK 0, 100, 14, 47

Medium Purple 3
Though it’s another color with a less-than-exciting name, Medium Purple 3 is an especially pretty shade. It looks a little like a darker and more saturated periwinkle. This color looks especially nice next to ivory and cream. The fact that it has more blue than red makes it a demure, cool shade of purple.

Medium Purple 3
Hex #8968CD
RGB 137, 104, 205
CMYK 33, 49, 0, 20

Middle Purple
The name of this color might make you think that it’s close in appearance to Middle Purple 3. However, it’s almost pink. Middle Purple is the name of a Crayola purple, and it’s best described as a red-heavy, medium-light purple. It has a dusky quality about it that makes it look very nice alongside tan and similar neutrals.

Middle Purple
Hex #D982B5
RGB 217, 130, 181
CMYK 0, 40, 17, 15

Cardinal
Cardinal is a confusingly named purple. After all, cardinals tend to be a bright scarlet red in color. This shade is the name of a paint made by Resene, and it’s most accurately described as a deep, red-heavy purple. It’s close to burgundy in color, and it looks especially nice next to other jewel tones.

Cardinal
Hex #8A244E
RGB 138, 36, 78
CMYK 0, 74, 43, 46

Embassy Purple
This businesslike, near-black purple is a shade made by Ralph Lauren. It’s roughly the color of black cherries, albeit with a little less red. Embassy Purple is a great alternative to black when printing materials, and it’s perfect for adding just a hint of purple to neutral color palettes.

Embassy Purple
Hex #3B343C
RGB 59, 52, 60
CMYK 2, 13, 0, 76

Lakers Purple
If you’re a sports fan, you may recognize this purple on sight. It’s the exact color used for the Lakers logo. Not surprisingly, Lakers Purple looks good alongside yellow and other bright colors.

Lakers Purple
Hex #552582
RGB 85, 37, 130
CMYK 35, 72, 0, 49

Amaranth Purple
This distinctive color is named after the purple amaranth, a species of pigweed. It’s sometimes called livid amaranth. This plant features unusual “flower spikes” that offer a welcome contrast to typical blooms. Florists sometimes use cuttings of purple amaranth to add variety to flower bouquets, and this plant can also be grown in gardens.

Amaranth Purple
Hex #AB274F
RGB 171, 39, 79
CMYK 0, 77, 54, 33

Purple Navy
Some of the most interesting shades of purple are those that tread the line between purple and blue (or purple and red). And when you look at Purple Navy, it can be hard to tell whether it’s a shade of blue or a shade of purple. This deep color is ideal if you like navy blue but want to choose something a little different.

Purple Navy
Hex #4E5180
RGB 78, 81, 128
CMYK 39, 37, 0, 50

Insolent Purple
This amusingly named color is another shade of purple used in lipstick. More specifically, Insolent Purple is one of Estee Lauder’s signature lipstick colors. Because it’s roughly between a pink and a deep purple, it’s ideal for those who want a dark lip that isn’t too dark.

Insolent Purple
Hex #682E3C
RGB 104, 46, 60
CMYK 0, 56, 42, 59

Smyrna Purple
Smyrna Purple is a soft, lovely shade that borders on pink. It also contains a fair amount of black (as seen in its CMYK values), so it isn’t particularly pale. Smyrna Purple would work well as a wall color if you’re looking for something bold. It also is a great choice for clothing, as it’s cheerful without being overly bright.

Smyrna Purple
Hex #A2627A 
RGB 162, 98, 122
CMYK 0, 40, 25, 36

East Carolina University Purple
Interestingly enough, colleges and universities using purple in their logos tend to settle on similar shades of dark bluish purple. ECU Purple is very close to KSU Purple. It combines the authority of blue with the regal nature of purple, making it an excellent option for a university to choose.

East Carolina University Purple
Hex #592A8A
RGB 89, 42, 138
CMYK 36, 70, 0, 46

Little Princess
This enchantingly named color is made by Porter Paints. It’s a very pale cream color with just a touch of purple, making it a pleasant and classic choice for a wall color. And because it’s so close to ivory or cream, Little Princess is a viable alternative to various shades of off-white when it comes to paper and stationery.

Little Princess
Hex #E9DCE5
RGB 233, 220, 229
CMYK 0, 6, 2, 9

Aesthetic Purple
As the name suggests, Aesthetic Purple is very pleasing to the eye. It’s a deep bluish color that possesses an elegance that few purple shades do. Aesthetic Purple really pops when put up against bright greens and yellows, but it also pairs nicely with silver and gold.

Aesthetic Purple
Hex #502380
RGB 80, 35, 128
CMYK 38, 73, 0, 50

Kikyo-iru
This unique shade of purple is fairly close to what most of us likely picture when we imagine purple. It’s neither too red nor too blue. Its complementary color is a very slightly brown shade of green. In this combination, Kikyo-iru offers a picture of understated elegance.

Kikyo-iru
Hex #5D3F6A
RGB 93, 63, 106
CMYK 12, 41, 0, 58

Metallic Purple
Metallic Purple is somewhat confusingly named. After all, it’s hard for a flat color to look metallic. But this shade is just deep enough to look nice with a touch of sparkle. This classic purple works especially well with yellow, but it also pairs nicely with various shades of blue.

Metallic Purple
Hex #520E7D
RGB 82, 14, 125
CMYK 34, 89, 0, 51

Hot Purple
This neon-like shade is very similar to Electric Purple. It’s perfect to use wherever you need a pop of color. However, Hot Purple also works nicely in summery color palettes where you need several bright, attention-grabbing colors.

Hot Purple
Hex #A420D0
RGB 164, 32, 208
CMYK 21, 85, 0, 18

Faded Purple
This color is aptly named, and it’s ideal if you’re looking for a grayish shade of purple that isn’t overly gray. This color is close enough to a neutral that it works well for clothing. It also will look nice alongside various shades of gray.

Faded Purple
Hex #795F80
RGB 121, 95, 128
CMYK 5, 26, 0, 50

Mythical Purple
This pretty, soothing purple is somewhat similar to Lakers Purple. It’s versatile, too. Mythical Purple is dark enough to use for lettering but light enough to serve as a backdrop. It also looks nice paired with Sap Green, its complementary color.

Mythical Purple
Hex #53277E
RGB 83, 39, 126
CMYK 34, 69, 0, 51

Languid Lavender
The name Languid Lavender really suits this color. It’s wistful and airy, making it the perfect springlike wall color. Languid Lavender is a bit like a paler version of amethyst, and it also can serve as a useful and versatile background color.

Languid Lavender
Hex #D6CADD
RGB 214, 202, 221
CMYK 3, 9, 0, 13

Mauveine
Mauveine is a color with a very interesting history. It was one of the first ever synthetic dyes. And it wasn’t even deliberately developed. A scientist discovered it in 1856 while working on finding a cure for malaria.

Mauveine
Hex #8D029B
RGB 141, 2, 155
CMYK 9, 99, 0, 39

Blue Lilac
Lilac and Lavender, two very popular shades of purple, both lend themselves to being mixed with blue. As you can see from its RGB values, Blue Lilac has a bit more blue than red, but it’s still an unmistakable shade of purple. It’s a good choice for painting an office if you like the color purple. Blue has been shown to stimulate creativity and productivity, and Blue Lilac manages to be both calming and energizing.

Blue Lilac
Hex #7B679A
RGB 123, 103, 154
CMYK 20, 33, 0, 40

Dark Byzantium
Named for the ancient Greek city of Byzantium (now Constantinople), Byzantium and Dark Byzantium are reminiscent of splendor. If you prefer a darker, more demure version of the classic Byzantium, you may find Dark Byzantium to be to your liking.

Dark Byzantium
Hex #5D3954
RGB 93, 57, 84
CMYK 0, 39, 10, 64

Luxury Purple
Purple has long been considered a luxuriant color, and Luxury Purple really takes that association to a new level. It looks especially nice when used in jewelry.

Luxury Purple
Hex #743089
RGB 116, 48, 137
CMYK 15, 65, 0, 46

Aztech Purple
This shade of purple is very close to being a bright blue. As you can see from the RGB values, it has far more blue than red. And as you can see in the CMYK values, it doesn’t contain any black. Aztech Purple has an almost-neon quality, making it one of the most electric shades of purple out there.

Aztech Purple
Hex #893BFF
RGB 137, 59, 255
CMYK 46, 77, 0, 0

Baltimore Ravens Purple
The Baltimore Ravens have a distinctive dark black-and-purple logo, and this shade is the team’s signature deep purple. As you can tell by the logo, this color pairs well with black and other dark shades.

Baltimore Ravens Purple
Hex #280353
RGB 40, 3, 83
CMYK 52, 96, 0, 67

Deep Magenta
Not to be confused with Dark Magenta, Deep Magenta is a bright purple that, unsurprisingly, contains a lot of magenta. The color magenta was named after the Italian Battle of Magenta, as the color was developed shortly before the battle itself.

Deep Magenta
Hex #CC00CC
RGB 204, 0, 204
CMYK 0, 100, 0, 20

Deep Purple
This distinctive, almost-blue shade is sometimes called Pageant. It’s a deep color that leans toward the blue side, but it’s warmer and lighter than navy blue. This color looks especially nice alongside other jewel tones.

Deep Purple
Hex #524F81
RGB 82, 79, 129
CMYK 36, 39, 0, 49

Rustic Purple
Purple probably isn’t the color you think of when you hear the word “rustic.” However, the name suits this shade. It has a slightly dark, slightly weathered appearance that looks great when paired with heather gray.

Rustic Purple
Hex #593163
RGB 89, 49, 99
CMYK 10, 51, 0, 61

Sunset Purple
Sunsets may primarily be orange and yellow, but the sky at dusk often turns a light purple. Sunset Purple does well at capturing this shade. It’s a great choice if you want something that’s just a little bolder than Lilac or Lavender.

Sunset Purple
Hex #A865B5
RGB 168, 101, 181
CMYK 7, 44, 0, 29

Artist’s Purple
Artist’s Purple is another shade that is close to magenta. This bright, bold color is essentially a darker version of magenta, and it’s a great choice if your project requires a louder color than most shades of purple.

Artist’s Purple
Hex #C71585
RGB 199, 21, 133
CMYK 0, 89, 33, 22

Dull Purple
Despite its unflattering name, Dull Purple is actually a very nice color. It looks a little like Lilac, but it’s a little deeper and darker. If your project needs a solid medium purple, this is a good color to pick.

Dull Purple
Hex #9861A5
RGB 152, 97, 165
CMYK 8, 41, 0, 35

Traffic Purple
Traffic Purple is a reddish medium purple that’s warmer than many purple shades. It’s part of the European RAL color matching system. The RAL system is popular in a handful of European countries, including Italy, France, and Germany.

Traffic Purple
Hex #913073
RGB 145, 48, 115
CMYK 0, 67, 21, 43

Matte Purple
With most colors displayed on screens, it’s impossible to differentiate matte and gloss. But it’s easy to see why this inky shade of purple would look good as a matte color. It’s a good choice if you’re looking for a color that is close to black but still has some definite elements of color.

Matte Purple
Hex #392A48
RGB 57, 42, 72
CMYK 21, 42, 0, 72

Purple Violet
Purple Violet is another color that’s part of the RAL system. It’s someone unique in that it looks slightly brown, much like Oxblood and similar shades. Its brown undertones mean that it looks good with other neutrals. It also looks great with its complementary color, Cal Poly Pomona Green.

Purple Violet
Hex #47243C
RGB 71, 36, 60
CMYK 0, 49, 15, 72

Purple CMYK
This color is the standard for purple in the CMYK printing system. Purple CMYK is a classic, slightly blue-tinted purple that looks especially good paired with blues and greens.

Purple CMYK
Hex #6A317F 
RGB 106, 49, 127
CMYK 17, 61, 0, 50

Ocean Purple
Though the ocean isn’t necessarily purple, it’s easy to see how this color got its name. It has a similar depth to the blue-green color of most oceans, and it’s watery and calm.

Ocean Purple
Hex #6E2D91 
RGB 110, 45, 145
CMYK 24, 69, 0, 43

Shiny Purple
You can’t really make a color look shiny on a screen, but Shiny Purple is almost neon. Much like a gleaming color would, Shiny Purple easily catches the eye.

Shiny Purple
Hex #B941FF
RGB 185, 65, 255
CMYK 27, 75, 0, 0

Autumn Purple
If you need a shade of purple to complete an autumnal color palette, Autumn Purple is the color to pick. This demure reddish-purple is right at home alongside oranges, reds, and yellows.

Autumn Purple
Hex #834468
RGB 131, 68, 104
CMYK 0, 48, 21, 49
//////// End of purple

/////////////////////////// Pink

Watermelon
Watermelon is a warm, medium to dark pink that strongly resembles the color of the inside of a watermelon. This color is also sometimes classified as a red.


Watermelon
Hex #FC6C85
RGB 252, 108, 133
CMYK 0, 57, 47, 1

Flamingo
Flamingo is a light to medium pink that is a little cooler in tone than salmon. This shade is somewhat reminiscent of a flamingo’s feathers.

Flamingo
Hex #FC8EAC
RGB 252, 142, 172
CMYK 0, 44, 32, 1

Coral
Coral is a warm, medium pink that resembles the shade of some sea corals. The term is thought to have first been used for a shade of pink in the 1500’s.

Coral 
Hex #F88379
RGB 248, 131, 121
CMYK 0, 47, 51, 3

Salmon
Salmon is a light to medium pink that somewhat represents the color of a wild salmon’s flesh. This shade of pink is a little warmer than flamingo but cooler than coral.

Salmon
Hex #FF9999
RGB 255, 153, 153
CMYK 0, 40, 40, 0


Pastel Pink
Pastel pink is a very pale, cool pink, often classified as an “Easter color.” It is lighter in tone than both light pink and baby pink.

Pastel pink 
Hex #FFD1DC
RGB 255, 209, 220
CMYK 0, 18, 14, 0

Light Pink
Light pink is a soft, pale shade of pink traditionally dubbed a “little girl’s color.” It is a little darker and warmer in hue than pastel pink.

Light pink 
Hex #FFB6C1
RGB 255, 182, 193
CMYK 0, 29, 24, 0

Cherry Blossom
Cherry blossom is a light shade of pink resembling the blossoms of a cherry tree. Cherry blossom is very similar to the light, baby and pastel pinks.

Cherry blossom
Hex #FFB7C5
RGB 255, 183, 197
CMYK 0, 28, 23, 0

Bubblegum
Bubblegum is a light shade of pink much like the color of a traditional gumball. Bubblegum is a little darker and cooler in tone than baby pink.


Bubblegum
Hex #FFC1CC
RGB 255, 193, 204
CMYK 0, 24, 20, 0

Baby Pink
Baby pink is a light shade of pink falling between pastel and light pink. Baby pink is traditionally thought of as a color best suited for baby girls.

Baby pink 
Hex #F4C2C2
RGB 244, 194, 194
CMYK 0, 20, 20, 4

Dark Pink
Dark pink is a medium to dark shade of pink. With warm overtones and cool undertones, dark pink can compliment other colors in both fields.

Dark pink 
Hex #E75480
RGB 231, 84, 128
CMYK 0, 64, 45, 9

Bright Pink
Bright pink is a vibrant, rich pink color that is a little lighter and cooler than neon pink and warmer and brighter than dark pink.

Bright pink 
Hex #FF007F
RGB 255, 0, 127
CMYK 0, 100, 50, 0


Rouge
Rouge is a dark, dusky purplish pink hue that can also be classified as a red or purple. It can be compared to a very dark shade of blush.

Rouge
Hex #A94064
RGB 169, 64, 100
CMYK 0, 62, 41, 34

Neon Pink
Neon pink is a dark, reddish shade of pink that somewhat resembles the dusky pinks often seen at the end of a sunset.

Neon pink 
Hex #FF6EC7
RGB 255, 110, 199
CMYK 0, 57, 22, 0

Blush
Blush is a medium, dusty pink reminiscent of a very common shade of pressed powder makeup known by the same name. It is cooler than dark pink and paler than rouge.

Blush
Hex #DE5D83
RGB 222, 93, 131
CMYK 0, 58, 41, 13

Fuchsia
Fuchsia is a medium purplish pink with warm undertones. The color is named after the fuchsia flower.


Fuchsia 
Hex #C154C1
RGB 193, 84, 193
CMYK 0, 56, 0, 24

Mauve
Mauve is a light, very cool shade of pink that is sometimes also classified as a purple. It can also be described as a pale, dusty violet.

Mauve
Hex #E0B0FF
RGB 224, 176, 255
CMYK 12, 31, 0, 0

Orchid
Orchid is a medium purplish pink color reminiscent of the pinkish purple flowers of the same name. It is darker in hue than mauve.

Orchid
Hex #DA70D6
RGB 218, 112, 214
CMYK 0, 49, 2, 15

Magenta
Magenta is a dark but bright pink with a purplish tone. Magenta can also be described as a brighter shade of orchid.

Magenta
Hex #FF00FF
RGB 255, 0, 255
CMYK 0, 100, 0, 0


Hot Pink
Hot pink is a warm, bright medium pink that might be compared to a darker shade of bubblegum pink.

Hot pink 
Hex #FF69B4
RGB 255, 105, 180
CMYK 0, 59, 29, 0

Carnation
Carnation is a soft, light to medium pink that resembles the hue of a pink carnation flower. It is similar to but darker than baby pink.

Carnation
Hex #FFA6C9
RGB 255, 166, 201
CMYK 0, 35, 21, 0

Tulip Pink
Tulip pink is a warm, medium shade of pink with a strong similarity to coral or salmon. It is meant to represent the color of a pink tulip flower.

Tulip pink
Hex #FF8E8E
RGB 255, 142, 142
CMYK 0, 44, 44, 0

Tea Rose
Tea rose is a light shade of pink that is similar to baby pink but with a cooler undertone. Tea rose resembles the color of a variety of wild roses by the same name.


Tea rose 
Hex #F4C2C2
RGB 244, 194, 194
CMYK 0, 20, 20, 4

Cotton Candy
Cotton candy is a pale, cool shade of pink similar to light pink or pastel pink. Cotton candy pink is close to the color of the sugary fairground treat known by the same name.

Cotton Candy 
Hex #FFBCD9
RGB 255, 188, 217
CMYK 0, 26, 15, 0

Cameo Pink
Cameo pink is a muted, dusky shade of purplish pink named for the pink backgrounds on old cameo jewelry. Cameo pink also resembles the inside of conch shells.

Cameo pink
Hex #EFBBCC
RGB 239, 187, 204
CMYK 0, 22, 15, 6

French Pink
French pink is a light to medium color of pink with warm, bright overtones. It’s similar to, but lighter in shade than cherry pink.

French pink
Hex #F64A8A
RGB 246, 74, 138
CMYK 0, 70, 44, 4


Strawberry
Strawberry is a light to medium shade of pink with red undertones. It is similar in color to an under ripe strawberry.

Strawberry
Hex #E8888A
RGB 232, 136, 138
CMYK 0, 41, 41, 9

Persian Pink
Persian pink is a medium, soft shade of pink with similarities to orchid and French pink.

Persian pink
Hex #F77FBE
RGB 247, 127, 190
CMYK 0, 49, 23, 3

New York Pink
New York pink is a warm, medium pink that resembles a darker version of strawberry.

New York pink 
Hex #DD8374
RGB 221, 131, 116
CMYK 0, 41, 48, 13

Indian Red
Indian red is a medium to dark but muted shade of pink that can also be classified as a red. With tones of mauve and coral, Indian red coordinates with both warm and cool colors.

Indian red
Hex #CD5C5C
RGB 205, 92, 92
CMYK 0, 55, 55, 20


Munsell Red
Munsell red is another pink you’ll find in the red family. With a rich, saturated bright hue, Munsell red resembles the color of a pink Gerbera daisy.

Munsell red
Hex #F2003C
RGB 242, 0, 60
CMYK 0, 100, 75, 5

Cardinal
Cardinal is a deep, reddish pink shade that can be compared to dark pink or neon pink. It can also be classified among the reds.

Cardinal 
Hex #C41E3A
RGB 196, 30, 58
CMYK 0, 85, 70, 23

Crayola Red
Crayola red is a medium to dark pink that is bright and rich in tone. Although named as a red, it is comparable to bright pink, dark pink or neon pink.

Crayola red
Hex #EE204D
RGB 238, 32, 77
CMYK 0, 87, 68, 7

Crimson
Although the name suggests a red, this particular representation of crimson is like a deep, saturated dark pink.


Crimson  
Hex #DC143C
RGB 220, 20, 60
CMYK 0, 91, 73, 14

Ruby
Ruby is a medium darkish pink shade that is brighter than dark pink but not as warm in tone as neon. This version of the color ruby is more pink and less purplish in tone as a ruby gemstone.

Ruby 
Hex #E0115F
RGB 224, 17, 95
CMYK 0, 92, 58, 12

Redwood
Redwood is a dusky, brownish pink with lilac undertones. Redwood could be compared to a darker, browner shade of Indian red.

Redwood
Hex #A45A52
RGB 164, 90, 82
CMYK 0, 45, 50, 36

Rusty Red
Rusty red, contrary to the name, is in fact a warm, dark pink hue. Rusty red has some coral-like undertones and can be compared to a warmer shade of dark pink.

Rusty red
Hex #DA2C43
RGB 218, 44, 67
CMYK 0, 80, 69, 15


Amaranth
Amaranth is a rich, medium to dark pink. This shade of pink is similar to dark pink but with some warmer overtones.

Amaranth
Hex #E52B50
RGB 229, 43, 80
CMYK 0, 81, 65, 10

Bright Maroon
Bright maroon is a dark, reddish pink color with some hints of warm purple. Similar to a dark magenta, bright maroon is also sometimes classified as a red.

Bright Maroon
Hex #C32148
RGB 195, 33, 72
CMYK 0, 83, 63, 24

Burnt Sienna
Burnt Sienna is often classified as an orange, but this version of the color very much represents a warm, salmon-like pink hue with hints of tangerine.

Burnt Sienna
Hex #E97451
RGB 233, 116, 81
CMYK 0, 50, 65, 9

Candy pink
Candy pink is a deep pink with rich undertones of red and hints of purple. It can be compared to a soft dark pink.


Candy pink
Hex #E4717A
RGB 228, 113, 122
CMYK 0, 50, 46, 11

Cherry pink
Cherry pink is a medium, bright pink with a warm, reddish hue. This color is lighter and pinker than the cherry fruit, but it carries some of the same tones.

Cherry pink 
Hex #DE3163
RGB 222, 49, 99
CMYK 0, 78, 55, 13

Chestnut
Chestnut is a warm but dusky shade of medium to dark pink with brownish undertones. Far pinker than a real chestnut, this shade is similar to a darker, dustier version of dark pink.

Chestnut 
Hex #CD5C5C
RGB 205, 92, 92
CMYK 0, 55, 55, 20

Dark Coral
Dark coral is a shade of pink that is similar to coral, but, as the name suggests, is darker in hue. Dark coral can also be compared to a warmer version of chestnut.

Dark coral
Hex #CD5B45
RGB 205, 91, 69
CMYK 0, 56, 66, 20


Dark Pastel Red
Dark pastel red is a dark, orangey-red pink shade that can also be classified as a red. Dark pastel red has a similarity to tomato red, but with distinctly dusky pink undertones.

Dark pastel red
Hex #C23B22
RGB 194, 59, 34
CMYK 0, 70, 82, 24

Dark Terra Cotta
Dark terra cotta is a medium, dusty pink similar in tone to traditional terra cotta flower pots, but with a more pinkish hue than the orange pots usually associated with the name.

Dark Terra cotta
Hex #CC4E5C 
RGB 204, 78, 92
CMYK 0, 62, 55, 20

Dark Salmon
Dark salmon is a peachy, pink shade that is warmer than salmon. This darker shade of salmon could also fall into the orange family.

Dark salmon 
Hex #E9967A
RGB 233, 150, 122
CMYK 0, 36, 48, 9

Lemonade
Lemonade is a soft, pale pink similar to pastel pink but even paler in tone. Lemonade pink is meant to represent the translucent light pink shade of the drink by the same name.


Lemonade
Hex #F2DBE7
RGB 242, 219, 231
CMYK 0, 10, 5, 5

Peach
Peach is a soft, pale orangey pink shade reminiscent of the color of the outside of a peach fruit. Peach can be classified as either a pink or orange color.

Peach
Hex #FAD1AF
RGB 250, 209, 175
CMYK 0, 16, 30, 2

Crepe
Crepe is a warm, light to medium shade of pink similar to, but lighter than strawberry. Crepe is far more pink in hue than the off-white to yellowy-tan color generally associated with a crepe pastry.

Crepe 
Hex #F89883
RGB 248, 152, 131
CMYK 0, 39, 47, 3

Piggy Pink
This accurately named pale pink is just about the color of a freshly washed pig. It’s subtle enough to be used as a wall color or background color. And as you can see from the RGB value, it has enough blue to make it slightly muted. 

Piggy Pink
Hex #FDDDE6
RGB 253, 221, 230
CMYK 0, 13, 9, 1


Deep Pink
This color’s name might make you think of a dark, calm pink, but Deep Pink looks a lot like an intense near-neon. This color pops against black, making it an excellent choice for accents on athletic wear, flyers, or any application where you want to get someone’s attention.

Deep Pink
Hex #FF1493
RGB 255, 20, 147
CMYK 0, 92, 42, 0

Dust Storm
If you like pink but prefer muted, “dusty” shades, Dust Storm is a great option. This dusky shade looks especially nice against ivory and other pale neutrals. It will add an air of class to stationery, clothing, and website design, making it an especially versatile choice.

Dust Storm
Hex #E5CCC9
RGB 229, 204, 201
CMYK 0, 11, 12, 10

Nadeshiko Pink
This exotic-sounding shade is named after the nadeshiko plant. The plant can be found in many areas of Asia and Europe, and its delicate, fringe-petaled flowers are a soft pink in color. Their pretty, starlike blooms have a pleasantly sweet scent. And in Japan, the name of the flower has also come to be associated with traditional female beauty.

Nadeshiko Pink
Hex #F6ADC6
RGB 246, 173, 198
CMYK 0, 30, 20, 4


Rose Quartz
If you’re looking for a quiet, cool shade of pink that’s very close to purple, Rose Quartz is a great shade. It’s named after a common stone that usually has a grayish-pink appearance. As you can see from its RGB value, Rose Quartz is more blue than most shades of pink.

Rose Quartz
Hex #AA98A9
RGB 170, 152, 169
CMYK 0, 11, 1, 33

Wild Strawberry
Though it’s much more pink than the red glow of a strawberry, Wild Strawberry has a bright and cheerful spirit that can add life to any project. It looks great in very bright color palettes, but it can also add a burst of color to more neutral shades.

Wild Strawberry
Hex #FF43A4
RGB 255, 67, 164
CMYK 0, 74, 36, 0

Razzmatazz
This warm, magenta-rich pink can add some energy to any project. As a variant of raspberry pink, it’s especially well-suited to summer-inspired designs. As you can see from the CMYK values, it has larger amounts of yellow and magenta than many pink shades.

Razzmatazz
Hex #E3256B
RGB 227, 37, 107
CMYK 0, 84, 53, 11

Rose Taupe
Sometimes you need a shade of pink that effectively works as a neutral. And as the name suggests, Rose Taupe sits right between a rosy pink and a sandy taupe. It works well alongside other pale neutrals, and it also makes a stately border on stationery, cards, and invitations.

Rose Taupe
Hex #905D5D
RGB 144, 93, 93
CMYK 0, 35, 35, 44

Rubine Red
Rubine means “ruby,” and this pink shade certainly has the presence of a gemstone. While this color is described as being red, it’s more of a magenta-heavy pink. It’s a great choice if you want a reddish pink that’s bright without being neon.

Rubine Red
Hex #D10056
RGB 209, 0, 86
CMYK 0, 100, 59, 18

Hollywood Cerise
This dreamily-named color is similar to fuchsia. Its bright, summery character makes it a good choice for advertising or any other application where grabbing attention is important. As you can see from both the RGB and CMYK values, it has a good bit of both blue and magenta. That gives it excellent balance.

Hollywood Cerise
Hex #F400A1
RGB 244, 0, 161
CMYK 0, 100, 34, 4


Mexican Pink
This striking, cheerful color holds significant cultural importance in Mexico. Citizens consider it to be a symbol of the country’s charisma, and taxicabs in Mexico City are even painted in Mexican Pink and white. Famed Mexican architect Luis Barragan often incorporates the color into his projects as well.

Mexican Pink
Hex #E4007C
RGB 228, 0, 124
CMYK 0, 100, 46, 11

Steel Pink
This interestingly named color has a somewhat metallic look about it. It’s one of the pink shades named and used by Crayola. It first appeared in a set of colored pencils. Steel Pink is a great choice if you like magenta but would prefer something that’s a little darker and more subdued.

Steel Pink
Hex #CC3366
RGB 204, 51, 102
CMYK 0, 75, 50, 20

Rose Gold
This dusty shade of pink does get somewhat close to the color of rose gold used in jewelry. It looks especially nice beside ivory and pale gray.

Rose Gold
Hex #B76E79
RGB 183, 110, 121
CMYK 0, 40, 34, 28


Rose Bonbon
Rose Bonbon is another shade of pink that has a relatively high proportion of both yellow and magenta. There’s also a good bit of blue, so it’s a balanced shade that manages to be soft and bright at the same time. It’s a classic middle-of-the-road pink that can be useful for a wide range of projects.

Rose Bonbon
Hex #F9429E
RGB 249, 66, 158
CMYK 0, 73, 37, 2

Barbie Pink
This cheerful, bright magenta is a color offered by Pantone. Its youthful charm makes it great for accenting children’s rooms or for use in children’s clothing. As you can see from the CMYK values, Barbie Pink is tempered by some amount of black.

Barbie Pink
Hex #E0218A
RGB 224, 33, 138
CMYK 0, 85, 38, 12

Mulberry
If you’ve seen a mulberry bush, you probably know that actual mulberries are almost black in color. But this shade of pink is almost exactly the color that mulberry juice will stain your hands. It’s a great choice if you need a color that will remind you of summer without being overly bright.

Mulberry
Hex #C54B8C
RGB 197, 75, 140
CMYK 0, 62, 29, 23

Razzle Dazzle Rose
This one might bring back memories of coloring in elementary school. Razzle Dazzle Rose is another Crayola color that can add a healthy dose of cheer to any project. This is another color that manages to be both pale and bright, so it can add some energy to a color palette without becoming overwhelming.

Razzle Dazzle Rose
Hex #FF33CC
RGB 255, 51, 204
CMYK 0, 80, 20, 0

Fandango
Fandango is a bright, highly saturated pink that has a somewhat purplish touch. It pops against its complementary color (a medium bright green), but it also looks nice against pale yellow. Fandango is ideal for projects that need a burst of fun, free-spirited energy.

Fandango
Hex #B53389
RGB 181, 51, 137
CMYK 0, 72, 24, 29

Puce
This uncommon color name means a dark reddish purple-brown. But this particular shade is more of a pinkish brown with a hint of purple. It’s less brown than many of the dusty shades of pink we’ve seen on the list, making it a happy medium between bright pink and dusty pink.

Puce
Hex #CC8899
RGB 204, 136, 153
CMYK 0, 33, 25, 20


Old Rose
Old Rose is one of the many muted, mauve-like shades of pink out there. The name is especially fitting, as it’s very similar to the color of a pink rose as it starts to wilt. Its vintage appeal makes it ideal for historically-inspired projects. It’s also a great accent color against paler neutrals like taupe, ivory, and light gray.

Old Rose
Hex #C08081
RGB 192, 128, 129
CMYK 0, 33, 33, 25

Rosewood
Rosewood is prized as a tonewood for high-end guitars, and it’s also well known for its beautiful chocolatey grain and sweet, rosy scent. However, some pieces of unfinished rosewood do have a color similar to this one. Rosewood has more black than many pink shades (as seen on its CMYK values), so it has more depth and presence than many varieties of pink.

Rosewood
Hex #9E4244
RGB 158, 66, 68
CMYK 0, 58, 57, 38

Taffy
This delicate, candy-inspired hue is a pale pink that still manages to be decently energetic. It’s ideal for use in whimsical designs alongside similarly bright colors. It has a relatively high proportion of yellow and a relatively low proportion of black, making it an especially bright option.

Taffy
Hex #FA86C4
RGB 250, 134, 196
CMYK 0, 46, 22, 2


Turkish Rose
Many shades of pink are described as being some variety of rose. Turkish Rose is a somewhat unusual shade. Though it’s somewhat muted, it still delivers fresh energy to any color palette. Its uncommon characteristics might be explained in part by its RGB value. It has somewhat similar proportions of red, green, and blue.

Turkish Rose
Hex #B57281
RGB 181, 114, 129
CMYK 0, 37, 29, 29

Punch
This fruity color’s high proportion of red makes it ideal for projects that require a more in-your-face shade of pink. This rosy shade has enough warmth to avoid seeming aggressive, and it looks very nice next to bright yellow.

Punch
Hex #F25278
RGB 242, 82, 120
CMYK 0, 66, 50, 5

Paradise Pink
This tropically-inspired pink color offers a beautiful depth not often seen in most shades of pink. Its complementary color, a bright and lively turquoise, looks especially beautiful alongside it. Its low proportions of both blue and black help explain its eye-catching brightness.

Paradise Pink
Hex #E63E62
RGB 230, 62, 98
CMYK 0, 73, 57, 10


Raspberry Rose
This deep, purplish magenta is aptly named. It is approximately between rose and raspberry shades of pink. It has relatively high proportions of both red and blue (as seen in its RGB values), so it has a bit of a purplish character.

Raspberry Rose
Hex #B3446C
RGB 179, 68, 108
CMYK 0, 62, 40, 30

Light Crimson
You probably already know crimson as a deep red color. But Light Crimson is effectively a diluted version. Its RGB value indicates that it has a high proportion of red, but a small amount of blue helps to balance it out. The result is an attractive pink that’s pale yet bright. A classic choice for a range of projects.

Light Crimson
Hex #F56991
RGB 245, 105, 145
CMYK 0, 57, 41, 4

Pink Sherbet
This refreshing light pink is just about the exact color of raspberry sherbet. Though it’s more saturated than a pastel, it has a pastel-like quality that makes it very easy on the eyes. It looks great with other bright yet soft colors like pale lime green and pale orange.

Pink Sherbet
Hex #F78FA7
RGB 247, 143, 167
CMYK 0, 42, 32, 3


Tickle Me Pink
If the name of this pretty shade sounds familiar, you might have read it off the side of a crayon years ago. Tickle Me Pink is a soft petal pink that’s just slightly more saturated than a pastel. It looks nice beside soft greens, blues, and yellows.

Tickle Me Pink
Hex #FC89AC
RGB 252, 137, 172
CMYK 0, 46, 32, 1

Thulian Pink
Thulian Pink is a bright, saturated shade that looks a bit like Light Crimson. It is very slightly purplish, so it’s bright without seeming neon. Thulian Pink is a great choice if you need a shade of pink that’s slightly cooler in color than most.

Thulian Pink
Hex #DE6FA1
RGB 222, 111, 161
CMYK 0, 50, 27, 13

Brilliant Rose
As the name suggests, Brilliant Rose is an especially high-energy shade of pink. It’s very bright but not overly dark, and it isn’t quite as intense as hot pink. Brilliant Rose looks especially nice next to other tropically-inspired light colors.

Brilliant Rose
Hex #FF55A3
RGB 255, 85, 163
CMYK 0, 67, 36, 0

Lace
So far, many shades on the list have been bright, energetic pinks. But this delicate shade with cool undertones is soft enough to work as a wall color. As its name indicates, it’s about the same color as pale pink lace. Lace is also a great choice for a gentle website backdrop.


Lace
Hex #FFD8F0
RGB 255, 216, 240
CMYK 0, 15, 6, 0

Smitten
This happy shade of magenta has a suitable name. Compared to many other shades of pink on the list, it’s a bit more purple. Its high proportions of red, blue, and black contribute to its intensity.

Smitten
Hex #C84186
RGB 200, 65, 134
CMYK 0, 68, 33, 22

Your
This one has an odd name, but its pale and peachy color is sure to appeal to plenty of people. Unlike many shades of pink, Your has equal amounts of magenta and yellow, and that helps create its soft warmth. This color contains no black, and its paleness makes it a great wall color if you want something warmer than eggshell.

Your
Hex #FFC0C0
RGB 255, 192, 192
CMYK 0, 25, 25, 0

Careys
This pink shade looks a lot like a soft, diluted mauve. It’s a great choice if you’re looking for a pale pink that leans more toward purple than it does toward peach. Thanks to its fairly large proportion of blue and green, Careys has a cool undertone that gives it a particularly soothing quality.


Careys
Hex #D8A8A8
RGB 216, 168, 168
CMYK 0, 22, 22, 15

Oyster
This very soft pink is inspired by the color of the inside of an oyster. Even a quick look at its CMYK values shows you that it’s a very unsaturated shade. Its very small percentages of magenta, yellow, and black give it a barely-there quality, and it makes a nice calm wall or background color.

Oyster
Hex #F0D8D8
RGB 240, 216, 216
CMYK 0, 10, 10, 6

Shimmering Blush
Shimmering Blush is a pleasant pink shade that does almost have a metallic quality about it. It’s very similar to the color of most powdered blush, and it strikes a beautiful balance between rose and lavender. Since it has slightly more red than blue and green, Shimmering Blush is also well balanced in terms of both warmth and coolness.

Shimmering Blush
Hex #D98695
RGB 217, 134, 149
CMYK 0, 38, 31, 15

Sea
Sea might seem like a strange name for a shade of pink. However, this color is just about the color of the inside of a seashell. With equal amounts of magenta and yellow, Sea is a very warm, almost peachy shade of pink. However, it also has substantial amounts of green and blue, so it manages to not be overly warm.


Sea
Hex #F09090
RGB 240, 144, 144
CMYK 0, 40, 40, 6

Brink
This bright medium pink is a great option for projects requiring a shade of pink that’s just a step down from hot pink. As you can see through its CMYK values, Brink has no cyan or black, and its RGB values show that it has far less green and blue than it does red. That helps explain its vivacious warmth. Brink pops against black, and it looks nice beside its complementary color – a very bright seafoam shade.

Brink
Hex #FF6090
RGB 255, 96, 144
CMYK 0, 62, 44, 0

Hippie
Hippie is somewhat of an outsider among other shades of pink. It’s too red to be mauve, yet too purple to be raspberry. It looks a little like a watered-down maroon. This muted color looks nice beside blue and green jewel tones, but it would also work well alongside other neutrals in a calm color palette.

Hippie
Hex #A84860
RGB 168, 72, 96
CMYK 0, 57, 43, 34

Light Deep Pink
The name of light deep pink might seem like a contradiction at first. But while this color is lighter than some pinks, it has incredible depth and presence. It’s ideal if you need a light pink that can grab attention without being quite as loud as a neon color. If you’re looking for a fresh contrast, Light Deep Pink creates a memorable pop against navy blue.


Light Deep Pink
Hex #FF5CCD
RGB 255, 92, 205
CMYK 0, 64, 20, 0

Wild Orchid
Orchid shades of pink have a calming beauty thanks to their light quality and slight blue undertones. Wild orchid, in particular, has a very slight dusty quality. It’s a good choice if you’re looking for a calming shade, and it looks nice alongside blues and grays.

Wild Orchid
Hex #D470A2
RGB 212, 112, 162
CMYK 0, 47, 24, 17

Cerise Pink
Cerise means a deep, bright red, and Cerise Pink can accordingly be described as a deep, bright pink. This is one of the most vivacious shades of pink you can choose. Thanks to its depth, it’s a great choice if you need something with substance that is still a high-energy shade. Cerise Pink works well alongside high-energy greens and blues.

Cerise Pink
Hex #EC3B83
RGB 236, 59, 131
CMYK 0, 75, 44, 7

Shocking Pink
As the name indicates, Shocking Pink is an electric shock to the eyes. Its CMYK values indicate that it’s primarily magenta. But as you can see from its RGB values, Shocking Pink also has a good bit of blue that gives it some depth. Shocking Pink looks great beside its complementary color, which is an especially bright Kelly green. It also provides a striking contrast against very dark background colors like dark hunter green or navy.


Shocking Pink
Hex #FC0FC0
RGB 252, 15, 192
CMYK 0, 94, 24, 1

Hit
Hit is another interestingly-named color. It’s a peachy, coral-like pink that looks great alongside a bright sky blue. As you can see based on the CMYK values, Hit contains more yellow than it does magenta. It’s a great choice if you’re looking for a shade of pink that is warmer than most but still has a softness about it.

Hit
Hex #FFA878
RGB 255, 168, 120
CMYK 0, 34, 53, 0

Lady
Lady is a dignified shade of pink that has a bit of a vintage look about it. It’s a little peachy, but it has much more red than Hit. It sits roughly between peach and mauve. Lady looks nice next to various shades of blue.

Lady
Hex #F0C0A8
RGB 240, 192, 168
CMYK 0, 20, 30, 6

Neon Fuchsia
There are plenty of shades of bright pink that are billed as great alternatives to neon, but sometimes you just need a genuine neon shade of pink. That’s where Neon Fuchsia comes in. On its own, fuchsia is close to neon, but this version packs some extra punch. As indicated by its CMYK values, it has a high degree of both magenta and yellow. Its brightness is slightly tempered by blue, but its high proportion of red ensures plenty of presence.


Neon Fuchsia
Hex #FE4164
RGB 254, 65, 100
CMYK 0, 74, 61, 0

Ultra Pink
This is an interesting shade of pink with some clear violet undertones. It has equal amounts of red and blue, and as you can see through its CMYK values, it has no cyan, yellow, or black – only magenta. Ultra Pink has a decidedly modern, sophisticated look, and it looks nice alongside creamy white shades.

Ultra Pink
Hex #FF6FFF
RGB 255, 111, 255
CMYK 0, 56, 0, 0

Schauss Pink
If you find Schauss Pink to be calming, scientific evidence agrees with you. This color is named after Alexander Schauss, a researcher who extensively investigated the effects of color on emotions. He conducted the research at Seattle’s Naval Correctional Facility. Schauss named the color Baker-Miller Pink after the directors of the facility, but the color has since also been called Schauss Pink. You may also sometimes hear it described as P-618 or Drunk-Tank Pink.

Schauss Pink
Hex #FF91AF
RGB 255, 145, 175
CMYK 0, 43, 31, 0

Ruddy Pink
This aptly-named color is roughly the tone of a healthy amount of redness in the face. It’s also close to the color of many shades of powdered blush. Its slightly dusky quality makes it look especially good in patterns with cocoa browns or soft, pale grays.


Ruddy Pink
Hex #E18E96
RGB 225, 142, 150
CMYK 0, 37, 33, 12

Pink Pearl
Though you can’t necessarily see a pearlescent luster through a computer screen, Pink Pearl does seem to have a bit of a sheen to it. It’s soft in color and almost lavender, and it’s a relaxing choice of color to have around. Incorporating Pink Pearl throw pillows or rugs can add a sense of homey calm to any living room.

Pink Pearl
Hex #E7ACCF
RGB 231, 172, 207
CMYK 0, 26, 10, 9

Lavender Rose
Lavender Rose is a shade of pink that really lives up to its name. Its color really is right between that of lavender and of a pale pink rose. It’s close to the color of a lilac bloom. If you like a somewhat bright wall color, this one is a good choice. If you’re creating a color palette, Lavender Rose works beautifully with its seafoam green complementary color.

Lavender Rose
Hex #FBA0E3
RGB 251, 160, 227
CMYK 0, 36, 10, 2

Shampoo
You don’t necessarily see pink shampoo all too often anymore, but this pale, pearly shade does accurately capture the color of pink shampoo. As you can see from the CMYK values, it’s primarily magenta, but the color is low in saturation. Shampoo is a great shade of pale pink to use as a wall color or as a background.


Shampoo
Hex #FFCFF1
RGB 255, 207, 241
CMYK 0, 19, 5, 0

Spanish Pink
This soft pink color is sometimes described as being a generic shade of pink. Its youthful, floral quality makes it a great choice for use in lipsticks, and it’s sometimes used in high-end lip color. Spanish Pink is made up of a high proportion of red, but its equal proportions of blue and green make it pleasingly balanced.

Spanish Pink
Hex #F7BFBE
RGB 247, 191, 190
CMYK 0, 23, 23, 3

Valentine Pink
Valentine’s Day is sometimes associated with very bright pink shades. But if you’d prefer to celebrate with something a little calmer, you might find this shade to be a good choice. As you can see in its RGB values, Valentine Pink also has a high proportion of blue, and its cool undertones give it a pleasant and balanced quality. This color is close to the color of candy hearts, making its name all that more appropriate.

Valentine Pink
Hex #E6A6BE
RGB 230, 166, 190
CMYK 0, 28, 17, 10

Silvery Pink
This pretty color is ideal if you’re looking for something that’s in between gray and pink. Silvery Pink has a higher proportion of black than many shades of pink on the list (as you can see in its CMYK values), and that helps give it its shadowy quality. It also has relatively high amounts of green and blue, making it one of the cooler-leaning shades of pink.

Silvery Pink
Hex #DCB5B4
RGB 220, 181, 180
CMYK 0, 18, 18, 14

Melon
This soft, peachy color is a bit more subdued than the color of a watermelon. Melon is right between the shades of salmon and peach, and it’s cheerful yet mellow. You can see that quality reflected in the CMYK values. Melon has slightly more yellow than it does magenta, but it has a little bit of black. This pink shade pairs well with light blue and light green, as well as some shades of light purple.

Melon
Hex #F7BCAC
RGB 247, 188, 172
CMYK 0, 24, 30, 3

Milano
This classy shade of pink lies somewhere between mauve and coral. It’s energetic without being too bright, and it’s a bit more red than many other pink shades. You can see this in its RGB values. There’s over twice the proportion of red than there is of blue or green. And as its CMYK values show, its large amounts of both magenta and yellow help create its warmth.

Milano
Hex #D95D67
RGB 217, 93, 103
CMYK 0, 57, 53, 15

Sweet Pink
This rosy shade of pink certainly lives up to its name. Sweet Pink has a blush-like character thanks to its large amounts of magenta and yellow. It works well alongside various shades of green, but it also looks nice beside light or dark blues. Its complementary color is a sky blue with just a hint of turquoise.


Sweet Pink
Hex #EE918D
RGB 238, 145, 141
CMYK 0, 39, 41, 7

Knockout Pink
Knockout Pink is easily one of the most striking pink shades on the list. It’s very similar to the color of a bright pink highlighter, but it has a bit more depth. Knockout Pink is a great choice for advertisements or for other projects that require a high-energy, attention-grabbing color scheme. As you can see from its CMYK values, part of Knockout Pink’s high-energy nature comes from its high proportion of magenta and yellow.

Knockout Pink
Hex #FF3EA5
RGB 255, 62, 165
CMYK 0, 76, 35, 0

Grapefruit Pink
Grapefruit is one of the most easily recognized pink fruits, and this shade of Grapefruit Pink does it justice. It’s roughly the color of ruby red grapefruit juice. It has relatively large amounts of both blue and yellow, making it nicely balanced. It looks great next to its complementary color, a bright blue that’s in between sky blue and turquoise.

Grapefruit Pink
Hex #E0707C
RGB 224, 112, 124
CMYK 0, 50, 45, 12

Champagne Pink
The glamorous nature of pink champagne translates well to the world of color, and this quiet shade would work very nicely as a wall color. Champagne Pink has a relatively large amount of green and blue, and that helps explain its cool undertones and quiet look. If you’re looking for a pale pink that pairs nicely with gold, this is also a good shade to consider.


Champagne Pink
Hex #F6E1D3
RGB 246, 225, 211
CMYK 0, 9, 14, 4

Lip Pink
This unusual, brownish pink is designed to approximate the color of most people’s lips. Though it’s still technically a shade of pink, Lip Pink approaches being a neutral, and it’s good for adding just a hint of warmth to otherwise completely neutral color palettes.

Lip Pink
Hex #DBAC98
RGB 219, 172, 152
CMYK 0, 21, 31, 14

Passion Pink
Passion Pink is very close to being an energetic light purple. Like many brighter, purple-tinged pinks, this one has a modern edge to it. It pairs nicely with silver, but it also looks nice beside its complementary color, a medium green.

Passion Pink
Hex #CE74A7
RGB 206, 116, 167
CMYK 0, 44, 19, 19

Nude Pink
Of all shades on the list, Nude Pink must be the closest to being a true neutral. It has a relatively high proportion of black compared to most pink shades, and it also has a relatively small proportion of magenta. Plus, as you can see from its RGB values, Nude Pink has relatively even amounts of red, green, and blue. It pairs nicely with gray and with calm shades of blue.


Nude Pink
Hex #DDC0B4
RGB 221, 192, 180
CMYK 0, 13, 19, 13

Rosy Pink
Rosy Pink is a lovely shade that’s somewhere between a rose pink and a hot pink. It’s great for use as a text color against a dark background, but it’s also a welcome addition to a bright, swirling color palette. A decent amount of blue stops its brightness from being overpowering, but it still offers plenty of energy.

Rosy Pink
Hex #FF66CC
RGB 255, 102, 204
CMYK 0, 60, 20, 0

Gold Pink
Gold Pink is another pink shade on the list that’s very close to being a neutral. As you can see from its CMYK values, it has almost the same amount of black as it does magenta. That helps explain its grayish color. Gold Pink is similar in color to rose gold, and it makes a dignified website backdrop or background for stationery.

Gold Pink
Hex #E6C7C2
RGB 230, 199, 194
CMYK 0, 13, 16, 10

Misty Rose
Misty Rose is a gentle pastel pink with just a hint of peach. If you’re looking for a wall color with a little more warmth than eggshell or other forms of off-white, Misty Rose is a great option. It looks beautiful alongside very pale pastel blues and greens. As you can see in the CMYK value, it has slightly more yellow than magenta, which explains its peachy glow.


Misty Rose
Hex #FFE4E1
RGB 255, 228, 225
CMYK 0, 11, 12, 0

Mauvelous
This playfully-named shade is essentially a more pinkish version of mauve. As you can see from the RGB values, Mauvelous has a good amount of blue. That helps give it its cool undertones. Mauvelous looks especially good with pale shades of blue.

Mauvelous
Hex #EF98AA
RGB 239, 152, 170
CMYK 0, 36, 29, 6

Light Blush
This light pink is about the color of most light-colored powdered blushes you can find at almost any store. It’s also a classic example of what most people would picture when they imagine light pink. With a good proportion of magenta, a decent amount of yellow, and very little black, it’s a well-balanced pink that’s a little on the bright side.

Light Blush
Hex #F1ABB9
RGB 241, 171, 185
CMYK 0, 29, 23, 5

Copper Rose
Copper Rose is a somewhat unusual shade of pink. It might best be described as being rose gold with a little brown mixed in. And as the name suggests, it’s also roughly the color of a rose mixed with the color of copper. This reddish-metallic hue has a quiet look about it, and its complementary color is a somewhat dusty shade of blue. As you can see, much of its subdued nature comes from the large amount of black present.


Copper Rose
Hex #996666
RGB 153, 102, 102
CMYK 0, 33, 33, 40

Raspberry Glace
This color’s appetizing name seems accurate. It does look a lot like a sugar-preserved raspberry. It does have a fairly purplish look that’s explained by its high proportion of blue in relation to red. If you like quieter, dusty pinks but want something that’s more mulberry-like in appearance, Raspberry Glace is worth considering.

Raspberry Glace
Hex #915F6D
RGB 145, 95, 109
CMYK 0, 34, 25, 43

Debian Red
Many different colors are named after company logos they are used on. Debian Red is the logo color of the Linux operating system Debian, a free software system collaboratively developed by volunteers. While it has “red” in the name, Debian Red is essentially a very vivid magenta. It’s a high-energy, summery shade that really pops against lemon yellow.

Debian Red
Hex #D70A53
RGB 215, 10, 83
CMYK 0, 95, 61, 16

Ruber
Ruber is a lovely, raspberry-like pink that looks great with turquoise. As you can see by looking at its RGB values, it has a large amount of red but a medium amount of blue. That combination gives it a mildly purplish hue. Ruber is a great color choice if you’d like a color that offers a lot of presence without being overly bright.


Ruber
Hex #CE4676
RGB 206, 70, 118
CMYK 0, 66, 43, 19

Vanilla Ice
Vanilla Ice is a sweet petal pink that can add a springlike magic to any color palette. It goes well with pastel yellows and soft spring greens. This color has a somewhat bright quality, but the amount of blue seen in its RGB value helps add just enough coolness.

Vanilla Ice
Hex #F38FA9
RGB 243, 143, 169
CMYK 0, 41, 30, 5

Light Hot Pink
As the name suggests, Light Hot Pink is essentially a diluted, pastel version of hot pink. This color is probably what most people would picture when imagining a pale pink. There’s enough green and blue present to create just a hint of a cool undertone, but Light Hot Pink isn’t purple in the slightest.

Light Hot Pink
Hex #FFB3DE
RGB 255, 179, 222
CMYK 0, 30, 13, 0

Super Pink
This cheerful yet cool pink shade is reminiscent of electric purple, but it has more magenta present. It’s a bit like a darker lilac bloom, and it can add a springlike touch to any project. Super Pink is a departure from the shades of pink you often see, so it’s a great choice for a project that needs to stand out.


Super Pink
Hex #CF6BA9
RGB 207, 107, 169 
CMYK 0, 48, 18, 19

China Rose
China Rose is a stately, slightly purple shade that has a slightly dusky quality. This is one of the shades of pink that pairs nicely with gold, but it also looks nice dressed down alongside navy or other more demure shades of blue. As you can see in the CMYK values, China Rose’s large proportion of black gives it a more muted presence.

China Rose
Hex #A8516E
RGB 168, 81, 110
CMYK 0, 52, 35, 34

Deep Pruce
Pruce is a great color if you like earth-toned pinks, and Deep Pruce is effectively a darker, more present version. This is one of the pink shades that is close to being a neutral, but not quite. If you’re looking for a gentle and dignified color, Deep Pruce is worth considering.

Deep Pruce
Hex #A95C68
RGB 169, 92, 104
CMYK 0, 46, 38, 34

French Fuchsia
This cheerful, bright pink is one of the many variants of fuchsia you’ll come across while searching for just the right shade of pink. As evident in the CMYK values, it has a good bit of magenta and yellow, both of which add to its noticeable presence.


French Fuchsia
Hex #FD3F92
RGB 253, 63, 146
CMYK 0, 75, 42, 1
/////////////////////// End of pink

////////////// Brown
Almond
Almond is a cool, light brown with a semi grayish hue. This color could also be classified in the gray or white family.


Almond
Hex #EFDECD 
RGB 239, 222, 205
CMYK 0, 7, 14, 6

Auburn
Auburn is a rich, reddish brown color with a leaning towards the red family. It is more brown than burgundy, but redder than burnt umber.

Auburn
Hex #A52A2A
RGB 165, 42, 42
CMYK 0, 75, 75, 35

Beaver
Beaver is a medium, grayish brown with a cool undertone. It is similar to, but cooler in tone than taupe.

Beaver
Hex #9F8170
RGB 159, 129, 112
CMYK 0, 19, 30, 38

Beige
Beige is a very pale, tannish shade of brown. It is sometimes classified as a white, and is cooler in tone than tan.

Beige
Hex #F5F5DC
RGB 245, 245, 220
CMYK 0, 0, 10, 4


Bisque
Bisque is a pale, creamy shade of brown with a similarity to sand. It can also be classified as a shade of white.

Bisque 
Hex #FFE4C4
RGB 255, 228, 196
CMYK 0, 11, 23, 0

Bistre
Bistre is a very dark, semi cool shade of brown with similarities to dark brown and coffee, though darker than both of these shades.

Bistre 
Hex #3D2B1F
RGB 61, 43, 31
CMYK 0, 30, 49, 76

Bole
Bole is a medium to dark brown shade with a cool, reddish purple undertone. It is similar in hue to burgundy, but browner and more muted.

Bole
Hex #79443B
RGB 121, 68, 59
CMYK 0, 44, 51, 53

Bone
Bone is a very pale, grayish shade of brown with similarities to parchment and light gray.


Bone
Hex #E3DAC9
RGB 227, 218, 201
CMYK 0, 4, 11, 11

Brass
Brass is medium, warm brown with a strong yellowish tone and hints of green. The color brass resembles the color of the metal by the same name.

Brass
Hex #B5A642
RGB 181, 166, 66
CMYK 0, 8, 64, 29

Bronze
Bronze is a medium, warm shade of brown with an orange tone. Similar to copper, but warmer in tone, bronze resembles the metal by the same name.

Bronze 
Hex #CD7F32
RGB 205, 127, 50
CMYK 0, 38, 76, 20

Burnt Umber
Burnt umber is a medium to dark shade of brown with a leaning towards a rich, dark red. It is a much warmer and redder shade of umber.

Burnt umber
Hex #8A3324
RGB 138, 51, 36
CMYK 0, 63, 74, 46


Cafe Au Lait
Cafe au lait is a light to medium brown shade similar to a dark beige or tan. It is reminiscent of the color of a latte, but slightly cooler in tone.

Cafe au lait
Hex #A67B5B
RGB 166, 123, 91
CMYK 0, 26, 45, 35

Cafe Noir
Cafe noir is a dark shade of brown similar to dark brown and coffee. Cafe noir is cooler in tone than dark brown.

Cafe noir
Hex #4B3621
RGB 75, 54, 33
CMYK 0, 28, 56, 71

Champagne
Champagne is a light shade of brown that can also be classified as a shade of white. It is warmer in tone than beige and more saturated in color than bisque.

Champagne
Hex #FAD6A5
RGB 250, 214, 165
CMYK 0, 14, 34, 2

Cinnamon
Cinnamon is a medium, warm shade of brown with hints of yellowy orange. It is lighter and warmer in tone than the spice by the same name.


Cinnamon 
Hex #D2691E
RGB 210, 105, 30
CMYK 0, 50, 86, 18

Coffee
Coffee is a dark, cool shade of brown with a somewhat grayish undertone. It is cooler than dark brown.

Coffee
Hex #6F4E37
RGB 111, 78, 55
CMYK 0, 30, 50, 56

Deep Coffee
Deep coffee is a dark, cool shade of brown with a purplish red tone. It is darker and warmer in tone than coffee, but cooler than dark brown.

Deep coffee
Hex #704241 
RGB 112, 66, 65
CMYK 0, 41, 42, 56

Copper
Copper is a medium, warm shade of brown with hints of soft orange. It is similar in color to the metal by the same name, but warmer and more muted.

Copper
Hex #B87333
RGB 184, 115, 51
CMYK 0, 38, 72, 28


Dark Brown
Dark brown is deep shade of brown with more similarity to the color of chocolate or coffee than the colors represented by those names.

Dark brown
Hex #654321
RGB 101, 67, 33
CMYK 0, 34, 67, 60

Taupe
Taupe is a light to medium brown with a gray, earthy hue. It is similar to beaver, but warmer in tone.

Taupe 
Hex #483C32
RGB 72, 60, 50
CMYK 0, 17, 31, 72

Tan
Tan is a light shade of brown with similarities to beige and sand. It is warmer in tone than beige and cooler than sand.

Tan
Hex #D2B48C
RGB 210, 180, 140
CMYK 0, 14, 33, 18

Chestnut
Chestnut is a medium shade of brown with a pinky red tone. It is similar in color to the fruit of a chestnut tree, but paler and leaning more towards red.


Chestnut
Hex #CD5C5C
RGB 205, 92, 92
CMYK 0, 55, 55, 20

Sand
Sand is a light, cool shade of brown that is similar to bisque, but cooler in tone. Sand is similar in color to the sands of some beaches.

Sand
Hex #F6D7B0
RGB 246, 215, 176
CMYK 0, 13, 28, 4

Ecru
Ecru is a light shade of brown with a cool, pale yellow undertone. It is similar in color to sand, but warmer in hue.

Ecru
Hex #C2B280
RGB 194, 178, 128
CMYK 0, 8, 34, 24

Fawn
Fawn is a light, warm shade of brown with a bright, peachy orange tone. It is similar in color to the shell of a brown chicken egg.

Fawn 
Hex #E5AA70
RGB 229, 170, 112
CMYK 0, 26, 51, 10


Ginger
Ginger is a warm, medium brown with a rich gold tone. It is similar in color to the spice of the same name, but a little warmer and lighter.

Ginger
Hex #B06500
RGB 176, 101, 0
CMYK 0, 43, 100, 31

Golden Brown
Golden brown is a medium to dark warm shade of brown with a hint of cool, natural gold. It is similar to ginger, but a little paler and cooler.

Golden brown
Hex #996515
RGB 153, 101, 21
CMYK 0, 34, 86, 40

Khaki
Khaki is a light shade of brown similar in color to the fabric of the same name that is often used for men’s trousers. It can be compared to tan, but it is cooler in tone.

Khaki
Hex #C3B091
RGB 195, 176, 145
CMYK 0, 10, 26, 24

Mahogany
Mahogany is a deep, rich shade of medium brown with a warm, reddish tone. It is similar to cinnamon, but darker and warmer.


Mahogany
Hex #C04000
RGB 192, 64, 0
CMYK 0, 67, 100, 25

Ochre
Ochre is a warm, medium shade of brown with a soft, yellowish undertone. It is similar in color to bronze, but with a more earthy orange tone.

Ochre
Hex #CC7722
RGB 204, 119, 34
CMYK 0, 42, 83, 20

Light Brown
Light brown is a medium shade of brown with a soft, warm undertone. It is similar in color to ochre, but a little darker.

Light brown
Hex #B5651D
RGB 181, 101, 29
CMYK 0, 44, 84, 29

Saddle Brown
Saddle brown is a dark, warm shade of brown. It is similar in color to russet, but a little lighter and warmer.

Saddle brown
Hex #8B4513
RGB 139, 69, 19
CMYK 0, 50, 86, 45


Wheat
Wheat is a light shade of brown that can also be classified as a white. It is similar in color to bisque, but a little darker and warmer. It is more peach in tone than the kernels of the wheat plant.

Wheat
Hex #F5DEB3
RGB 245, 222, 179
CMYK 0, 9, 27, 4

Russet
Russet is a dark shade of brown with similarities to saddle brown, but a little darker and cooler. Russet also has a little hint of a red undertone.

Russet
Hex #80461B
RGB 128, 70, 27
CMYK 0, 45, 79, 50

Rust
Rust is a medium, warm reddish shade of brown with a similarity to the color of rusted metal. It resembles the hue of bronze, but it is richer and redder.

Rust
Hex #B7410E
RGB 183, 65, 14
CMYK 0, 64, 92, 28

Sepia
Sepia is a dark shade of brown that represents the color of the ink used in old sepia print photographs. It is similar to dark brown, but a little warmer in tone.


Sepia
Hex #704214
RGB 112, 66, 20
CMYK 0, 41, 82, 56

Sienna
Sienna is a dark, reddish shade of brown with similarities to russet and mahogany. It is also closer in color to the fruit of the chestnut tree than the color chestnut.

Sienna
Hex #A0522D
RGB 160, 82, 45
CMYK 0, 49, 72, 37

Antique Brass
Antique brass is a soft, light shade of brown with a similarity to bisque, but darker. Antique brass is a cooler tone than brass and leans a little towards peach.

Antique brass
Hex #CD9575
RGB 205, 149, 117
CMYK 0, 27, 43, 20

Burlywood
Burlywood is a very pale, warm shade of brown with similarities to bisque and desert sand. It is a little more peach in hue than tan.

Burlywood
Hex #DEB887
RGB 222, 184, 135
CMYK 0, 17, 39, 13


Peru
Peru is a light to medium brown with a warm tone. It is similar in color to cinnamon, but lighter and a little less orange in undertone.

Peru
Hex #CD853F
RGB 205, 133, 63
CMYK 0, 35, 69, 20

Tumbleweed
Tumbleweed is a light shade of brown with similarities to beige or bisque. It is cooler and more orange in tone than tan.

Tumbleweed
Hex #DEAA88
RGB 222, 170, 136
CMYK 0, 23, 39, 13

Dark Vanilla
Dark vanilla is a light, grayish shade of brown with similarities to taupe and sand. It can also be classified as a gray or a white.

Dark vanilla
Hex #D1BEA8
RGB 209, 190, 168
CMYK 0, 9, 20, 18

Tuscan Brown
Tuscan brown is a dark shade of brown with a cool tone. It is similar in color to dark brown but cooler and with hints of gray.

Tuscan brown
Hex #6F4E37
RGB 111, 78, 55
CMYK 0, 30, 50, 56

Wood Brown
Wood brown is a light to medium shade of brown similar in shade to light colored hardwood floors. It is similar in color to fawn but with a cooler tone.

Wood brown
Hex #C19A6B
RGB 193, 154, 107
CMYK 0, 20, 45, 24

Deer
Deer is a light to medium shade of brown with a strong similarity to tan. It is also similar in color to taupe, but warmer in tone.

Deer
Hex #BA8759
RGB 186, 135, 89
CMYK 0, 27, 52, 27

Chamoisee
Chamoisee is a light shade of brown with similarities to beaver, but warmer in tone. It could also be described as a warmer shade of taupe.

Chamoisee
Hex #A0785A
RGB 160, 120, 90
CMYK 0, 25, 44, 37

Dirt
Dirt is a medium, cool shade of brown that is similar to chamoisee. It can also be described as a tan that is darker in color and grayer in tone.

Dirt
Hex #9B7653
RGB 155, 118, 83
CMYK 0, 24, 46, 39

Coconut
Coconut is a medium shade of brown with similarities to chamoisee but warmer in tone. It is lighter in color and cooler in tone than the color of a coconut shell.

Coconut
Hex #965A3E
RGB 150, 90, 62
CMYK 0, 40, 59, 41

Windsor Tan
Windsor tan is a warm, medium shade of brown that is similar in color to light brown, but much darker and richer.

Windsor tan
Hex #A75502
RGB 167, 85, 2
CMYK 0, 49, 99, 35

Rufous
Rufous is a dark, reddish shade of brown. It is similar to auburn, but without the purplish undertone.

Rufous
Hex #A81C07
RGB 168, 28, 7
CMYK 0, 83, 96, 34

Acorn
An acorn is the nut or fruit of several different varieties of oak tree, usually found lying around the tree’s base. Whether they’re used to make flour or just useful for decorations, the soft brown and gentle red undertones of these little kernels make them a perfect descriptor for the shade of brown that bears their name.

Acorn
Hex #D7A98C
RGB 215, 169, 140
CMYK 0, 21, 35, 16

Ash Brown
This particular shade of brown may seem like an odd choice for the “ash” name, as it doesn’t look nearly gray enough to resemble the ash from a fire. However, Ash Brown is actually named after the wood of the ash tree, which has a bright reddish brown or reddish green tint to its branches and bark.

Ash Brown
Hex #98623C
RGB 152, 98, 60
CMYK 0, 36, 61, 40

Ash Gray
Related to the previous entry, Ash Gray looks a little bit more like the ash from a fire, but its name is still derived from its resemblance to the bark of the ash tree. In contrast to Ash Brown, however, Ash Gray has a noticeably cooler tint to it, and the end result is a grayish brown.

Ash Gray
Hex #C1B5A9
RGB 193, 181, 169
CMYK 0, 6, 12, 24

Ash White
The last in the “ashen” family of colors, Ash White is closely related to Ash Brown and Ash Gray. Like Ash Gray, this color seems closer to fireplace soot, but the muted red undertones link it to the color of the trees as well as to the white seed pods that the tree often generates.

Ash White
Hex #E9E4D4
RGB 233, 228, 212
CMYK 0, 2, 9, 9

Baked Bread
If you’ve found yourself experimenting with baking recently, then you’re probably already pretty familiar with this particular shade. Baked Bread is a soft golden brown color with a slightly duller overtone. It’s meant to remind viewers of the warmth and comfort that goes hand in hand with pulling a fresh loaf of bread out of the oven.

Baked Bread
Hex #DACBA9
RGB 218, 203, 169
CMYK 0, 7, 22, 15

Baked Potato
Similar to Baked Bread, Baked Potato is another shade of brown that very clearly draws inspiration from a particular food item. Unlike Baked Bread, however, Baked Potato is a slightly darker shade with some earthy undertones. The end result is a color that evokes the crispy outer jacket of a freshly baked potato.

Baked Potato
Hex #B69E87
RGB 182, 158, 135
CMYK 0, 13, 26, 29

Bamboo
When they’re still attached to the root, bamboo stalks can be green, red, or even black in color. However, when most of us think of bamboo, we picture the distinctive pale tan color that bamboo takes on after it has been harvested and dried. It’s that same characteristic color that ultimately gives Bamboo brown its name.

Bamboo
Hex #E3DEC6
RGB 227, 222, 198
CMYK 0, 2, 13, 11

Bark
As we’ve already seen, the bark of a tree can come in a wide range of colors from pale ashen white to a brown so dark that it almost looks black. Bark brown takes the average of all those colors in order to produce a shade that wouldn’t look out of place on any first sketch of a tree.

Bark
Hex #996633
RGB 153, 102, 51
CMYK 0, 33, 67, 40

Beeswax
Often considered to be the first plastic, beeswax has been used by artists, craftsmen, and candle-makers since before written history. It’s technically edible, but it’s most often used in cosmetics or to make other declarative objects. Its pale yellow-brown hue is echoed in the appearance of the appropriately-named Beeswax brown.

Beeswax
Hex #E9D7AB
RGB 233, 215, 171
CMYK 0, 8, 27, 9

Beige Linen
Like beeswax, linen is one of the oldest materials used around the world, with linen cloth samples dating back nearly 30,000 years. While new linen has a crisp, white color, older linen fabric may take on a pale tan or beige color. Beige Linen brown is a reflection of that slightly faded quality.

Beige Linen
Hex #E2DAC6
RGB 226, 218, 198
CMYK 0, 4, 12, 11

Birdseed
If you’ve ever opened up a bag of birdseed in order to hang a feeder in your backyard, you already know that birdseed tends to be a mix of various seeds and nuts and therefore has no single color. However, Birdseed brown calls to mind the sunflower seeds and other light or golden brown seeds found within the mixture.

Birdseed
Hex #E2C28E
RGB 226, 194, 142
CMYK 0, 14, 37, 11

Bitter Chocolate
When we think of chocolate, we tend to think of either the warm brown of milk chocolate or the deep, rich color of dark chocolate. Bitter Chocolate brown straddles the line between the two shades, with all of the brightness of milk chocolate and a slightly cooler undertone to suggest the bitterness of dark chocolate.

Bitter Chocolate
Hex #9E5B40
RGB 158, 91, 64 
CMYK 0, 42, 59, 38

Brandy
Brandy may not be as popular today as it was before the rise of Transatlantic trade, but it still reserves a spot in history as a rich, highly concentrated spirit that’s best served warm on a cold night. Brandy brown is a little bit brighter than the dark hue of its liquid namesake, but it captures some of that same wintery warmth and cheer.

Brandy
Hex #DCB68A
RGB 220, 182, 138
CMYK 0, 17, 37, 14

Brown Bear
Found across Europe, Asia, and North America, the brown bear is the largest of any bear species and has long been revered as a powerful hunter and predator. Brown Bear brown captures all of the strength and energy of these animals without nearly as much danger, resulting in a bright red-brown shade.

Brown Bear
Hex #7F6244
RGB 127, 98, 68
CMYK 0, 23, 46, 50

Brown Beige
The word beige was originally derived from the French word for the natural color of a sheep’s wool. As a result, while there’s no one “true” beige, most shades of beige tend to have a yellow or ivory undertone. Brown Beige takes those yellow undertones and combines them with a traditional brown shade for a vibrant overall color.

Brown Beige
Hex #CC8833
RGB 204, 136, 51
CMYK 0, 33, 75, 20

Brown Coffee
If you’re the kind of person who takes their coffee “black”, then this shade is the perfect match for you. Brown Coffee is several shades darker than most “coffee brown” colors, and the end result is a shade of brown that’s a little bit deeper, richer, and more dramatic than its typical counterparts.

Brown Coffee
Hex #4A2C2A
RGB 74, 44, 42
CMYK 0, 41, 43, 71

Brown Gray
Not to be confused with Grayish Brown or even Gray Brown, Brown Gray is a blend of two closely related colors. The main difference between Brown Gray and the other two shades is that Brown Gray is brown first, with only a slightly muted cast as a result of its gray undertones.

Brown Gray
Hex #8D8468
RGB 141, 132, 104
CMYK 0, 6, 26, 45

Brown Metal
In theory, Brown Metal should be similar in color to Brown Rust, which shows up later on this list. In application, however, Brown Metal reflects the pale brown metallic sheen that matches its name a little bit more closely. Some varieties of stainless steel will often take on a gray-brown hue that very closely resembles this shade of brown.

Brown Metal
Hex #BBADA1
RGB 187, 173, 161
CMYK 0, 7, 14, 27

Brown Red
Brown Red manages to straddle the line between brown and red without going too far in either direction. While it certainly has a higher red value than some of the other entries on this list, the yellow and “key” or black values are pushed higher as well to balance out the otherwise aggressive color.

Brown Red
Hex #922B05
RGB 146, 43, 5
CMYK 0, 71, 97, 43

Brown Rust
When compared to Brown Metal, Brown Rust looks a lot more like Brown Red than any other color. Rust is the natural product of a reaction between iron, oxygen, and water, so it’s hardly a surprise that this bright color is one of the most common shades of reddish brown found in multiple places around the world.

Brown Rust
Hex #AF593E
RGB 175, 89, 62
CMYK 0, 49, 65, 31

Brown Stone
When you hear the words “brown stone”, you may picture the classical construction style found in buildings throughout the United States and Northern Europe. When it’s used to describe a color, however, Brown Stone actually refers to the deep, rich shade that can be found in a wide range of rocks and pebbles across the planet.

Brown Stone
Hex #593C39
RGB 89, 60, 57
CMYK 0, 33, 36, 65

Brown Sugar
The main difference between brown sugar and any other type of sugar is due to one main ingredient: molasses. While white or purified sugars are treated and refined until they’re practically colorless, brown sugar retains some of the richer, almost smokier flavor of molasses. This also provides the characteristic color that’s echoed here in Brown Sugar brown.

Brown Sugar
Hex #A17249
RGB 161, 114, 73
CMYK 0, 29, 55, 37

Brownie
Brownies have been around for more than a hundred years, even if there’s some debate over who the first brownie baker truly was. Today, they’re a popular offering at restaurants, cafes, and at-home parties alike. As a color, Brownie is a dark brown shade with brighter red notes that convey some of the warmth and sweetness of the baked treat.

Brownie
Hex #964B00
RGB 150, 75, 0
CMYK 0, 50, 100, 41

Brownish Gray
It may sound awfully similar to Brown Gray, but Brownish Gray veers more towards the gray side of the spectrum than the brown side. The end result is a calming, neutral shade of gray-brown that’s long been a popular choice for interior decorators and fashion designers alike.

Brownish Gray
Hex #86775F
RGB 134, 119, 95
CMYK 0, 11, 29, 47

Brownish Red
Much like Brownish Gray, Brownish Red is essentially a “pure” color that’s been tinted with some shade of brown to create a new color combination. In this case, a bright, vivid red is muted slightly by the brown undertones, which creates an overall color that looks a little bit earthier or more historic than plain red would have appeared on its own.

Brownish Red
Hex #9E3623
RGB 158, 54, 35
CMYK 0, 66, 78, 38

Burnt Almond
Depending on the time of year, you may have tried your hand at roasting almonds in your oven or even in a fireplace. Regardless of the weather, roasted almonds can be a hearty, healthy snack, and Burnt Almond reflects the color that the almonds will take on as they sizzle from the heat.

Burnt Almond
Hex #B0724A
RGB 176, 114, 74
CMYK 0, 35, 58, 31

Burnt Henna
Henna is one of the oldest dyes in the world. It has been used since antiquity throughout India, North Africa, the Middle East, and Central Africa to color clothing, dye hair, and create beautifully intricate designs on the skin. Burnt Henna captures the vibrant red-brown color of this ancient dye that’s still being used today.

Burnt Henna
Hex #7E392F
RGB 126, 57, 47
CMYK 0, 55, 63, 51

Butter Toast
Today, we mostly consider toast and butter to be an easy breakfast food, but that wasn’t always the case. During the 15th and 16th centuries, toast was used to flavor drinks and then discarded. It wasn’t until more recent times that buttered toast became a staple of breakfast cuisine, and the Butter Toast color pays homage to this relatively new tradition.

Butter Toast
Hex #D2AD84
RGB 210, 173, 132
CMYK 0, 18, 37, 18

Buttercream
As the name might suggest, the main ingredient in buttercream icing is just plain old butter. While buttercream icing can be dyed or tinted to take on just about any color imaginable, its purest form tends to be this pale yellowy brown color as a result of the butter and sugar mixture.

Buttercream
Hex #EFE0CD
RGB 239, 224, 205
CMYK 0, 6, 14, 6

Buttery Brown
Related to the previous entry, it’s no secret that butter tends to have a pale yellow color in its simplest form. Buttery Brown is definitely more brown than yellow, but it carries a hint of that bright, sunshiny color to liven up what would otherwise be nothing more than a pale, muted brown.

Buttery Brown
Hex #F1EBDA
RGB 241, 235, 218
CMYK 0, 2, 10, 5

Camel
The earliest use of the word “camel” to refer to a specific color appears in 1916. Since then, camel-colored coats, shirts, dresses, and bags have gone in and out of high fashion over the years. Regardless of what you think is “in” at the moment, Camel brown remains a warm shade of brown with a distinctly vintage feel to it.

Camel
Hex #C69F59
RGB 198, 159, 89
CMYK 0, 20, 55, 22

Canadian Maple
We’ll look at Maple Sugar and Maple Syrup brown later on, but for now, Canadian Maple pays homage to the brilliant brown-gold color that lights up some parts of the Canadian countryside during the fall. In fact, the maple leaf is so much a part of Canadian culture that it’s earned a spot on the Canadian national flag.

Canadian Maple
Hex #CAB266
RGB 202, 178, 102
CMYK 0, 12, 50, 21

Canvas Brown
Historically, canvas was made of a durable hemp weave that would be able to stand up to the perils of sea travel or long overland voyages. Today, while canvas sails and luggage bags aren’t nearly as common, cotton canvas weaves are a popular choice for clothing as well as for the basis of many great works of art. Canvas Brown mimics the pale brown shade that’s been so enduring for centuries.

Canvas Brown
Hex #BB8855
RGB 187, 136, 85
CMYK 0, 27, 55, 27

Caramel
Regular caramel is basically just sugar that’s been heated and pulled into a confection, and it’s been a staple of worldwide desserts for centuries. Caramel brown captures some of the warmth, sweetness, and richness of the confection that’s here to stay for at least a few centuries more.

Caramel
Hex #AF6F09
RGB 175, 111, 9
CMYK 0, 37, 95, 31

Caramel Apple
Caramel apples were first invented by a Mrs. Edna Kastrup, who went on to found The Taffy Apple Company with the rest of her family in 1948. Since then, they’ve become far more widespread, but Caramel Apple brown combines the rich color of caramel with the subtle red undertones of the apple.

Caramel Apple
Hex #B87A59
RGB 184, 122, 89
CMYK 0, 34, 52, 28

Carnal Brown
Carnal Brown is another relatively muted shade that still has some warm red and yellow undertones. It’s often used for cosmetics, especially lipsticks, which may be why it’s earned its “carnal” title as a reflection of its use in lots of different bodily decorations.

Carnal Brown
Hex #BB8866
RGB 187, 136, 102
CMYK 0, 27, 45, 27

Cashmere
Cashmere is a type of wool made specifically from the hair of certain breeds of goat, instead of sheep. It’s long been treasured for its soft, almost silk-like qualities, as well as for its lightweight insulating properties. While cashmere can be dyed into many colors, its “default” color is a light creamy brown, as seen in Cashmere brown’s overall tone.

Cashmere
Hex #D1B399
RGB 209, 179, 153
CMYK 0, 14, 27, 18

Chai
Technically speaking, chai is just the Hindi word for tea. However, a lot of countries around the world use the word chai to refer to masala chai, a blend of tea and spices with a sharp, warming flavor that’s often sweetened and mixed with milk. The end result is a drink that looks an awful lot like Chai brown.

Chai
Hex #B1832F
RGB 177, 131, 47
CMYK 0, 26, 73, 31

Chamomile
Chamomile is actually the name given to several different flowers in the daisy family that grow throughout Europe. For most of us, however, when we hear “chamomile”, we think of tea. Chamomile tea has a soft, golden-brown color that is perfectly reflected in the yellow-red undertones of Chamomile brown.

Chamomile
Hex #DAC395
RGB 218, 195, 149
CMYK 0, 11, 32, 15

Chicory
Continuing the plant or beverage trend, chicory is another member of the daisy family. While chicory flowers are white, the roots are often baked, roasted, and ground up for use as a coffee substitute. As a result, it’s hardly surprising that the final product bears a dark brown color that almost perfectly matches the shade of Chicory brown.

Chicory
Hex #A78658
RGB 167, 134, 88
CMYK 0, 20, 47, 35

Chocolate
Who doesn’t love chocolate? While any chocolate aficionado will tell you that chocolate comes in a range of shapes, sizes, and colors, this deep, rich shade is probably pretty close to what most of us picture when we think of that sweet treat.

Chocolate
Hex #7B3F00
RGB 123, 63, 0
CMYK 0, 49, 100, 52

Cinnamon Toast
We’ve already looked at buttered toast, so now it’s time to consider cinnamon toast. Cinnamon toast can refer to either toasted bread with cinnamon and other spices baked in or to toast that’s been “dressed up” with cinnamon sugar and butter. Either way, the red-brown shade of the cinnamon blends with the muted brown of the toast to give us what we call Cinnamon Toast brown.

Cinnamon Toast
Hex #8D7D77
RGB 141, 125, 119
CMYK 0, 11, 16, 45

Citrus Brown
Citrus Brown may seem like a confusing moniker at first, since most citrus fruits tend to be famously yellow or orange. Citrus Brown combines all the warmth and energy of those shades with the more subdued neutrality of a classic brown. The end result is a brown-gold hue that provides the best of both worlds.

Citrus Brown
Hex #D7C275
RGB 215, 194, 117
CMYK 0, 10, 46, 16

Cotton
Cotton fibers have been used to make a soft, woolly cloth for literally thousands of years, with the earliest cloth samples dating back to nearly five thousand years before the Common Era. While the plant and its produce have a long and often gruesome history, the cloth itself has long been valued for its soft and crisp white color. Cotton brown captures the soft brown glow of that same worn and well-used fabric.

Cotton
Hex #FAF4D4
RGB 250, 244, 212
CMYK 0, 2, 15, 2

Croissant
No matter how you pronounce it, there’s no denying that the humble croissant has long held its spot as one of the most popular pastries around the world. Originally developed in Austria, croissants are known for their flaky layers and buttery texture, and while Croissant brown can’t quite capture that same feeling, it can at least convey some of the golden brown color.

Croissant
Hex #C4AB86
RGB 196, 171, 134
CMYK 0, 13, 32, 23

Dark Beige
Plain or “true” beige is infamously difficult to print due to the extremely pale saturation values that make it hard to reproduce on a digital scale. Dark Beige, on the other hand, keeps the same color ratios but dials up the intensity to create a color that’s far more manageable in the digital realm.

Dark Beige
Hex #AC9362
RGB 172, 147, 98
CMYK 0, 15, 43, 33

Dark Chestnut
Chestnuts have been a staple in many culinary cultures around the world, treasured for their sweet, hearty taste and relatively large size as compared to most other tree nuts. Their distinctive red-brown color makes them a popular treat around the holidays, and Dark Chestnut brown reflects some of that cold weather cheer and hope for warmer days.

Dark Chestnut
Hex #986960
RGB 152, 105, 96
CMYK 0, 31, 37, 40

Dark Khaki
Beloved by military personnel and white collar workers around the world, khaki typically refers to a pale brown shade of cloth with a subtle yellow undertone. Dark Khaki dials up the yellow undertone until it produces what almost passes for a green tint, and the end result is a significantly darker shade of brown.

Dark Khaki
Hex #9B8F55
RGB 155, 143, 85
CMYK 0, 8, 45, 39

Dark Sand
Like many of the other examples on this list, “sand” can be used to sum up a wide range of colors, which makes it a perfect fit for an equally wide range of brown shades or tints. Dark Sand, however, is roughly the color of the sand on the beach after the waves have receded, leaving the beach behind darkened by the water.

Dark Sand
Hex #9F7D4F
RGB 159, 125, 79
CMYK 0, 21, 50, 38

Dark Wood
Dark Wood is actually very similar in appearance to Dark Sand, but the difference between the two lies in the concentration of its red, green, and blue values. Dark Sand has a higher level of red, green, and blue in order to reflect its rocky nature, while Dark Wood has a more muted, subdued appearance.

Dark Wood
Hex #855E42
RGB 133, 94, 66
CMYK 0, 29, 50, 48

Deep Brown
Deep Brown is one of the darkest shades of brown on this list, which means that it also has some of the lowest red, green, and blue values. As a result, the lack of light or color saturation means that the resulting color is almost dark enough to pass for true black.

Deep Brown
Hex #410200
RGB 65, 2, 0
CMYK 0, 97, 100, 75

Deep Taupe
Taupe takes its name from the French word for mole, as it was believed that the gray-brown color was similar in shade to the coat of the little digging animal. However, Deep Taupe comes far closer to the mole’s fur than “true” taupe, as most moles tend to look either dark brown or black.

Deep Taupe
Hex #7B6660
RGB 123, 102, 96
CMYK 0, 17, 22, 52

Desert Gray
Despite not having the word “brown” anywhere in its name, Desert Gray is very visibly closer to brown than it is to a true gray color. Either way, the muted brown has a distinctly cooler undertone to it, and the overall color suggests the coolness of the desert before the sun begins to rise.

Desert Gray
Hex #B8A487
RGB 184, 164, 135
CMYK 0, 11, 27, 28

Dried Moss
Found growing in damp or humid climates around the world, moss is usually known for its deep green color. Once it’s been cut away from its clump and dried, however, it takes on a pale yellow-brown color and can be used as a fire starter or a quick and easy source of fuel. Dried Moss captures the color of moss once it’s fully processed and full of potential.

Dried Moss
Hex #CCB97E
RGB 204, 185, 126
CMYK 0, 9, 38, 20

Dull Brown
Despite the grim name, Dull Brown is actually a pretty lively shade. It carries distinct red undertones that keep it from fading all the way into a truly dull appearance, and the subtle yellow notes running throughout lend it a sense of brightness and light.

Dull Brown
Hex #876E4B
RGB 135, 110, 75
CMYK 0, 19, 44, 47

Fall Harvest
With a name like Fall Harvest, it’s hardly a surprise that this shade of brown skews more towards the yellow or orange side of the family than many other shades we’ve seen so far. Nevertheless, it’s laced with enough blue and green undertones to keep it from tipping all the way over into orange, which keeps it firmly in its place on this list.

Fall Harvest
Hex #A78A59
RGB 167, 138, 89
CMYK 0, 17, 47, 35

Feather Brown
Once again, it’s not exactly news that a bird’s feathers can be found in just about every color imaginable. Feather Brown, however, is the faded brown shade of the swan or goose feather quills that were used as writing implements prior to the invention and immediate popularity of the pen.

Feather Brown
Hex #B8AD9E
RGB 184, 173, 158
CMYK 0, 6, 14, 28

Firewood
While we’ve seen several variations on “wood” so far in this list, Firewood brown is unique in that it specifically refers to dried wood. As a result, the overall color of Firewood brown is noticeably paler and lighter than a truly “wooden” shade might be expected to be.

Firewood
Hex #CEBAA8
RGB 206, 186, 168
CMYK 0, 10, 18, 19

Fortune Cookie
Despite being associated with Chinese food today, fortune cookies are actually a Japanese invention, dating back to the 1800s. Regardless of their origin, these crispy little cookies are beloved around the world today for their light, sweet flavor and the golden brown color that Fortune Cookie brown emulates.

Fortune Cookie
Hex #E0C5A1
RGB 224, 197, 161
CMYK 0, 12, 28, 12

French Beige
We’ve already seen a couple variations on the beige color family, but French Beige is named for its relative popularity in France. The first reference to “French Beige” as a color name appears in the late 1920s, when French fashion and culture were beginning to dominate the world conversation.

French Beige
Hex #A67B50
RGB 166, 123, 80
CMYK 0, 26, 52, 35

Ginger Ale
Ginger ale is a bright, bubbly drink that is usually enjoyed on its own or mixed with various spirits to make a cocktail. Regardless of how you choose to drink it, the soda’s distinctive yellow-brown coloring is represented in the Ginger Ale brown shade.

Ginger Ale
Hex #C9A86A
RGB 201, 168, 106
CMYK 0, 16, 47, 21

Golden Fog
Obviously, fog on its own is usually a misty gray or white color. However, if you’ve ever been out in the fog when the sun rises or sets, you’ve probably seen the color represented here as Golden Fog. This shade takes its name from the moment when the sun’s rays turn a fog bank from a dismal gray to a brilliant shade of gold.

Golden Fog
Hex #F0EAD2
RGB 240, 234, 210
CMYK 0, 3, 13, 6

Gray Brown
Gray Brown is a deep shade of brown that looks pretty much exactly the way that you would expect it to look. Unlike some of the other gray-brown blends that we’ve seen on this list, however, Gray Brown is primarily brown with a gray undertone. Many of the other entries have been primarily gray with a subtle brown undercurrent, and it’s this inversion that makes Gray Brown unique.

Gray Brown
Hex #7F7053
RGB 127, 112, 83
CMYK 0, 12, 35, 50

Grayish Brown
The last entry in our family of similarly-named shades of brown, Grayish Brown is very similar in color to Gray Brown. The only real difference between the two of them is that Grayish Brown is slightly darker. This difference in saturation is the result of a slightly lower red, green, and blue value that pushes the shade away from the lighter or brighter side of the color spectrum.

Grayish Brown
Hex #7A6A4F
RGB 122, 106, 79
CMYK 0, 13, 35, 52

Hardwood
In construction or interior design terms, “hardwood” actually refers to any one of several hard woods, which means that the wood colors grouped together under that term can vary pretty widely. In the context of this color, however, Hardwood is a rich, gray-brown shade with some subtle red undertones.

Hardwood
Hex #937A62
RGB 147, 122, 98
CMYK 0, 17, 33, 42

Hawaiian Brown
The word for brown in Hawaiian is mākuʻe, pronounced by drawing out the “ah” sound of the a and cutting off sharply before the “ay” sound of the e. Regardless of what you call it, this shade of brown is a bright, warm color that captures some of those tropical vibes.

Hawaiian Brown
Hex #99522C
RGB 153, 82, 44
CMYK 0, 46, 71, 40

Heavy Brown
Heavy Brown is named for its overall appearance, which combines green, red, and brown undertones to create a muted shade of brown that’s dark and deep without appearing too dull. The end result is a solid, weighted color that gives the impression of heaviness while still working as a neutral, underplayed shade of what could have been a very garish color.

Heavy Brown
Hex #73624A
RGB 115, 98, 74
CMYK 0, 15, 36, 55

Honey Brown
Bees that feed solely on the nectar of poisonous flowers like monkshood, azaleas, or rhododendrons can produce what’s sometimes known as “mad honey” – honey with intoxicating or just plain toxic properties. Regardless of the type, all honey can be instantly recognized thanks to the same warm, gold-brown color that gives Honey Brown its name.

Honey Brown
Hex #BA9238
RGB 186, 146, 56
CMYK 0, 22, 70, 27

Iced Coffee
The first real iced coffee was probably created in Algeria in the mid 1840s before migrating to Italy and the rest of Europe during the late 1800s. Since then, it’s remained a popular fixture of coffee house menus and drive-through doughnut shops alike, and the pale brown color of Iced Coffee brown pays homage to that history.

Iced Coffee
Hex #B18F6A
RGB 177, 143, 106
CMYK 0, 19, 40, 31

Kobicha
Kobicha dye has been used to make kimonos for centuries, and the dark reddish brown shade remains a popular clothing color to this day. While its name originally derives from the sea kelp with which it shares its color, it can also be used to mean “flattery”.

Kobicha
Hex #6B4423
RGB 107, 68, 35
CMYK 0, 36, 67, 58

Lace
In its earliest forms, lace was made of linen, silk, silver, or gold, which made it completely inaccessible to all but the wealthiest of patrons. Today, it’s a lot easier to find lace in a wide range of colors and materials, but the iconic white-brown shade of early lace has still lingered in the public mind, giving rise to the name of this pale brown hue.

Lace
Hex #EAE3D2
RGB 234, 227, 210
CMYK 0, 3, 10, 8

Latte
Whether you love them or hate them, there’s no denying that lattes are some of the most popular coffee beverages in the world. The full official name is caffè e latte, but most of us just call the drink by its shortened name. No matter what you call it, Latte brown clearly derives its name from the iconic color of that drink.

Latte
Hex #C5A582
RGB 197, 165, 130
CMYK 0, 16, 34, 23

Light Taupe
We’ve already looked at Deep Taupe, but Light Taupe veers in the opposite direction. While “true taupe” is often difficult to categorize as either brown or gray, Light Taupe definitely falls into the “brown” category, thanks to a significantly higher level of red, magenta, or yellow pigment.

Light Taupe
Hex #B38B6D
RGB 179, 139, 109
CMYK 0, 22, 39, 30

Maple Sugar
Maple sugar is made by boiling the sap of the maple tree until all of the water has evaporated, leaving behind a coarse sugar that is then processed and treated and used as a sweetener. Maple Sugar brown is a soft shade of brown with some subtle red undertones to remind the viewer of cold autumn days.

Maple Sugar
Hex #C9A38D
RGB 201, 163, 141
CMYK 0, 19, 30, 21

Maple Syrup
A little bit stronger than Maple Sugar, Maple Syrup takes on a more noticeably yellow tint to reflect the caramelized nature of maple syrup. Maple syrup is actually one of the oldest products in North America, with evidence suggesting that it was being distilled and produced by Native American tribes like the Algonquians for literally hundreds of years before European colonizers arrived.

Maple Syrup
Hex #BB9351
RGB 187, 147, 81
CMYK 0, 21, 57, 27

Mars Brown
Mars may be known as the “Red Planet”, but images from its surface reveal that most of the landscape is more accurately labeled as brown. Mars Brown captures some of the harsh, windswept appeal of the landscape while still retaining a definite red undertone in order to call back to our earliest imaginings of our planet’s next-door neighbor.

Mars Brown
Hex #AD6242
RGB 173, 98, 66
CMYK 0, 43, 62, 32

Medium Brown
Medium Brown is yet another entry on this list that looks exactly the way you’d expect it to. The red or magenta values are slightly higher in this shade than they would be in “regular” brown, but the overall impression is a warm, earthy color that still manages to immediately establish itself as undeniably brown.

Medium Brown
Hex #7F5112
RGB 127, 81, 18
CMYK 0, 36, 86, 50

Mojave Desert
It may be the driest desert in North America, but the Mojave Desert is actually the smallest desert in North America at less than 50,000 square miles. Regardless of the Mojave Desert’s size, the arid landscape and weathered sands are perfectly represented in the gentle gray-brown shades of the color that bears the same name.


Mojave Desert
Hex #C7B595
RGB 199, 181, 149
CMYK 0, 9, 25, 22
////////////////////// End of brown

/////////////////////////// Black
Abbey
Abbey refers to a color that is warm gray with brownish tints as it is a mixture of both half gray and half brown.


Abbey
Hex #494F55
RGB 73, 79, 85
CMYK 14, 7, 0, 67

Ash Gray
Ash gray is a shade on the lighter spectrum of black that is said to resemble that of ashes, although it may sometimes contain darker black or brown tones.

Ash gray
Hex #666362
RGB 102, 99, 98
CMYK 0, 3, 4, 60

Asphalt
Asphalt refers to a color that is a blend of darker gray and black, and this name comes from asphalt, the black sticky liquid used in roads and walkways.

Asphalt
Hex #0C0404
RGB 12, 4, 4
CMYK 0, 67, 67, 95

Black
Black is a color with the perception that is the absence of the light that stimulates the three color-sensitive cone cells in our eyes, and it is the darkest color you can have.

Black
Hex #000000
RGB 0, 0, 0
CMYK 0, 0, 0, 100


Black Bean
Black bean is a color that is a mixture of dark brown and black, and it gets its name from black beans, also known as black turtle beans.

Black bean
Hex #3D0C02
RGB 61, 12, 2
CMYK 0, 80, 97, 76

Black Cat
Black cat color derives its name from the feline pet and also its similar color tone of medium black hue with brown tones.

Black cat
Hex #413839
RGB 65, 56, 57
CMYK 0, 14, 12, 75

Black Cow
Black cow receives its name from black colored cattle, and the dark tone of the color features some brownish tints.

Black cow
Hex #4C4646
RGB 76, 70, 70
CMYK 0, 8, 8, 70

Black Eel
Black eel color resembles the body of the American eel, and it is more dark gray in tone.

Black eel
Hex #463E3F
RGB 70, 62, 63
CMYK 0, 11, 10, 73


Black Olive
Black olive is a color that stands for the color of black olives, and in the RAL color matching system, it’s simply referred to as “olive”.

Black olive
Hex #3B3C36
RGB 59, 60, 54
CMYK 2, 0, 10, 76

Charcoal
Charcoal color represents that of the dark gray color that comes from burnt wood, otherwise known as common charcoal used for starting fires for warmth, cooking, etc.

Charcoal
Hex #36454F
RGB 54, 69, 79
CMYK 32, 13, 0, 69

Charleston Green
Charleston green color refers to a black color mixed with blue and yellow that originated back during the American Civil War times with its name-sake deriving from Charleston, South Carolina.

Charleston green
Hex #232B2B
RGB 35, 43, 43
CMYK 19, 0, 0, 83

Dark Jungle Green
Dark jungle green is much like a darker version of the jungle green tone that resembles a lush forest setting, yet the color contains far more traces of black than anything else.


Dark jungle green
Hex #1A2421
RGB 26, 36, 33
CMYK 28, 0, 8, 86

Davy’s Gray
Davy’s gray is a color named after the English landscape painter Henry Davy, and it came to be through the combination of carbon black, slate, and iron oxide.

Davy’s gray
Hex #555555
RGB 85, 85, 85
CMYK 0, 0, 0, 67

Dim Gray
Dim gray color is simply known as a darker version of gray.

Dim gray
Hex #696969
RGB 105, 105, 105
CMYK 0, 0, 0, 59

Ebony
Ebony color gets its name from the ebony tree, which is a black/brown hardwood.

Ebony
Hex #555D50
RGB 85, 93, 80
CMYK 9, 0, 14, 64


Eerie Black
Eerie black color comes from a specialty box of Crayola crayons with its influence coming from a spooky, Halloween setting.

Eerie black
Hex #1B1B1B
RGB 27, 27, 27
CMYK 0, 0, 0, 89

Granite
Granite color gets its name from a common type of rock, the gray version, used in home décor for countertops.

Granite
Hex #676767
RGB 103, 103, 103
CMYK 0, 0, 0, 60

Gray
Gray color sits comfortably between both black and white, and because of this, it is known as a more neutral color.

Gray
Hex #808080
RGB 128, 128, 128
CMYK 0, 0, 0, 50

Gray Cloud
Gray cloud is a color that’s a touch lighter than gray, and it largely symbolizes darker, storm-like clouds in the sky.


Gray cloud
Hex #B6B6B4
RGB 182, 182, 180
CMYK 0, 0, 1, 29

Gray Wolf
Gray wolf color refers to one of the many color tones of the fur of gray wolves, and this color tends to consist of some brownish and gray hues.

Gray wolf
Hex #504A4B
RGB 80, 74, 75
CMYK 0, 7, 6, 69

Gunmetal
Gunmetal is a dark gray color that has tints of purples or blues, and it gets its name from gunmetal, a type of bronze alloy material.

Gunmetal
Hex #2C3539
RGB 44, 53, 57
CMYK 23, 7, 0, 78

Iridium
Iridium is a color that’s named from the metallic element iridium, and it is typically a very dark gray tone.

Iridium
Hex #3D3C3A
RGB 61, 60, 58
CMYK 0, 2, 5, 76


Jet
Jet is a color that gets its name from the mineraloid gemstone known as jet, and it’s typically a dark black shade that has undertones of blue, purple, or a combination of the two.

Jet
Hex #343434
RGB 52, 52, 52
CMYK 0, 0, 0, 80

Licorice
Licorice is a color that’s slightly light black in hue, and it receives its name and color tone from licorice candy.

Licorice
Hex #1A1110
RGB 26, 17, 16
CMYK 0, 35, 38, 90

Midnight
Midnight is one of many types of colors bearing the name, but in this case, it can resemble that of a dark midnight sky with undertones of brown.

Midnight
Hex #2B1B17
RGB 43, 27, 23
CMYK 0, 37, 47, 83

Night
Night is a color that takes its name from the darkness of night, and it’s almost as dark as black itself.

Night
Hex #0C090A
RGB 12, 9, 10
CMYK 0, 25, 17, 95

Oil
Oil is a color tone that closely resembles the dark brown/black tone of oil itself.

Oil
Hex #3B3131
RGB 59, 49, 49
CMYK 0, 17, 17, 77

Old Burgundy
Old burgundy is a darker color of burgundy, so it contains some red undertones with predominately black overlays.

Old burgundy
Hex #43302E
RGB 67, 48, 46
CMYK 0, 28, 31, 74

Onyx
Onyx is a color that derives its name from the mineral onyx, and the shade of it is slightly dark black.

Onyx
Hex #353839
RGB 53, 56, 57
CMYK 7, 2, 0, 78

Outer Space
Outer space is a shade that can act as a metaphor to the vast darkness of space.

Outer space
Hex #414A4C
RGB 65, 74, 76
CMYK 14, 3, 0, 70

Raisin Black
Raisin black is a color that receives its name from black raisins thanks to their darker color tone.

Raisin black
Hex #242124
RGB 36, 33, 36
CMYK 0, 8, 0, 86

Smoky Black
Smoky black is a color that takes its name from the color of black smoke, yet it looks only a couple shades lighter than true black.

Smoky black
Hex #100C08
RGB 16, 12, 8
CMYK 0, 25, 50, 94

Taupe
Taupe is a color that stems from dark gray-brown, and this is oftentimes referred to as a “dark taupe” as well.

Taupe
Hex #483C32
RGB 72, 60, 50
CMYK 0, 17, 31, 72

Vampire Gray
Vampire gray is a color between gray and black. It tends to be used in Halloween themed works of art because of its name.

Vampire gray
Hex #565051
RGB 86, 80, 81
CMYK 0, 7, 6, 66

Black Leather Jacket
True to its name, this color does have the soft black look of a matte leather jacket. As indicated in its RGB values, it has proportionally more green than many other black shades. That gives it a somewhat soft look that goes especially well with jewel tones.

Black Leather Jacket
Hex #253529
RGB 37, 53, 41
CMYK 30, 0, 23, 79

Cafe Americano
Just like black coffee, Cafe Americano is a shade of black with just a small hint of warmth. That warmth comes mostly from its sizable amount of yellow. It also has a burst of magenta that lends it a pleasant energy.

Cafe Americano
Hex #362819
RGB 54, 40, 25
CMYK 0, 26, 54, 79

Blackberry
Blackberry is a lovely shade of black that’s ideal if you don’t want an overly deep, dark black. It has just a hint of yellow, and its balanced amounts of blue, red, and green gives it a pleasingly versatile quality that’s great for a variety of applications.

Blackberry
Hex #3A3A38
RGB 58, 58, 56
CMYK 0, 0, 3, 77

Lamp Black
It might seem odd to describe a black shade as “lamp” – after all, lamps are more commonly associated with glowy yellows. Regardless, this cool-leaning shade of black is ideal when you need to use black but want to avoid a color that’s overly dark or deep.

Lamp Black
Hex #2E473B
RGB 46, 71, 59
CMYK 35, 0, 17, 72

Army Uniform
As illustrated in its RGB values, Army Uniform is a cool green-blue black. It has a sizable amount of cyan and just the slightest hint of yellow. It’s ideal if you need a muted, businesslike black that isn’t quite as intense as Onyx and similar shades.

Army Uniform
Hex #353F3E
RGB 53, 63, 62
CMYK 16, 0, 2, 75

Slate
Most of us probably picture slate as being a deep gray, but this particular shade is a little darker. As you might expect, Slate is made up of more blue compared to red or green. Its cyan content is double that of magenta. It’s a lovely cool shade if you need something that’s between gray and black.

Slate
Hex #26282A
RGB 38, 40, 42
CMYK 10, 5, 0, 84

Pitch Black
In the world of Pantone, Pitch Black is known as Process Black C. Process Black is typically the color used in some types of printing ink. As you have likely noticed, Pitch Black has far more black than magenta or yellow, but its decent amount of yellow balances it out by adding a hint of warmth.

Pitch Black
Hex #27251F
RGB 39, 37, 31
CMYK 0, 5, 21, 85

Spider
Spider is one of the more unusual blacks on our list. It has far lower RGB values than most black, and it also has a yellow value of 100. It’s a fairly deep shade, and true to its name, it’s almost the color of a black widow spider.

Spider
Hex #040200
RGB 4, 2, 0
CMYK 0, 50, 100, 98

Metal
A different color than Gunmetal, Metal is a deep black with very low RGB values. While not the absolute blackest black out there, its 95 K value makes it somewhat close. It’s a good selection if you want something close to Spider black with less yellow content.

Metal
Hex #0E0C0A
RGB 14, 12, 10
CMYK 0, 14, 29, 95

Grease
This aptly-named color is another very dark black with a near-100 K value. And since it has very little influence from red, blue, or green, it’s one of the closest colors to a true black on our list of shades.

Grease
Hex #080806
RGB 8, 8, 6
CMYK 0, 0, 25, 97

Crow
“Crow” is a great name for a type of black, and this is a particularly nice shade as well. Just like the feathers of its namesake, Crow is a dark black with very little influence from other colors.

Crow
Hex #0D0907
RGB 13, 9, 7
CMYK 0, 31, 46, 95

Black Rock
Contrary to its name, Black Rock is really more of a mix of black and very deep blue. That fact is reflected in the CMYK values – it actually has more cyan than black. It also has virtually no red or green compared to blue. Black Rock is ideal if you want something close to navy blue but much darker.


Black Rock
Hex #010127
RGB 1, 1, 39
CMYK 97, 97, 0, 85

Basalt Black
Basalt Black is named after an igneous rock. And as you might expect, it’s more of a deep brownish-black. Its CMYK values show that it has less black than some of the deeper blacks on our list.

Basalt Black
Hex #4D423E
RGB 77, 66, 62
CMYK 0, 14, 19, 70

Neutral Black
You probably already know that black is a neutral color, but Neutral Black is a bit more neutral than the rest. As you may have already seen, it has a lot of black and no cyan, magenta, or yellow. It also has red, green, and blue in equal proportions, making it an exceptionally balanced shade.

Neutral Black
Hex #0B0B0B
RGB 11, 11, 11
CMYK 0, 0, 0, 96

Black Denim
You’ve probably noticed that black denim jeans tend to be a little different than true black. Most shades tend to have a bit of a bluish tint. Black Denim is no exception, as you may notice from its somewhat high cyan value and high relative proportion of blue compared to red and green. It’s ideal if you need a cool-leaning shade of black.

Black Denim
Hex #191C27
RGB 25, 28, 39
CMYK 36, 28, 0, 85

Vampire Black
Vampires are often associated with black. And fittingly, Vampire Black has a decidedly red undertone to it. It has a much higher value for red than for green or blue, and it also has a relatively high proportion of magenta. This one is a smart choice if you could use a burgundy-leaning black for your project.

Vampire Black
Hex #0F0404
RGB 15, 4, 4
CMYK 0, 73, 73, 94

Cool Black
Cool Black is a calming shade of black with a definite deep blue undertone. As indicated by its CMYK values, this shade has a good bit of cyan compared to magenta. It also has significantly more blue than red and green.

Cool Black
Hex #151922
RGB 21, 25, 34
CMYK 38, 26, 0, 87

Panda Black
This shade of black looks closer to slate than it does to black. But still, it’s an especially lovely shade that’s ideal if you’d prefer a cool black. This one looks especially nice alongside pale blues and grays.

Panda Black
Hex #3C4748
RGB 60, 71, 72
CMYK 17, 1, 0, 72

Frost Black
While Frost Black does have some bluish undertones, it’s closer to true black than many of the blue-black shades we’ve seen so far. It has high amounts of both blue and cyan, but a bit of red and magenta help it avoid being too cool.

Frost Black
Hex #191C20
RGB 25, 28, 32
CMYK 22, 12, 0, 87

Ink Black (RAL)
Ink Black is part of Europe’s RAL color matching system (RAL is similar to Pantone). Its name is fitting as it is made up of far more black than cyan, magenta, and yellow. It’s a great option if you want a deep black that isn’t quite the darkest on the spectrum.

Ink Black (RAL)
Hex #212122
RGB 33, 33, 34
CMYK 3, 3, 0, 87

Raven
The raven is one of the more recognizable black animals in the world, and this color captures its essence well. It’s a warmer shade compared to some other blacks, as it contains very little blue. Its high proportion of yellow gives it a hint of warmth.

Raven
Hex #050301
RGB 5, 3, 1
CMYK 0, 40, 80, 98

Leather
This is a distinct color from Leather Jacket, but it is a bit similar. Leather has much more red than many black shades, and it also has a fairly large amount of yellow. Leather is a pleasant, reasonably dark black that would work well in a variety of projects.

Leather
Hex #0B0705
RGB 11, 7, 5
CMYK 0, 36, 55, 96

Sable
“Sable” usually denotes a shade of brown, but this shade is actually one of the blacker blacks out there. It has no cyan, magenta, or yellow, and its K value is close to 100. It’s great if you need a black that is essentially true black with almost no color undertones.

Sable
Hex #060606
RGB 6, 6, 6
CMYK 0, 0, 0, 98

Power Black
This black is true to its name in the sense that it makes a strong impression. It might come as a surprise that Power Black actually has a significantly large amount of yellow. It also has more red than green and blue. It looks especially nice when you need a stark contrast like black on white or black on yellow.

Power Black
Hex #0E0C01
RGB 14, 12, 1
CMYK 0, 14, 93, 95

Soot
“Soot” is an obvious name choice for a black color, and this one is dark with a hint of a deep brown undertone. Since it looks a bit like a mix of black and sepia, it’s a worthy selection if you need text for a vintage-inspired project.

Soot
Hex #160D08
RGB 22, 13, 8
CMYK 0, 41, 64, 91

Jade
Most of us associate jade with green, as the best-known jade stones are green. However, there is a form of black jade. You can only find it in a few spots in the U.S. Jade has a 100 value for cyan, giving it calming blue undertones.

Jade
Hex #000302
RGB 0, 3, 2
CMYK 100, 0, 33, 99

True Black
Which hex value makes true black might sometimes come down to a matter of taste. But this shade of True Black does have a depth to it, and that depth makes it a prime candidate for many different applications. It has approximately equal amounts of green, red, and blue, and it has no magenta or yellow.

True Black
Hex #0A0B0B
RGB 10, 11, 11
CMYK 9, 0, 0, 96

Premium Black
If you prefer a black shade with a high-end touch, Premium Black is an excellent choice. It has a larger amount of yellow than cyan or magenta, and it also has slightly more red than blue or green.

Premium Black
Hex #100E09
RGB 16, 14, 9
CMYK 0, 12, 44, 94

Obsidian
Obsidian is among the darkest black stones in the world, and this lovely deep black captures its essence beautifully. As you might expect, its K value is close to 100. Its somewhat high cyan value also gives it some interesting depth.

Obsidian
Hex #020403
RGB 2, 4, 3
CMYK 50, 0, 25, 98

Black Grain
Some black shades are closer to a mix of black and gray, and Black Grain is a great example. This unique shade has a lower K value than many black shades, but it also has very little yellow and no cyan or magenta.

Black Grain
Hex #2C2C2A
RGB 44, 44, 42
CMYK 0, 0, 5, 83

Black Magic
This creatively-named black shade is slightly less dark than the blackest black on the color spectrum. It also has faintly blue undertones despite the fact that it has proportionally more magenta than cyan. It’s a wise selection if you want a calming shade of black that isn’t quite as dark as some of the darker shades.

Black Magic
Hex #0B0510
RGB 11, 5, 16
CMYK 31, 69, 0, 94

Iron Black
As you can probably already tell from its K value of 80, Iron Black is closer to a deep gray than it is to a deep black. It’s an excellent balanced color that would look nice alongside navy and other shades of deep blue. It also pairs nicely with hunter green, forest green, and other similar deep greens.

Iron Black
Hex #343432
RGB 52, 52, 50
CMYK 0, 0, 4, 80

Rich Black (FOGRA29)
This off-black is one of the deep blue-blacks on our list, and it’s one of the best ones. Rich Black is somewhat unique in that it actually contains more cyan than black. It’s a great option if you want a color that sits somewhere between pure black and deep navy.

Rich Black (FOGRA29)
Hex #010B13
RGB 1, 11, 19
CMYK 95, 42, 0, 93

Warm Black
Warm Black is another of the blacks that might also be accurately described as a deep blue. Interestingly enough, it has a cyan value of 100 and a K value of just 74. If you need a black-adjacent color or a very dark shade of cyan, this is a great color to pick.

Warm Black
Hex #004242
RGB 0, 66, 66
CMYK 100, 0, 0, 74

Black Coral
It might seem odd to describe coral as being black. But Black Coral is another of the deep blue-blacks that sits in between true black and navy. It has one of the highest blue values of any black shade on our list. It also has a fairly high proportion of green, making it a pleasantly cool shade of black.

Black Coral
Hex #54626F
RGB 84, 98, 111
CMYK 24, 12, 0, 56

Black Shadows
Black Shadows technically looks like a kind of gray. However, if you look at the CMYK values, its K value is still proportionally much larger than cyan, yellow, and magenta. The value itself is just much lower than that of deeper blacks. Since it has more red compared to blue or green, Black Shadows does have some pleasantly warm undertones.

Black Shadows
Hex #BFAFB2
RGB 191, 175, 178
CMYK 0, 8, 7, 25

Black Raspberry
Some shades of black are closer to pure black, while others look more like a hybrid of black and another color. Black Raspberry is one of the latter colors. It’s a deep purple mixed with black, and it’s a lovely color to choose if you like purple but need something a bit more subtle.

Black Raspberry
Hex #451425
RGB 69, 20, 37
CMYK 0, 71, 46, 73

Kombu Green
Kombu Green is another of the black shades that effectively combines black with another color. Its name comes from the kombu variety of kelp. And as you’d probably guess, it has a much higher proportional amount of green than red or blue. It looks especially nice alongside khaki and other shades of tan.

Kombu Green
Hex #354230
RGB 53, 66, 48
CMYK 20, 0, 27, 74

Zinnwaldite Brown
This unique color isn’t quite black, isn’t quite brown, and isn’t quite burgundy, either. It’s warmer than most blacks, and it also has pronounced red undertones. Zinnwaldite Brown looks great as a text color against ivory or other shades of off-white.

Zinnwaldite Brown
Hex #2C1608
RGB 44, 22, 8
CMYK 0, 50, 82, 83

Dark Slate Gray
Dark Slate Gray is the type of color that could reasonably be categorized as both a shade of gray and as a shade of black. It has an interesting mix of green, blue, and black, and it’s a great non-traditional color if you’d prefer a departure from your typical black or gray palette.


Dark Slate Gray
Hex #2F4F4F
RGB 47, 79, 79
CMYK 41, 0, 0, 69

Dark Charcoal
Dark Charcoal is one of the more balanced colors on our list. Its RGB values indicate that it has equivalent amounts of green, red, and blue. It has no cyan, magenta, or yellow, but it does have a K value of 80. It’s a wise choice if you need something just a bit less dark than a true black.

Dark Charcoal
Hex #333333
RGB 51, 51, 51
CMYK 0, 0, 0, 80

Russian Violet
This is a beautiful color that’s effectively a mix of both black and a deep blue-violet. It has a high cyan value as well as a higher proportion of blue compared to red and green. Like many of the purplish blacks, this one looks especially nice as text against an ivory background.

Russian Violet
Hex #32174D
RGB 50, 23, 77
CMYK 35, 70, 0, 70

Olive Drab #7
As you can tell by its name, there are many different variants of Olive Drab. And despite its unappealing name, it’s actually a very pleasant black-brown with green undertones. Olive Drab #7 looks especially nice next to jewel tones.

Olive Drab #7
Hex #3C341F
RGB 60, 52, 31
CMYK 0, 13, 48, 76

Dark Sienna
There are many different shades of sienna out there, and Dark Sienna is likely the darkest of all. This color is very similar to dark burgundy, and its rich quality gives it a dignified look that sets it apart.

Dark Sienna
Hex #3C1414
RGB 60, 20, 20
CMYK 0, 67, 67, 76

Alien Black
True to the name, Alien Black does have a space-like quality about it. As illustrated in its RGB values, this shade has more blue than red or green, giving it a pleasant blue undertone. It also has a large amount of cyan. Alien Black is right at home in a neutral color palette, but it also pops against yellows and other bright colors.

Alien Black
Hex #1A2228
RGB 26, 34, 40
CMYK 35, 15, 0, 84

Black Chocolate
This beautiful, deep black-brown is the color of chocolate with very large proportions of cacao. Darker than dark chocolate, this shade has just a touch of yellow for a burst of pleasant warmth.

Black Chocolate
Hex #1B1811
RGB 27, 24, 17
CMYK 0, 11, 37, 89

Blue Charcoal
Blue Charcoal is probably the darkest of the blue-black colors out there. As you’d expect, it has large amounts of black and cyan. Its RGB values reveal that it contains more blue than red or green. Blue Charcoal is a great option if you need a blue-hued black, and it looks especially nice alongside medium to light browns.

Blue Charcoal
Hex #262B2F
RGB 38, 43, 47
CMYK 19, 9, 0, 82

Gothic Grape
This entertainingly-named color certainly suits its name. Gothic Grape is essentially a grape-colored purple with more black added. It does have warm red undertones. Most of that comes from its very large amount of magenta.

Gothic Grape
Hex #120321
RGB 18, 3, 33
CMYK 45, 91, 0, 87

Metropolis
True to its name, Metropolis is a sleek, modern black shade that is beautifully balanced and just slightly less dark than a true black. As indicated by its RGB values, there are equal amounts of green, blue, and red. It also has no cyan, yellow, or magenta, but it does have a high K value.

Metropolis
Hex #1A1A1A
RGB 26, 26, 26
CMYK 0, 0, 0, 90

Night Shadow
Night Shadow is a color that is remarkably similar to Metropolis. It also has identical amounts of red, blue, and green. However, Night Shadow’s values are higher than those of Metropolis. It also has a K value that’s just slightly lower.

Night Shadow
Hex #1C1C1C
RGB 28, 28, 28
CMYK 0, 0, 0, 89

Off Black
You’ve heard of off-white, but the term “off-black” is used far less often. This shade of Off Black is essentially a dark gray. That makes sense according to its CMYK values. It contains far less black than many of the darker blacks on our list. It has very small hints of magenta and yellow.

Off Black
Hex #595652
RGB 89, 86, 82
CMYK 0, 3, 8, 65

Dark Raisin
This is a different, darker color than Raisin, and it does look similar to some of the darker raisins in any given box. As you might expect, this color has a decent quantity of red compared to green and blue. It also has the same value for magenta as it does for yellow.


Dark Raisin
Hex #1A0F0F
RGB 26, 15, 15
CMYK 0, 42, 42, 90

Tea Bag
Tea Bag is a bit darker than you’d expect most tea to be, but it does get close to the color of pekoe or another black tea. Though it does have some warmth thanks to a burst of yellow and magenta, Tea Bag has a very large proportion of black.

Tea Bag
Hex #161311
RGB 22, 19, 17
CMYK 0, 14, 23, 91

Electric Black
It may seem odd to describe black as being “electric,” but you can somewhat see why this one is described as such. Electric Black does seem to be high-energy for a black shade. It has the same amounts of red, blue, and green, and it has less black than some of the deepest blacks on the color spectrum.

Electric Black
Hex #292929
RGB 41, 41, 41
CMYK 0, 0, 0, 84

Tech Black
Tech Black’s smooth, modern feel comes largely from its very high proportion of black and slight cyan presence. It also has just slightly more green and blue than red. It’s certainly an option if you want a basic black that has just the slightest of cool undertones.

Tech Black
Hex #0D0E0E
RGB 13, 14, 14
CMYK 7, 0, 0, 95

Dull Black
Though its name may be unappealing, Dull Black is actually a relatively pleasing shade of black. There are equal (and relatively low) amounts of green, blue, and red. It has a high K value with no presence of cyan, magenta, or yellow. It’s the ideal option if you need an average, low-energy black for your project.

Dull Black
Hex #161616
RGB 22, 22, 22
CMYK 0, 0, 0, 91

Dark Black
This might seem like a strange name for black. After all, all black shades are dark. But Dark Black does have a very high K value, and the considerable presence of cyan makes it appear even darker. Notably, Dark Black has almost no green, blue, or red.

Dark Black
Hex #010203
RGB 1, 2, 3
CMYK 67, 33, 0, 99

Natural Black
Natural Black is fairly similar to Dark Black. It also has a high K value and a good bit of cyan. However, it contains more magenta than Dark Black does. It’s a good color choice if you need a more traditional black that is not overly dark.


Natural Black
Hex #07000B
RGB 7, 0, 11
CMYK 36, 100, 0, 96

Retro Black
This black shade certainly exudes vintage appeal. It looks very much like the color of faded-out black text, and it would look especially nice as typeface on a yellowed or parchment-style backdrop. As shown in this color’s CMYK values, Retro Black has less pure black than many of the darker blacks mentioned on our list.

Retro Black
Hex #1F201F
RGB 31, 32, 31
CMYK 3, 0, 3, 87

Black Green (RAL)
This is another shade of black from the RAL color matching system. As you can probably guess, it has more green than red or blue. It has a larger amount of cyan and less black than most of the shades described here.

Black Green (RAL)
Hex #303D3A
RGB 48, 61, 58
CMYK 21, 0, 5, 76

Deep Black
Though it is not the same color as Dark Black, Deep Black is an intense black shade that is ideal if you want an especially rich color. Deep Black has a K value of almost 100. But somewhat surprisingly, it also has a significant presence of magenta and a decent amount of yellow.


Deep Black
Hex #050203
RGB 5, 2, 3
CMYK 0, 60, 40, 98

Refresh Black
This straightforward black shade is refreshed by just a hint of cyan. It also has slightly more blue and green than red. This combination makes it a classic black that has just a little bit of a cool undertone.

Refresh Black
Hex #111212
RGB 17, 18, 18
CMYK 6, 0, 0, 93

Rustic Black
This black shade is one of the few that’s suited to vintage-inspired applications. Rustic Black has a faded look about it, and it looks nice alongside weathered wood or against a tan or brown backdrop. The burst of yellow also adds just enough warmth.

Rustic Black
Hex #1B1A16
RGB 27, 26, 22
CMYK 0, 4, 19, 89

Rose Ebony
This pleasantly-named color looks just like it sounds. It’s essentially a rosy shade of off-black. Rose Ebony has far less black than many examples we’ve described. It also has a significant amount of red and a somewhat high percentage of magenta. If you like reddish blacks but want something a little cooler, Rose Ebony is a distinctive option.


Rose Ebony
Hex #674846
RGB 103, 72, 70
CMYK 0, 30, 32, 60

Liver
You might imagine the color Liver as being a deep brown, but Liver is more of a grayish black. This shade of black has a lower K value than many blacks that we’ve described. However, its sizable presence of blue helps it from becoming too warm. Liver black looks great alongside many shades of blue and green.

Liver
Hex #534B4F
RGB 83, 75, 79
CMYK 0, 10, 5, 67

Purple Taupe
The name of this color suggests a purplish brown, but Purple Taupe is also essentially a shade of black. This deep color contains a fairly high amount of green, but it has higher amounts of both red and blue. This pleasant color has a slate-like quality about it, and it’s a smart option if you like grayish blacks but would prefer something a bit more purple.

Purple Taupe
Hex #50404D
RGB 80, 64, 77
CMYK 0, 20, 4, 69

Black Pearl
This pretty black shade is one of the especially aptly-named colors on our list. Most black pearls have a greenish look about them, and Black Pearl has enough green and blue to help create that look. It isn’t a color you see too often, and it’s a great candidate if your project requires a black shade with deep, serene, blue-green undertones.

Black Pearl
Hex #0E161A 
RGB 14, 22, 26
CMYK 46, 15, 0, 90

Black Russian
Black Russian is another of the slate-like black shades with powerful blue undertones. Not surprisingly, it has a large amount of blue in its RGB value and a decent presence of cyan in the CMYK value. It’s a balanced shade and an excellent option if you like slate colors but would prefer something a bit more blue.

Black Russian
Hex #24252B
RGB 36, 37, 43
CMYK 16, 14, 0, 83

Aesthetic Black
This lovely, muted black is an excellent choice if you want a black that is not too terribly dark. It has a little bit of both cyan and magenta, but it also contains more blue compared to red or green. If you want a medium black with modern appeal, this one is definitely one to consider.

Aesthetic Black
Hex #1C1C1E
RGB 28, 28, 30
CMYK 7, 7, 0, 88

Signal Black (RAL)
Signal Black is another color from the RAL color matching system. This color has a soft, faded look that makes it different from most deep black shades. It has more red, green, and blue than most other black shades. And unsurprisingly, it has a lower K value than many of the darker blacks on the color spectrum.


Signal Black (RAL)
Hex #2B2B2C
RGB 43, 43, 44
CMYK 2, 2, 0, 83

Cafe Noir
This color’s name means “black coffee,” and it’s almost the same color as its namesake. Cafe Noir is a paler, more brown black than many of the black shades out there. Its K value is one of the lower ones, and its somewhat high presence of red, blue, and green helps to create its distinctive deep-brown hue.

Cafe Noir
Hex #4B3621
RGB 75, 54, 33
CMYK 0, 28, 56, 71

Luxury Black
This shade has a rich, velvety blue hue about it. It has a good bit of depth thanks to its high K value. And while it has no magenta or yellow, it does have a sizable amount of cyan that helps create its cool appeal.

Luxury Black
Hex #060D0D
RGB 6, 13, 13
CMYK 54, 0, 0, 95

Bright Black
This pretty blue-black is approximately the color of a black panther’s coat in the sun. It is made up of a larger amount of blue compared to red or green. It has just a touch of cyan and magenta to balance out the darkness. It’s an ideal color for when your project needs a black that is slightly less intense.

Bright Black
Hex #222024
RGB 34, 32, 36
CMYK 6, 11, 0, 86

Black Blue (RAL)
This shade of deep blue-black is another one from the RAL color matching system. Like several other colors that we’ve described, it has a somewhat large portion of cyan that helps give it a look similar to that of navy. However, a burst of magenta contributes to its subtle glow of warmth.

Black Blue (RAL)
Hex #1A1E28
RGB 26, 30, 40
CMYK 35, 25, 0, 84

Glossy Black
Thanks to its slightly muted look, Glossy Black is well-suited to being printed on glossy paper. Its K value of 85 is reasonably dark without becoming overly deep, and it has almost no magenta, yellow, or cyan. Glossy Black also has about the same amounts of green, red, and blue, so it’s a refreshingly balanced shade of black.

Glossy Black
Hex #252324
RGB 37, 35, 36
CMYK 0, 5, 3, 85

Ivory Black
This color has a name that is somewhat of an oxymoron. Ivory describes an off-white color, but Ivory Black is more of an off-black. However, Ivory Black has a softer look than many black shades. It looks especially nice alongside ivory and other warm off-white shades.

Ivory Black
Hex #231F20
RGB 35, 31, 32
CMYK 0, 11, 9, 86

Pastel Black
Pastel versions of most colors are essentially paler versions, and that is exactly what Pastel Black is. That fact is illustrated by its K value. Most deeper blacks have a value in the upper 90s, and Pastel Black has a K value of 89.

Pastel Black
Hex #1D1C1A
RGB 29, 28, 26
CMYK 0, 3, 10, 89

Fashion Black
This shade of black is probably the one you most often see on dresses, blazers, and other articles of black clothing. It’s one of the darkest blacks that we’ve described, and it also has barely any red, green, or blue.

Fashion Black
Hex #060403
RGB 6, 4, 3
CMYK 0, 33, 50, 98

Graphite Black (RAL)
If you need a black shade that captures the slight silvery hue of graphite, Graphite Black may be your answer. This color matches its namesake well. Its high proportions of green and blue give it cool energy, and its somewhat low K value softens it a bit.

Graphite Black (RAL)
Hex #27292B
RGB 39, 41, 43
CMYK 9, 5, 0, 83

Black Gray
Many colors on this list could conceivably be described as grayish black. However, this specific color sits right in the middle of black and gray. If you’d like a color that’s essentially a blacker version of charcoal gray, Black Gray just might be right for your project.

Black Gray
Hex #303234
RGB 48, 50, 52
CMYK 8, 4, 0, 80

Black Hole
This color’s hex value is almost the same as that of Sable. But Black Hole is a very dark black. It has a K value of 98, no magenta or cyan, and just a small amount of yellow. This color is one of the more intense blacks on our list. It looks especially nice against neons and other bright colors.

Black Hole
Hex #060605
RGB 6, 6, 5
CMYK 0, 0, 17, 98

Kokushoku
This particular shade of black is one of Japan’s traditional colors. The name in Japanese just translates to “black.” As seen in this shade’s CMYK values, Kokushoku’s intensity primarily comes from its high K value.

Kokushoku
Hex #171412
RGB 23, 20, 18
CMYK 0, 13, 22, 91

Kurotobi
This is another Japanese color name. “Kurotobi” is also the name of the black kite, a species of bird. This color is a reddish black-brown that carries more warmth than many of the colors that we’ve described. It has fairly large amounts of red, blue, and green. This helps explain some of its brownish color.

Kurotobi
Hex #351E1C
RGB 53, 30, 28
CMYK 0, 43, 47, 79

Void
Like many of the shades of black with spacey-sounding names, Void is a deep, dark, contemplative color. As illustrated in its RGB values, this color has almost no red, blue, or green. And while it has a very high K value, the large amount of cyan helps deepen it further.

Void
Hex #010207
RGB 1, 2, 7
CMYK 86, 71, 0, 97

Wet Suit
Wet Suit is a deep, lovely shade of dark black. And if you’ve ever had to swim in a wet suit, you know that this color matches the color of a sleek suit freshly out of the water. Like many of the deeper blacks out there, this particular shade has almost no red, green, or blue.

Wet Suit
Hex #080706
RGB 8, 7, 6
CMYK 0, 12, 25, 97

Yacht Club Black
This interestingly-named black shade does have a bit of a high-class look to it. Like many blacks that we have described, it has deep blue undertones thanks to having more blue than red or green. It also has more cyan compared to magenta or yellow. This unique color looks especially nice next to light shades of yellow, green, or pink.

Yacht Club Black
Hex #222627
RGB 34, 38, 39
CMYK 13, 3, 0, 85

Young Night
This color’s exciting name seems fitting. It is reminiscent of the sky’s color shortly after dark. Young Night is a very well-balanced off-black. It contains black without cyan, magenta, or yellow, and its RGB values are all equivalent.

Young Night
Hex #232323
RGB 35, 35, 35
CMYK 0, 0, 0, 86

Blackstrap Molasses
This color accurately captures the deep brownish-black color of quality molasses. Some of its warm undertones come from a slight bit of yellow and magenta. Like many of the faded blacks, this off-black has a vintage vibe that makes it a great candidate for colored text over off-white backgrounds.

Blackstrap Molasses
Hex #2B2523
RGB 43, 37, 35
CMYK 0, 14, 19, 83

Carbon Black
Carbon Black is one of the deeper blacks described here. That makes it all the more unusual that it has a higher value for yellow than it does for black. It also has more red than blue or green. Still, it’s one of the more impactful shades of black on the color spectrum.

Carbon Black
Hex #0C0A00
RGB 12, 10, 0
CMYK 0, 17, 100, 95

Cynical Black
Cynical Black is one of the more interestingly named blacks mentioned here. Its values show that it’s part of a pattern. This variant of off-black is one of the many shades that have identical values for red, green, and blue. It has no cyan, magenta, or yellow, but it does have a significantly high K value.

Cynical Black
Hex #171717
RGB 23, 23, 23
CMYK 0, 0, 0, 91

Black Plum
Most of us probably imagine plums as being purple. But this color is roughly that of a very dark plum. It is essentially black with slight purple undertones. So it isn’t surprising that Black Plum has high values of red and blue. Though its K value is lower than that of some of the blacks mentioned here, this color still has impressive depth.

Black Plum
Hex #362B32
RGB 54, 43, 50
CMYK 0, 20, 7, 79

Reversed Gray
This color has a somewhat confusing name. And while it’s described as being gray, Reversed Gray is a definite shade of black. Compared to many blacks on our list, it has a very high K value. Especially when you consider the fact that there’s no presence of cyan, magenta, or yellow.

Reversed Gray
Hex #080808
RGB 8, 8, 8
CMYK 0, 0, 0, 97

Stout
This rich color is essentially the same color as a dark stout fresh from the tap. It’s one of the dark blacks with brown undertones that we’ve mentioned here. Though the CMYK values indicate a significant presence of black, Stout’s somewhat large amounts of magenta and yellow contribute some warmth to its undertones.

Stout
Hex #0F0B0A
RGB 15, 11, 10
CMYK 0, 27, 33, 94

Tornado Cloud
While the clouds surrounding a tornado may not always get quite this dark, Tornado Cloud is still a lovely shade of black with relatively few undertones. While it has a high K value, it has comparatively little cyan and magenta and no yellow. If your project requires a shade of off-black that’s close to being a true neutral, this one is a great potential selection.

Tornado Cloud
Hex #121213
RGB 18, 18, 19
CMYK 5, 5, 0, 93

Walnut Hull
Walnut Hull is one of the black shades that are closer to being a dark brown. Appropriately, it’s just about the color of a shadow inside of a shelled walnut. This pleasant color’s warm brown undertones come partially from its near-equal presence of green, blue, and red.

Walnut Hull
Hex #1B1813
RGB 27, 24, 19
CMYK 0, 11, 30, 89

Tap Shoe
This cool, mellow black is one that has pronounced slate blue undertones. It has a lower K value than many blacks mentioned on our list, and its presence of cyan helps shape its particularly unique hue.

Tap Shoe
Hex #2A2B2D
RGB 42, 43, 45
CMYK 7, 4, 0, 82

Woodsmoke
Woodsmoke is one of the loveliest blacks that we’ve mentioned here. It has a smokey quality similar to that of its namesake, and it’s very at home in color palettes of grays and other neutrals. A slight blue-brown undertone makes it a real standout.

Woodsmoke
Hex #2B3230
RGB 43, 50, 48
CMYK 14, 0, 4, 80


Black Red
This color is a bit more intense and energetic than oxblood, burgundy, and similar colors. It’s a lot like blood red with some black added. It looks especially nice alongside various jewel tones.

Black Red
Hex #3D2022
RGB 61, 32, 34
CMYK 0, 48, 44, 76

Wind Cave
Just like an actual cave, Wind Cave is not pure black. It’s a shadowy gray that has a somewhat slate-like quality. Its heavy presence of cyan helps to create its cool blue undertone.

Wind Cave
Hex #1F2024
RGB 31, 32, 36
CMYK 14, 11, 0, 86

Heavy Gray
Even though this color has “gray” in the name, it’s really more black. Heavy Gray is fairly close to pure black. Its K value is 98, and its low RGB values are equal across the board.

Heavy Gray
Hex #050505
RGB 5, 5, 5
CMYK 0, 0, 0, 98
/////////////////////////////// End of black

///////////////////////////////// Gray
Arsenic
Arsenic is a darker shade of gray that contains some traces of blue.


Arsenic
Hex #3B444B
RGB 59, 68, 75
CMYK 21, 9, 0, 71

Ash Gray
Ash gray is named to represent the color of ashes.

Ash Gray
Hex #B2BEB5
RGB 178, 190, 181
CMYK 6, 0, 5, 25

Battleship Gray
Battleship gray gets its name from the paint used to rustproof both steel and iron battleships.

Battleship Gray
Hex #848482
RGB 132, 132, 130
CMYK 0, 0, 2, 48

Black Coral
Black coral is named aptly after the soft, deep-water corals known as either black coral or thorn coral.

Black Coral
Hex #54626F
RGB 84, 98, 111
CMYK 24, 12, 0, 56


Blue Gray
Blue gray is a straightforward color representing a standard blue color with heavy traces of gray.

Blue Gray
Hex #98AFC7
RGB 152, 175, 199
CMYK 24, 12, 0, 22

Cadet Gray
Cadet gray has a blue-like tint, and the word was historically used to refer to some military uniforms.

Cadet Gray
Hex #91A3B0
RGB 145, 163, 176
CMYK 18, 7, 0, 31

Carbon Gray
Carbon gray is a darker gray with a slight warm temperature.

Carbon Gray
Hex #625D5D
RGB 98, 93, 93
CMYK 0, 5, 5, 62

Charcoal
Charcoal is colored much like its name sake: the dark gray tones of burnt wood.

Charcoal
Hex #36454F
RGB 54, 69, 79
CMYK 32, 13, 0, 69


Cinereous
Cinereous color is a warmer shade of gray that is tinged with some copper brown tones.

Cinereous
Hex #98817B
RGB 152, 129, 123
CMYK 0, 15, 19, 40

Cool Gray
Cool gray is closer to a light gray color that’s been mixed with some blue.

Cool Gray
Hex #9090C0
RGB 144, 144, 192
CMYK 25, 25, 0, 25

Dark Gray
Dark gray color is simply light gray with a darker tint applied.

Dark Gray
Hex #A9A9A9
RGB 169, 169, 169
CMYK 0, 0, 0, 34

Davy’s Gray
Davy’s gray is a deeper, darker gray color typically made from slate, carbon black, and iron oxide.

Davy’s Gray
Hex #555555
RGB 85, 85, 85
CMYK 0, 0, 0, 67


Deep Space Sparkle
Deep space sparkle derives its name from outer space, yet the color tone is a bit lighter with bluish or greenish tints.

Deep Space Sparkle
Hex #4A646C
RGB 74, 100, 108
CMYK 31, 7, 0, 58

Dim Gray
Dim gray features darker tints of the common gray color.

Dim Gray
Hex #696969
RGB 105, 105, 105
CMYK 0, 0, 0, 59

Gainsboro
Gainsboro is a paler tone of gray and it stands as an achromatic color as it lacks any hue.

Gainsboro
Hex #DCDCDC
RGB 220, 220, 220
CMYK 0, 0, 0, 14

Gray
Gray color is a tone that lands right between white and black.

Gray
Hex #808080
RGB 128, 128, 128
CMYK 0, 0, 0, 50


Gray Cloud
Gray cloud is a light gray color that can resemble darker clouds in the sky.

Gray Cloud
Hex #B6B6B4
RGB 182, 182, 180
CMYK 0, 0, 1, 29

Gray Dolphin
Gray dolphin features a color tone that resembles that of a dolphin, which is where it gets its name from.

Gray Dolphin
Hex #5C5858
RGB 92, 88, 88
CMYK 0, 4, 4, 64

Gray Goose
Gray goose is a deeper gray tone, and the name is a play on the drink known as Grey Goose.

Gray Goose
Hex #D1D0CE
RGB 209, 208, 206
CMYK 0, 0, 1, 18

Gray-Green
Gray-green, also referred to as emerald-gray, is gray with tones of green in it.

Gray-Green
Hex #5E716A
RGB 94, 113, 106
CMYK 17, 0, 6, 56


Gray Wolf
Gray wolf takes its name from the gray wolves found in North America and Eurasia, and the color tone is generally darker.

Gray Wolf
Hex #504A4B
RGB 80, 74, 75
CMYK 0, 7, 6, 69

Glaucous
Glaucous is a color that features tints of blue, and its name is typically used on the surface of some plants that are bluish or pale gray in appearance.

Glaucous
Hex #6082B6
RGB 96, 130, 182
CMYK 47, 29, 0, 29

Gunmetal
Gunmetal is a deep, dark shade of gray with purple or bluish tints.

Gunmetal
Hex #2A3439
RGB 42, 52, 57
CMYK 26, 9, 0, 78

Jet
Jet is a color that’s almost black in appearance, and it shares its name with the similarly colored mineraloid jet.

Jet
Hex #343434
RGB 52, 52, 52
CMYK 0, 0, 0, 80


Jet Gray
Jet gray has heavy tints of blue alongside gray to create a lighter, cooler shade.

Jet Gray
Hex #616D7E
RGB 97, 109, 126
CMYK 23, 13, 0, 51

Light Gray
Light gray is a gray color that leans more toward white to create a paler appearance.

Light Gray
Hex #D3D3D3
RGB 211, 211, 211
CMYK 0, 0, 0, 17

Light Slate Gray
Light slate gray features some cool tints of blue and is generally on the paler side of slate gray.

Light Slate Gray
Hex #6D7B8D
RGB 109, 123, 141
CMYK 23, 13, 0, 45

Marengo
Marengo is often used to describe wet asphalt due to its blackish gray tone.

Marengo
Hex #4C5866
RGB 76, 88, 102
CMYK 25, 14, 0, 60

Medium Gray
Medium gray color is slightly lighter than a regular gray tone but darker than light gray.

Medium Gray
Hex #BEBEBE
RGB 190, 190, 190
CMYK 0, 0, 0, 25

Nevada
Nevada is a slightly cool tone that’s among the darkest shades of gray.

Nevada
Hex #666A6D
RGB 102, 106, 109
CMYK 6, 3, 0, 57

Nickel
Nickel resembles the color of the metal known as nickel, which it also receives its name from.

Nickel
Hex #727472
RGB 114, 116, 114
CMYK 2, 0, 2, 55

Old Silver
Old silver color is a tone of silver that is darker and warmer in appearance.

Old Silver
Hex #848482
RGB 132, 132, 130
CMYK 0, 0, 2, 48

Outer Space
Outer space gets its name from the dark color of space that may have tints of blue.

Outer Space
Hex #414A4C
RGB 65, 74, 76
CMYK 14, 3, 0, 70

Rocket Metallic
Rocket metallic is a warm gray that is more purplish in tone.

Rocket Metallic
Hex #8A7F8D
RGB 138, 127, 141
CMYK 2, 10, 0, 45

Scorpion
Scorpion color is much like a brownish gray although not quite as warm as the creature it gets its name from.

Scorpion
Hex #5E5E5E
RGB 94, 94, 94
CMYK 0, 0, 0, 63

Silver
Silver is representative in name and color to the metal silver.

Silver
Hex #C0C0C0
RGB 192, 192, 192
CMYK 0, 0, 0, 25

Silver Chalice
Silver chalice is a softer, more neutral tone of gray.

Silver Chalice
Hex #ACACAC
RGB 172, 172, 172
CMYK 0, 0, 0, 33

Slate Blue
Slate blue is a cool shade of gray with a heavy blue tint.

Slate Blue
Hex #737CA1
RGB 115, 124, 161
CMYK 29, 23, 0, 37

Slate Gray
Slate gray has flecks of blue, but tends to be darker in tone.

Slate Gray
Hex #657383
RGB 101, 115, 131
CMYK 23, 12, 0, 49

Smoke
Smoke color is a shade of gray with a bit of green in it. It slightly leans closer to the darker end of the spectrum.

Smoke
Hex #738276
RGB 115, 130, 118
CMYK 12, 0, 9, 49

Smokey Gray
Smokey gray is a gray color that resembles dark smoke.

Smokey Gray
Hex #726E6D
RGB 114, 110, 109
CMYK 0, 4, 4, 55

Sonic Gray
Sonic gray has a neutral color temperature and leans more toward the darker side of gray.

Sonic Gray
Hex #757575
RGB 117, 117, 117
CMYK 0, 0, 0, 54

Spanish Gray
Spanish gray is referred to as gris in the Spanish color dictionary called Guía de coloraciones (Guide to colorations), and it is just slightly off-color of the normal gray tint.

Spanish Gray
Hex #989898
RGB 152, 152, 152
CMYK 0, 0, 0, 40

Stone Gray
Stone gray is a darker shade of gray that resembles a common stone color.

Stone Gray
Hex #928E85
RGB 146, 142, 133
CMYK 0, 3, 9, 43

Stormcloud
Stormcloud color takes its name from the dark tint that storm clouds have.

Stormcloud
Hex #4F666A
RGB 79, 102, 106
CMYK 25, 4, 0, 58

Taupe Gray
Taupe gray features tints of brown, but leans far more to the lighter end of the spectrum.

Taupe Gray
Hex #8B8589
RGB 139, 133, 137
CMYK 0, 4, 1, 45

Timberwolf
Timberwolf color is a light gray tint, and it gets its name from the Eastern wolf, otherwise known as the Timber Wolf.

Timberwolf
Hex #DBD7D2
RGB 219, 215, 210 
CMYK 0, 2, 4, 14

Onyx
Onyx color is one of the darkest shades of gray with it heavily resembling the gemstone onyx.

Onyx
Hex #353839
RGB 53, 56, 57
CMYK 7, 2, 0, 78

Payne’s Gray
Payne’s gray has bold tints of blue, and it’s named after the painter William Payne.

Payne’s Gray
Hex #40404F
RGB 64, 64, 79
CMYK 19, 19, 0, 69

Platinum
Platinum is a gray-white, paler color that looks much like the metal known as platinum.

Platinum
Hex #E5E4E2
RGB 229, 228, 226
CMYK 0, 0, 1, 10

Pink Gray
Pink gray is a shade that resembles an even blend of pink, white, and gray tones.

Pink Gray
Hex #E7DADA
RGB 231, 218, 218
CMYK 0, 6, 6, 9

Purple Gray
Purple gray is a lighter purplish-gray shade with a cooler temperature.

Purple Gray
Hex #A7A6BA
RGB 167, 166, 186
CMYK 10, 11, 0, 27


Rose Quartz
Rose quartz is a grayer shade that stems from the rose color.

Rose Quartz
Hex #AA98A9
RGB 170, 152, 169
CMYK 0, 11, 1, 33

Vampire Gray
Vampire gray is also referred to as just “vampire”, and it is a darker, warmer shade that tends to represent the Halloween season.

Vampire Gray
Hex #565051
RGB 86, 80, 81
CMYK 0, 7, 6, 66

White Smoke
White smoke is one of the lightest shades of gray and a few tones darker than pure white.

White Smoke
Hex #F5F5F5
RGB 245, 245, 245
CMYK 0, 0, 0, 4

Xanadu
Xanadu is a color that’s closer to greenish-gray, and its name comes from a plant known as Philodendron.

Xanadu
Hex #738678
RGB 115, 134, 120
CMYK 14, 0, 10, 47


Bright Gray
Just like its name suggests, Bright Gray is a gray shade with a lot of white. It is especially good as a wall color if you want something that has a slightly cool energy without being overly dark. Bright Gray is also a pleasant, pale neutral that is a great color for cardstock or regular paper.

Bright Gray
Hex #E8E9EB
RGB 232, 233, 235
CMYK 1, 1, 0, 8

X11 Gray
This pleasant and relatively pale shade of gray is a bit darker than Bright Gray. It’s a bit warmer than many shades of gray and it has more yellow than it does cyan. X11 Gray makes a good backdrop color, but it also works well with assorted neutrals, especially somewhat warmer ones like khaki.

X11 Gray
Hex #BBBCB6
RGB 187, 188, 182
CMYK 1, 0, 3, 26

Dark Silver
Dark Silver is a color with a very accurate name. It’s roughly between the color of silver and the color of tarnish. It’s an unusual shade that has no cyan, but it does have both yellow and magenta. That combination makes it a warmer gray with a reddish undertone. It isn’t quite rose gray, but it does have a bit of a rosy undertone.

Dark Silver
Hex #746D69
RGB 116, 109, 105
CMYK 0, 6, 9, 55

Pastel Gray
The word “pastel” might make you think of calm, muted colors. But Pastel Gray is more reminiscent of bright, shining silver. It has a very small amount of yellow, so there’s just a hint of warmth. Pastel Gray is a good color choice if you’re looking for a shade of gray that’s close to being white.

Pastel Gray
Hex #CCCDC6
RGB 204, 205, 198
CMYK 0, 0, 3, 20

Dusty Gray
As a neutral color, gray looks great when it’s infused with little hints of other colors. Dusty Gray is a light gray shade that has a touch of lavender. It’s a cool gray that looks a lot like the color of lilac blossoms after dusk.

Dusty Gray
Hex #B29CA2
RGB 178, 156, 162
CMYK 0, 12, 9, 30

Misty Gray
Mist is probably one of the first things you picture when you imagine gray things in the natural world. And just like mist you typically see in an early morning sky, Misty Gray has a touch of blue. It looks especially nice as a wall color if you can’t decide whether you want to be surrounded by gray or blue.

Misty Gray
Hex #BCC2C2
RGB 188, 194, 194
CMYK 3, 0, 0, 24

White Gray
You can’t really see luster through a computer screen, but White Gray has a look that is almost pearlescent. It’s pale enough that it works beautifully as an alternative to white in traditional black and white patterns. This combination gives patterns a slightly cooler, decidedly modern look.

White Gray
Hex #F2F3F5
RGB 242, 243, 245
CMYK 1, 1, 0, 4

Vintage Gray
Most shades of gray have a little bit of a vintage vibe about them. The color probably makes you think of black and white photos. If you’re creating a grayscale design, Vintage Gray gives a beautiful, old-world vibe alongside Spanish Gray, its complementary color. It’s a deep, present shade that really makes a statement, especially when it’s compared to much paler grays.

Vintage Gray
Hex #989692
RGB 152, 150, 146
CMYK 0, 1, 4, 40

Gentle Gray
Just like its name suggests, Gentle Gray is a soft, mild shade of gray that’s similar to the color of the paler lines on heather gray fabric. And when it comes to RGB and CMYK values, it is one of the more balanced colors on the list. Its values for blue, red, and green are all equal. And of the CMYK values, it only has a numerical value for K.

Gentle Gray
Hex #DADADA
RGB 218, 218, 218
CMYK 0, 0, 0, 15

Zombie Gray
Just like the old, rotting flesh on a zombie, Zombie Gray has a greenish undertone. However, the amount of green isn’t excessive, and it isn’t necessarily unpleasant. Zombie Gray is darker and more intense than many cool grays on the list. It’s dark enough to be used in color patterns where it contrasts with white or very pale gray shades.

Zombie Gray
Hex #63645E
RGB 99, 100, 94
CMYK 1, 0, 6, 61

Lavender Gray
Lavender and gray are two colors that look great together, and Lavender Gray is a lovely, gentle mixture of the two. Its complementary color is the soft, pearl-like Pastel Gray. These two colors look especially nice together, and Lavender Gray also works well alongside ivory and other shades of off-white.

Lavender Gray
Hex #C4C3D0
RGB 196, 195, 208
CMYK 6, 6, 0, 18

Perfect Gray
Perfect Gray’s name fits. It’s an average, medium gray that is an exceptionally balanced shade. This color has a large amount of black without any influence of yellow, magenta, or cyan. Green, blue, and red are all the value of 161.

Perfect Gray
Hex #A1A1A1
RGB 161, 161, 161
CMYK 0, 0, 0, 37

Graphite Gray
The graphite lead of a pencil is a familiar sight, and this dark, bluish shade of gray does it justice. Graphite Gray has an impressive presence, and it looks great as the darkest shade in a grayscale palette. Or, if you prefer a statement-making wall color, it’s an elegant and non-traditional choice.

Graphite Gray
Hex #4B4E53
RGB 75, 78, 83
CMYK 10, 6, 0, 67

Rustic Gray
Rustic shades of neutrals can add a certain charm to a whole range of projects. And Rustic Gray is no exception. This shade looks a lot like weathered wood that has been whitewashed. It has a bit of a silvery glow about it. Try combining it with deep navy blue or black for an understated yet elegant look.

Rustic Gray
Hex #A6ABA5
RGB 166, 171, 165
CMYK 3, 0, 4, 33

Echo
This dignified, pewter-like gray has a hint of a green undertone. It looks good with brownish shades of gray, as its complementary color is Taupe Gray. Like many similar shades, Echo also works well beside quiet yet saturated cool colors like navy and hunter green.

Echo
Hex #898D86
RGB 137, 141, 134
CMYK 3, 0, 5, 45

Window Gray
Window Gray is a somewhat strange name for a gray shade. After all, most people think of clear glass when they picture windows. It can be found on the Classic list curated by RAL, a European color-matching system that is a lot like Pantone. Window Gray is a pleasant, medium gray that works beautifully in patterns with various shades of blue.

Window Gray
Hex #989EA1
RGB 152, 158, 161
CMYK 6, 2, 0, 37

Silk Gray
Silk Gray is another gray variant that can be found on the RAL Classic list. As a soft, whitish gray, it’s close to the color of a shiny, off-white pillow. Silk Gray is a warm-leaning gray that contrasts beautifully with the cooler Metallic Silver, its complementary color.

Silk Gray
Hex #B6B3A8
RGB 182, 179, 168
CMYK 0, 2, 8, 29

Light Gunmetal
If your project requires a cool-leaning gray shade that’s more intense than most, Light Gunmetal is the ideal choice. It looks somewhat like a mixture of cobalt and silver. Not surprisingly, it has a fairly large amount of both blue and black. Light Gunmetal is especially striking as a dark background for white text.

Light Gunmetal
Hex #344148
RGB 52, 65, 72
CMYK 28, 10, 0, 72

Silver Pink
Silver Pink is essentially the cool counterpart to rose gold and similar shades. It looks a little like Dusty Rose. Silver Pink is a popular interior design color, and it is included in the Plochere system of colors.

Silver Pink
Hex #C4AEAD
RGB 196, 174, 173
CMYK 0, 11, 12, 23

Matte Silver
Of course, you can’t really show metallic colors on the screen. But matte colors like this one are designed to look like the opposite. They are somewhat flat and dull. Matte Silver is a little dull, but its touch of blue stops it from being overly boring. It’s an understated, modern gray that adds the finishing touch to all sorts of projects.

Matte Silver
Hex #A5A5A8
RGB 165, 165, 168
CMYK 2, 2, 0, 34

Rhythm
If you like uncommon shades of gray, Rhythm is certainly worth checking out. It’s hard to tell at first glance if this color is a type of blue, gray, or purple. But technically, Rhythm is considered to be a shade of gray with elements of blue and purple. It’s part of the list of colors published by Resene, a color matching system like Pantone that is especially popular in Australia and New Zealand.

Rhythm
Hex #777696
RGB 119, 118, 150
CMYK 21, 21, 0, 41

Pure Silver
Silver’s metallic luster is one of the most beautiful gray things in nature, and Pure Silver gets close to capturing it. This relatively faint gray is a good substitute for white if you’re looking for an original alternative. Since Pure Silver is a cool yet pale gray, it has a calming energy that makes it good for incorporating into your living space.

Pure Silver
Hex #C3C7C7
RGB 195, 199, 199
CMYK 2, 0, 0, 22

Dark Charcoal
While charcoal itself is usually black, the color charcoal typically describes a very dark gray. Dark Charcoal finds the middle ground between gray and black, and it has a great balance of color as well. Its values for green, red, and blue are the same. It also has a much higher black (K) value than most grays.

Dark Charcoal
Hex #333333
RGB 51, 51, 51
CMYK 0, 0, 0, 80

Best Gray
As grays go, Best Gray is a fairly energetic hue. It’s pale enough to be closer to white than it is to black. It also has more yellow than cyan. Best Gray is just about the color of a rain cloud, and as you may have guessed from the name, it’s a versatile and classic shade.

Best Gray
Hex #969892
RGB 150, 152, 146
CMYK 1, 0, 4, 40

Agreeable Gray
Agreeable Gray is a pleasant, rosy gray shade that has some warmth to it. Its reddish undertones give it a little more energy than most cooler gray shades. Its classic, slightly dusty appearance looks good with ivory and other warm-leaning off-white shades.

Agreeable Gray
Hex #D1CBC1
RGB 209, 203, 193
CMYK 0, 3, 8, 18

Oxford Gray
This cool, denim-like gray gets its name from the imposing gray towers of Oxford University. Thanks to the presence of black and cyan, this gray shade has a bluish appearance close to that of water on a cloudy day. Oxford Gray is an especially useful gray color for clothing.

Oxford Gray
Hex #8391A1
RGB 131, 145, 161
CMYK 19, 10, 0, 37

Antique Pewter
The soft, dignified shine of pewter is more muted than that of silver. And like its namesake, Antique Pewter has a vintage appeal that makes it a great choice for projects that need a medium, cool gray. In an all-gray palette, it offers a pleasing contrast with its complementary color – a warmer shade called Middle Gray.

Antique Pewter
Hex #808992
RGB 128, 137, 146
CMYK 12, 6, 0, 43

Warm Gray
Warm Gray is a unique color that sits somewhere between rose gray and taupe. It creates a dynamic all-neutral palette when paired with gray shades that contain a lot of blue. Alternatively, you also may find that you like diluted versions of Warm Gray. These paler colors have a pinkish hue.

Warm Gray
Hex #6E6259
RGB 110, 98, 89
CMYK 0, 11, 19, 57

Sage Gray
Shades of blue-gray may be fairly common, but it can be hard to find a shade of gray-green that is pleasing without looking sickly yellow in color. Sage Gray is a soft, alluring gray that splits the difference between a green and a neutral. Since it’s about the color of sagebrush, it’s right at home with reddish shades of tan that look like desert sand.

Sage Gray
Hex #B5BDA5
RGB 181, 189, 165
CMYK 4, 0, 13, 26

Dull Gray
Dull Gray certainly doesn’t have the most enticing name, but it’s a useful neutral that is close to the color of many gray rocks in nature. Its reddish undertones are readily apparent, but this color still avoids being overly warm or too energetic.

Dull Gray
Hex #8B837E
RGB 139, 131, 126
CMYK 0, 6, 9, 45

Rich Gray
Rich Gray is an interesting and unique dark gray shade that is essentially a mixture of charcoal, slate, and blue-gray. Since it’s so close to black, it makes a great text color against pale backgrounds. It’s also an excellent border color for stationery, flyers, or cards.

Rich Gray
Hex #1F2022
RGB 31, 32, 34
CMYK 9, 6, 0, 87

Ice Gray
You’ve heard of Ice Blue, but Ice Gray is an alternative if you’re looking for the same energy in a more neutral shade. It has just a hint of blue, but it’s closer to being a very pale pastel gray. If you need a neutral that manages to be both bright and cool, Ice Gray just might be the right color for your project.

Ice Gray
Hex #BEC3C6
RGB 190, 195, 198
CMYK 4, 2, 0, 22

Gray CMYK
The name of this color indicates that it’s close to the CMYK color model’s version of pure gray. Just as you would expect, Gray CMYK has a very high K value. And since it has just slightly more cyan than magenta, Gray CMYK is just a little cool in nature.

Gray CMYK
Hex #939598
RGB 147, 149, 152
CMYK 3, 2, 0, 40

Solid Gray
Solid Gray is an average gray shade that works well as a backdrop. Because it’s truly neutral, it also pairs equally well with warm colors, cool colors, and other true neutrals. And because it sits right in between the light grays and the dark grays, it’s a classic and all-purpose color.

Solid Gray
Hex #979797
RGB 151, 151, 151
CMYK 0, 0, 0, 41

Electric Gray
Electric Gray might seem like a strange color name. After all, electric yellows and greens are usually neon-like colors that seem to radiate energy. Electric Gray isn’t quite that high energy, but it does have an icy, piercing quality that makes it captivating to look at. It makes especially striking patterns on white or slightly off-white backgrounds.

Electric Gray
Hex #A5ADAD
RGB 165, 173, 173
CMYK 5, 0, 0, 32

Templeton Gray
This cool, dignified gray is one of the more popular gray paint shades offered by Benjamin Moore. It has a peaceful, almost oceanic blue-green undertone. As a wall color, it offers a welcome departure from your more typical shades of flat, average gray. It does well with baseboards that are painted a cool shade of white. Alternatively, Templeton Gray will be right at home alongside cool, seaglass-like blues and greens.

Templeton Gray
Hex #788787
RGB 120, 135, 135
CMYK 11, 0, 0, 47

Chrome
In real life, chrome is a dazzling metallic color that’s even brighter than silver. But as a color on the screen, Chrome is closer to being a very pale bluish gray. It looks a lot like the faint gray cast of the morning sky. It has a fairly high amount of blue and cyan, but its paleness makes it look just a little icy.

Chrome
Hex #DBE2E9
RGB 219, 226, 233
CMYK 6, 3, 0, 9

Sea Gray
Depending on the weather, the ocean can look green, blue, gray, or any combination of the three. Sea Gray is the color of the ocean under a cloudy sky. Though it is still a neutral color, it has pronounced blue undertones. It looks good alongside sea green and other cool pastels.

Sea Gray
Hex #9AA2A4
RGB 154, 162, 164
CMYK 6, 1, 0, 36

Glossy Gray
You can’t really see the gloss on a computer screen. But Glossy Gray is a color that is often used for glossy gray paints. Though it’s slightly warmer than average, Glossy Gray is a fairly nondescript color that is a good choice if you need an average-looking gray that doesn’t draw too much attention to itself.

Glossy Gray
Hex #AFADA9
RGB 175, 173, 169
CMYK 0, 1, 3, 31

Anvil Gray
Anvil Gray is both one of the darkest and one of the most balanced gray shades on the list. It has a much higher K value than most of the gray shades listed here. Additionally, if you look at the RGB values, you can see that all values are equal – 33% blue, 33% red, and 33% green.

Anvil Gray
Hex #6B6B6B
RGB 107, 107, 107
CMYK 0, 0, 0, 58

Chameleon Gray
This rich, medium-dark gray is an ideal choice if your project requires a gray shade with considerable presence. And though this color is a fairly well-balanced one, it is slightly cooler than it is warm. Because of its cool nature, Chameleon Gray looks good mixed with various shades of blue and blue-gray. But since it does have a decent amount of yellow, this color also has enough warmth to be comfortable among an assortment of warmer shades.

Chameleon Gray
Hex #686965
RGB 104, 105, 101
CMYK 1, 0, 4, 59

Cement Gray
Cement Gray is close to the color of wet cement, although it is slightly darker. It’s made up of more green than it is red or blue, but the green undertone is not overly pronounced. It’s also a fairly dark gray shade. Try combining this one with various green shades. On its own, it has a businesslike cast, but green surroundings help to bring out its cool energy.

Cement Gray
Hex #858A7E
RGB 133, 138, 126
CMYK 4, 0, 9, 46

Steel Gray
Steel Gray is probably one of the most commonly-used names used to describe various gray shades. But this particular version gets very close to the actual color of steel. Though it isn’t especially dark, Steel Gray does have a relatively large amount of blue that gives it a somewhat soothing bluish cast.

Steel Gray
Hex #888B8D
RGB 136, 139, 141
CMYK 4, 1, 0, 45

Dorian Gray
This shade of gray gets its name from the Oscar Wilde novel The Picture of Dorian Gray. The book is about a portrait of a man named Dorian Gray. Instead of aging as humans naturally do, Dorian Gray stays looking the same, but the picture of him in the portrait gradually appears older and older.

Dorian Gray
Hex #ACA79E
RGB 172, 167, 158
CMYK 0, 3, 8, 33

Gun Smoke Gray
You’ve heard “gunmetal” and its variants used to describe various colors of gray. By contrast, Gun Smoke is a bit paler and smoky-looking. It’s a darker alternative to Misty Gray and similar colors, and it’s a good choice if you need a cloudy, smoke-like gray that has a little more depth and presence. This color has a good balance of warm and cool.

Gun Smoke Gray
Hex #8A868E
RGB 138, 134, 142
CMYK 3, 6, 0, 44

Camouflage Gray
You already know that camouflage comes in a whole range of colors. Tan variants help you blend into desert surroundings while greenish versions work well in forests. For gray or rocky environments, gray to black camouflage shades work well. Camouflage Gray is one of the shades found in this type of camouflage. But even on its own, it’s an interesting color to choose. Though a burst of yellow keeps it from being overly cool, it has a slight green undertone that helps keep it harmonious with natural environments.

Camouflage Gray
Hex #545851
RGB 84, 88, 81
CMYK 5, 0, 8, 65

Fashion Gray
Chances are good that you have at least one item of Fashion Gray clothing in your closet or dresser. This is a color that is very commonly used when making gray socks, shirts, blazers, and more. It’s a fairly light, relatively neutral gray shade that has just a hint of warmth to it. It looks good with most other colors, so it is suitable for use in patterns, too.

Fashion Gray
Hex #8E8D8C
RGB 142, 141, 140
CMYK 0, 1, 1, 44

Neutral Gray
As its name indicates, Neutral Gray is a versatile and neutral color. It looks a bit like Fashion Gray, but it is a bit cooler in nature. It has more blue and green than red. It is peaceful and soothing with a medium amount of presence, and it does especially well when used to make patterns on paler backdrops.

Neutral Gray
Hex #898E8C
RGB 137, 142, 140
CMYK 4, 0, 1, 44

Revere Pewter
There’s a whole wealth of beautiful gray paints out there, and Revere Pewter is one. Offered by Benjamin Moore, this vintage-inspired pewter shade is a lovely, warm, and soft gray. Thanks to its relatively low K value, Revere Pewter is one of the paler shades on the list. Its reddish undertones give it a slightly warm cast, too.

Revere Pewter
Hex #CCC7B9
RGB 204, 199, 185
CMYK 0, 2, 9, 20

Olive Gray
As we saw with Zombie Gray, green undertones aren’t always the most beautiful. But Olive Gray incorporates just a hint of olive green to give it a subdued warmth that makes it look great in just about every application.

Olive Gray
Hex #A09F8D
RGB 160, 159, 141
CMYK 0, 1, 12, 37

Metallic Gray
We’ve already mentioned the fact that you can’t really see a metallic sheen on digital colors. But Metallic Gray is roughly the color of most shiny, silvery gray colors. This color is light, cool, and refreshing. It looks great surrounded by modern-looking blues and other cool colors.

Metallic Gray
Hex #A8A9AD
RGB 168, 169, 173
CMYK 3, 2, 0, 32

French Gray
French Gray is one of the nicest-looking warm grays on our list. It has a pleasant, vintage-tinged woolly appeal. Much of its warmth comes from the fact that it has a lot of yellow – its Y value is almost half of its K value. But some of that warmth is tempered by green and blue undertones, and the color is not too warm or too cool.

French Gray
Hex #B4B19A
RGB 180, 177, 154
CMYK 0, 2, 14, 29

Iron
Iron is probably one of the best-known gray metals, and this particular shade is a highly versatile one. It has a decent amount of influence from both warm and cool undertones. But on average, Iron is just a bit more warm than it is cool. It has a medium-to-high K value, so it sits pleasantly between light grays and darker shades.

Iron
Hex #A59C94
RGB 165, 156, 148
CMYK 0, 5, 10, 35

Pale Smoke
This is another of the cool gray paint colors offered by Benjamin Moore. It’s often described as being “moody,” and it’s easy to see why. This wispy gray has greenish-blue undertones that keep it cool. But since it has a low K value, those undertones are easier to see than they are in darker grays.

Pale Smoke
Hex #CAD4D1
RGB 202, 212, 209
CMYK 5, 0, 1, 17

Bone
Most of us probably think of bone as being white. But truthfully, most bones are off-white in color. This particular shade is really more gray than it is white. And because it has significant red and yellow undertones, it has an orangey glow that sets it apart from other gray shades. Thanks to its aged look, Bone makes a great background color for signage and stationery.

Bone
Hex #D7D2CB
RGB 215, 210, 203
CMYK 0, 2, 6, 16

Heather
Heather is one of the color names that is frequently used to describe various shades of gray fabrics. Most heather grays are made up of a mix of dark gray and light gray, so this particular shade strikes a nice medium between them.

Heather
Hex #9AA297
RGB 154, 162, 151
CMYK 5, 0, 7, 36

True Silver
True Silver is really more of a true dark gray. But nonetheless, this cool shade does a great job taking the place of black in softer color schemes. Its steely cast gives it an authoritative look, but it still manages to not be overly bold.

True Silver
Hex #8A8D8F
RGB 138, 141, 143
CMYK 3, 1, 0, 44

Power Gray
You probably don’t think of gray when you imagine a power color. But Power Gray has a remarkable presence. It’s very balanced in terms of warm and cool influences, and it can hold its own against neons and other bright colors. Power Gray works very well when used in workout clothing since it helps bright colors pop.

Power Gray
Hex #707272
RGB 112, 114, 114
CMYK 2, 0, 0, 55

Storm Gray
Many shades of gray are named after storm-related things. Storm Gray is one that’s especially accurately named. It comes from Pantone’s Textile Cotton eXtended list. It’s a pleasant, neutral gray that pairs well with both warm and cool textile colors.

Storm Gray
Hex #B5BAB6
RGB 181, 186, 182
CMYK 3, 0, 2, 27

Ultimate Gray
Ultimate Gray is another member of the Pantone Textile Cotton eXtended list. And along with Illuminating yellow, it’s the Pantone Color of the Year 2021. Like Storm Gray, it is an especially suitable color for sheets, towels, and other household goods. It’s a great choice if you want a standard gray color that’s a bit darker than average.

Ultimate Gray
Hex #939597
RGB 147, 149, 151
CMYK 3, 1, 0, 41

Rhino
This accurately-named color is just about the color of a rhino. It’s a soft gray with some blue-green undertones. Its RGB value for green is more than its red or blue value. Though its K value is somewhat high, Rhino isn’t an especially dark gray shade. It looks good with other greens and cool colors.

Rhino
Hex #B9BBB6
RGB 185, 187, 182
CMYK 1, 0, 3, 27

Harbor Gray
The look of a tranquil harbor at sunrise is a common gray sight in nature. And this relatively pale gray definitely does that sight justice. You might expect a color like this one to be more cool in nature. But as you can see from its values for yellow and red, Harbor Gray is actually somewhat warm.

Harbor Gray
Hex #C7C6C1
RGB 199, 198, 193
CMYK 0, 1, 3, 22

Seal
The sight of a glossy gray seal leaping out of the water is a memorable one. And this color is virtually the same as the darkest gray on a seal’s body. Though it may be too dark for a wall color, Seal does wonderfully as the background for bright white or off-white text.

Seal
Hex #818380
RGB 129, 131, 128
CMYK 2, 0, 2, 49

Anchor
Most new anchors are a bright steel or iron color. But over time, they start to turn much darker. This deep, intense dark gray is the color of an anchor that has begun to weather over time. And thanks to its very cool nature, it contrasts beautifully with loud, bright warm colors.

Anchor
Hex #3E424B
RGB 62, 66, 75
CMYK 17, 12, 0, 71

Abalone
Commercial abalone is beautifully purple-green and iridescent. But this pale, warm gray is the color of the outside of the abalone shell. Even though it’s much less interesting than the interior color, this gray shade makes a peaceful yet energizing wall color. It also looks nice when used for pillows on either pure white or very dark furniture.

Abalone
Hex #D6CFC7
RGB 214, 207, 199
CMYK 0, 3, 7, 16

Fossil
Finding a fossil is an exciting event, especially if it’s unexpected. However, this particular gray shade is not too exciting. It’s a fairly standard medium gray that is very versatile. Fossil is very slightly more warm than it is cool, and it’s equally at home with warm colors, cool colors, and neutrals.

Fossil
Hex #787276
RGB 120, 114, 118
CMYK 0, 5, 2, 53

Mink
Shiny, luxuriant mink is one of the most popular types of fur in the world. It comes in many colors, but this lovely gray shade is a common color of gray mink. It is warm and slightly dusty in nature, and it looks especially nice with both copper and pale pink.

Mink
Hex #888078
RGB 136, 128, 120
CMYK 0, 6, 12, 47

Trout
You might have heard of rainbow trout, but even these colorful fish do have some level of gray in their scales. This soft gray has an equal amount of red and green undertones. That’s fitting as most rainbow trout have some level of pink and green on their sides.

Trout
Hex #979788
RGB 151, 151, 136
CMYK 0, 0, 10, 41

Thunder
This is a rosy, relatively warm gray shade with fairly prominent red undertones. It is about the color of a stormy sky right before the lightning starts. Thunder is a medium-dark shade with a K value of 26. Its somewhat high degree of yellow and green may mean it’s not quite right for all applications, but it’s nonetheless a great color to go with greens and similar shades.

Thunder
Hex #BDB7AB
RGB 189, 183, 171
CMYK 0, 3, 10, 26

Shades On
This deep yet energetic darker gray is just about the color of the world if you’re wearing sunglasses. It’s a paint color offered by Behr. Shades On has equal amounts of red, blue, and green. It also has one of the highest K values of the colors that we’ve mentioned here.

Shades On
Hex #606060
RGB 96, 96, 96
CMYK 0, 0, 0, 62

Lava
Real lava is a fiery reddish orange. After all, it is molten rock that flows over the ground. But when it cools, it sometimes becomes roughly this color. Lava is a great color choice if your project needs a pale, ash-like gray. It has slightly more blue and cyan than other colors, so it is a bit cool without becoming icy.

Lava
Hex #808588
RGB 128, 133, 136
CMYK 6, 2, 0, 47

Stone Eagle
Stone animals are somewhat common in gardens around the world. And if you want to add a touch of majesty to yours, a stone eagle is a great addition. Most stone animals like this one are very pale, making Stone Eagle a highly accurate color. It is pale and soft, and it looks especially good beside powder or pastel blues.

Stone Eagle
Hex #D8D9DA
RGB 216, 217, 218
CMYK 1, 0, 0, 15

Ice Cube
If you like cooler colors with some real energy, Ice Cube is worth checking out. It’s a paint color offered by Sherwin Williams. As a wall color, Ice Cube looks very good with cool white ceilings and baseboards.

Ice Cube
Hex #E3E4E0
RGB 227, 228, 224
CMYK 0, 0, 2, 11

Porpoise
This color is close to that of a dolphin, although it’s darker than some. Porpoise is somewhat between navy and medium gray, making it a versatile shade that fits into a variety of color schemes. You can work it into a neutral palette with shades of brown or shades of gray. Alternatively, it looks nice alongside warmer jewel tones.

Porpoise
Hex #4D4D5C
RGB 77, 77, 92
CMYK 16, 16, 0, 64

Flint
Though more blue than natural flint, Flint is nonetheless an intriguing color. Against yellow, it creates a high-energy contrast. But because it sits between blue and gray shades, Flint also works beautifully in gradient palettes going from gray to blue.

Flint
Hex #7E7D9C
RGB 126, 125, 156
CMYK 19, 20, 0, 39

Dove
Most people think of doves as being white, but they actually come in many different species. This color is like that of a mourning dove, a gray-brown wild bird with a distinctive, sad call. Unlike many of the grays on the list, this one has a purplish tint to it.

Dove
Hex #7C6E7F
RGB 124, 110, 127
CMYK 2, 13, 0, 50

Gray Owl
Gray Owl is another subtle gray paint color offered by Benjamin Moore. It’s a great alternative to white paint in an office environment, but it also lends a cool, modern look to just about any living space.

Gray Owl
Hex #D5D5CD
RGB 213, 213, 205
CMYK 0, 0, 4, 16

Coin
Though it’s much more blue than most silver-hued coins, Coin is a pretty gray shade that is a little like Lavender Gray and a little like Blue Gray. It’s certainly different, and it can make a dramatic statement as a wall color. Alternatively, it’s a useful and harmonious accent color for rooms with pale, demure color schemes.

Coin
Hex #9897A9
RGB 152, 151, 169
CMYK 10, 11, 0, 34

Fog
This unique color is certainly darker than most fog, but it is close to the color of fog as the sun begins to set. It has a distinctly purple look, making it one of the less common gray shades out there. It looks good alongside other shades of bluish gray. But for an odd pop of color, try pairing it with yellow, purple’s complementary color.

Fog
Hex #655967
RGB 101, 89, 103
CMYK 2, 14, 0, 60

Laid Back Gray
The color gray comes in many different energies. One of the most common ones is a calm, collected energy. Laid Back Gray certainly captures this energy. It’s a Behr paint color, and it makes a quiet, relaxed room color if you’re looking for a calm neutral.

Laid Back Gray
Hex #B4AFA9
RGB 180, 175, 169
CMYK 0, 3, 6, 29
//////////////////////////////// End of gray

// White

White
This is your standard, run of the mill white. Known to be crisp and pure, this color is often thought of when winter is about to roll around. White flakes of snow, pure crystals of sugar, and bright white paint for mixing are all things represented by this hue. Another great example is your standard sheet of printer paper or white sketchbook page.

White
Hex #FFFFFF
RGB 255, 255, 255
CMYK 0, 0, 0, 0

Ghost White
This slightly off-white hue has subtle hues of gray and blue, creating a ghoulish look. This hue is just like a ghost, subtle and almost transparent and can be seen in some costumes. This color is very similar to pure white but differs because of the gray, slightly sick tinge to it.

Ghost white
Hex #F8F8FF
RGB 248, 248, 255
CMYK 3, 3, 0, 0

White Smoke
This color is less blue than ghost white, with silvery gray tones mingling in with the white. It is like a soft cloud of clean-burning smoke, maybe from a simple log fire or other clean-burning fuel source. This may be seen coming from a chimney if the wood burns clean and is of the right tree species.

White smoke
Hex #F5F5F5
RGB 245, 245, 245
CMYK 0, 0, 0, 4


Baby Powder
Baby powder is a shade of white with soft tones of yellow, looking very similar to actual baby or talc powder. This color was released as a Crayola crayon as part of a scented crayon line, bringing it into popularity. Many people can easily imagine this color when they smell baby powder, or vice versa.

Baby powder
Hex #FEFEFA
RGB 254, 254, 250
CMYK 0, 0, 2, 0

Snow
This stunning shade of white snow is almost as pure as the original color itself. First used as a reference to a color in the year 1000, this shade conjures up images of frosty winter mornings with a fresh blanket of snow covering the ground. Snowmen, snow angels, and snowball fights, followed by steaming mugs of hot cocoa, are all images this color brings to mind.

Snow
Hex #F5FEFD
RGB 245, 254, 253
CMYK 4, 0, 0, 0

Ivory
Ivory has been in use as a color name for more than half a millennia. Named after the substance that animal teeth and tusks are composed from, this just slightly yellowed white is a simple yet beautiful shade of white that can give a work of art stunning color contrast that turns heads. It is often considered a pure color, great for creating the mirage of natural light.

Ivory
Hex #FFFFF0
RGB 255, 255, 240
CMYK 0, 0, 6, 0


Floral White
Floral white is almost a very pale yellow, though its lightness makes it classify as a white shade. This color is simple yet fanciful, perfect for wedding gowns. It also makes a common but always visually pleasing wall paint. The color is common and one of the most used off-whites in real world applications.

Floral white
Hex #FFFAF0
RGB 255, 250, 240
CMYK 0, 2, 6, 0

Seashell
Seashell is a pale off-white color that resembles seashells found at the beach or ocean. This shade of white has a pinkish hue and naturally looks very feminine and elegant, making it a great evening gown color. It’s a great summertime color, making one think of parties and lazy evenings spent laying in the sand, listening to the crash of waves on the beach.

Seashell
Hex #FFF5EE
RGB 255, 245, 238
CMYK 0, 4, 7, 0

Cornsilk
This color is a yellowish white, the color of cornsilks on a chill autumn day, waving their soft tendrils in the wind. This color has been officially in use for nearly a century and is almost creamy in appearance, creating a muted softness in tone.

Cornsilk
Hex #FFF8DC
RGB 255, 248, 220
CMYK 0, 3, 14, 0


Old Lace
Old lace is a shade of white with tones of yellow and orange gently mixed in. This is a classic color, well known in lace blankets, tablecloths, and doilies, as well as ladies lace clothing, such as gloves. It’s also used by many as an approximate skin tone for those of the Caucasian race, creating a standard for digitally created works of art.

Old Lace
Hex #FDF5E6
RGB 253, 245, 230
CMYK 0, 3, 9, 1

Cream
This color is a white shade with a good amount of yellow thrown in the mix. It is said to represent the color of fresh cream from cattle, a rich, buttery color that looks appetizing. This color has been in use for centuries, both within painting and other forms of art, and, more recently, on the web and in digital art.

Cream
Hex #FFFDD0
RGB 255, 253, 208
CMYK 0, 1, 18, 0

Beige
Though beige is technically a shade of white, it often appears to be more brown in hue and shade. It was originally a color that referred to the natural, undyed color of beige cloth, a cotton material that was commonly used in the past. This color is closer to a creamy white with yellow and brown pigments, instead of straight brown.

Beige
Hex #F5F5DC
RGB 245, 245, 220
CMYK 0, 0, 10, 4


Parchment
Parchment is a shade of white that is often thought of when discussing old school writing. Think old, textured parchment being written on with an old pot of ink and a feathered quill. Parchment paper is an almost tan off-white and the web color is as well.

Parchment
Hex #F1E9D2
RGB 241, 233, 210
CMYK 0, 3, 13, 5

Antique White
Antique white is mostly a color created just for the world wide web. When the creators of this color thought this up, they were likely thinking of thrift stores, old china dishes and pottery, or even an old antique sewing machine. This color is less pure than regular white, having an aged, slightly yellow look to it with just a hint of gray that almost resembles dust.

Antique white
Hex #FAEBD7
RGB 250, 235, 215
CMYK 0, 6, 14, 2

Champagne
Champagne is a unique, beautiful color with a natural elegance. Derived from the sparkling, bubbly drink, this color is a pale, almost straw colored yellow. It’s shimmery and almost translucent, just like a tall glass of the bubbly stuff. This color was commonly used in the early days of the internet.

Champagne
Hex #F7E7CE
RGB 247, 231, 206
CMYK 0, 6, 17, 3


Eggshell
This is a shade commonly seen while strolling through the chilly fridge aisles of the grocery store. Slightly tan in color, but still primarily a white, this shade closely resembles the color of eggshells on farm fresh eggs. A pale, almost ghost-like color that is familiar to both farmers and consumers.

Eggshell
Hex #F0EAD6
RGB 240, 234, 214
CMYK 0, 3, 11, 6

Dutch White
This shade of white is very similar to that of eggshell. It is creamy and pale, a tannish yellow hue tinting the white. The color is more popular overseas but can often be spotted in public via siding on quaint homes. The hue has notable differences from that of plain white.

Dutch white
Hex #EFDFBB
RGB 239, 223, 187
CMYK 0, 7, 22, 6

Bone
Bone is a shade of white that we are all familiar with. This color is a shade of white with both gray and yellow undertones. The color looks almost old in itself, the color of death and decay. It can be seen in skeletons, both human and animal, and tools and furniture crafted out of bone, like those from the far distant past.

Bone
Hex #E3DAC9
RGB 227, 218, 201
CMYK 0, 4, 11, 11


Vanilla
Vanilla is a rich shade of off-white that has been in use as a reference to color since the 1920’s. This color is meant to represent many things, from the color of vanilla ice cream to the color of vanilla cake or other tasty treats. The color is creamy and almost yellow. You can see it in the wild in vanilla orchids, a beautiful white flower that’s great for landscaping.

Vanilla
Hex #F3E5AB
RGB 243, 229, 171
CMYK 0, 6, 30, 5

Flax
Like vanilla, flax has also been in use as a color since the early 1900’s. This off-white color is almost golden in hue, shimmering in the sun as the light glints off it. The color is based off the flax plant, a pale golden crop that grows in fields and waves in the wind. The color is subtle but striking, the gold almost reminding one of a crown fit for royalty.

Flax
Hex #EEDC82
RGB 238, 220, 130
CMYK 0, 8, 45, 7

Navajo White
This color, used on the web since the 80’s, is a unique and stunning shade of white. Though classified as white, the color is very close to orange, just softer and more muted. Almost like the beginning of a sunrise, Navajo white is based on the background of the Navajo Nation ethnic flag. This flag showcases this shade of white in a beautiful and unique way.

Navajo white
Hex #FFDEAD
RGB 255, 222, 173
CMYK 0, 13, 32, 0


Alabaster
This shade of white is a really unique color. It has a base of white with cooler tones of yellows, greens, and grays mingling together. The web color is based off the mineral alabaster, a soft rock that is often used in sculpting. It is also used to produce plaster, making the color familiar to most people. It was first used in reference to color in a Shakespeare play, The Rape of Lucrece.

Alabaster
Hex #EDEAE0
RGB 237, 234, 224
CMYK 0, 1, 5, 7

Chiffon
While many popular shades of white have cool undertones, Chiffon has a warm hint of peach. It’s an ideal choice if you’re looking for a wall color but want something different than your typical blue- or gray-hued white. It also brings a warm energy to any website backdrop.

Chiffon
Hex #FFFACD
RGB 255, 250, 205
CMYK 0, 2, 20, 0

Unresolved Problem
Much like its namesake, this memorable shade of white has a background that’s just slightly stormy. As you can see by its CMYK values, Unresolved Problem has more black than yellow, which helps create its distinctive undertones.

Unresolved Problem
Hex #F3F2ED
RGB 243, 242, 237
CMYK 0, 0, 2, 5


Old Wood
This color name might seem strange for a shade of white or gray. But it does look a little like the silvery sheen you typically see on old fenceposts. Since it has nearly equal proportions of red and green, Old Wood has the unique quality of appearing somewhat warm and somewhat cool at the same time.

Old Wood
Hex #F0EEE4
RGB 240, 238, 228
CMYK 0, 1, 5, 6

Rose White
This soft, lovely shade of white is approximately the color of a white rose. It has a slight hint of cream, and it makes a dignified color for stationery or cards. As you can see from its CMYK values, it has a small amount of magenta that gives it some level of warmth.

Rose White
Hex #FFFAFA
RGB 255, 250, 250
CMYK 0, 2, 2, 0

Vista White
This misty color is a very slight gray. It’s ideal for those who are looking for a shade of gray that is especially close to white. As you can see in its CMYK values, it only has a very slight hint of other colors.

Vista White
Hex #FDFCFA
RGB 253, 252, 250
CMYK 0, 0, 1, 1


Link White
One of the beautiful things about the many shades of white out there is the fact that you can find shades with undertones of almost any color. Link White has a slight hint of blue. It would make the ideal wall color for a workspace or office, as blue has been linked to productivity, and Link White offers the perfect compromise between white and blue.

Link White
Hex #ECF3F9
RGB 236, 243, 249
CMYK 5, 2, 0, 2

Spring
Spring is a shade of white that is effectively a soft gray. It’s reminiscent of some of the rain clouds you often see in the spring months. Spring’s soft color makes it a great text backdrop, and it also looks nice with pastel versions of various colors.

Spring
Hex #F3F0E8
RGB 243, 240, 232
CMYK 0, 1, 5, 5

Snow Drift
True to its name, Snow Drift is a snowy white shade that’s just slightly tinged with blue and gray. You can see that in its CMYK values. It has hints of both black and cyan. This bluish color is ideal if you’re looking for a quiet, soothing shade of white.

Snow Drift
Hex #F8FBF8
RGB 248, 251, 248
CMYK 1, 0, 1, 2

Peppermint
Many of us associate the word “peppermint” with the red and white peppermint candies. But this shade of white is modeled after the plant itself. Peppermint is a pale mint-green white shade. It’s perfect if you’re looking for a shade of white with a pleasant, springlike touch.

Peppermint
Hex #F1F9EC
RGB 241, 249, 236
CMYK 3, 0, 5, 2

Merino
This shade of white, named after the prized wool of merino sheep, looks a lot like a very faint taupe. It’s ideal if you’re looking for a shade that has a neutral undertone other than gray. Its brownish undertone has a warmth to it thanks to a relatively high proportion of yellow.

Merino
Hex #F2EBDD
RGB 242, 235, 221
CMYK 0, 3, 9, 5

Half and Half
This creamy white shade, named after the popular coffee additive, is one of the warmest white shades on the list. Notably, if you look at its CMYK values, all colors except for yellow have a value of zero. Despite its relative paleness, it’s one of the higher-energy shades of white on the list.

Half and Half
Hex #FFFFE4
RGB 255, 255, 228
CMYK 0, 0, 11, 0


Island Spice
This exotically-named white is another of the shades on the list that seems to have both warm and cool undertones. Though its value for black is zero, a relatively large presence of blue helps make it somewhat cool.

Island Spice
Hex #FFFCEC
RGB 255, 252, 236
CMYK 0, 1, 7, 0

Soft Peach
Despite the name, Soft Peach actually isn’t one of the warmer shades of white on the list. As you can see from both its RGB and CMYK values, it has a moderately high proportion of blue and black.

Soft Peach
Hex #F6F1F4
RGB 246, 241, 244
CMYK 0, 2, 1, 4

Harp
This soothing, angelic shade of white is an example of a bluish green shade. As you can see, it has equal proportions of cyan and black. That helps make it look both blue-green and gray at the same time. It’s a good option if you need a shade of white with especially cool undertones.

Harp
Hex #EBF5F0
RGB 235, 245, 240
CMYK 4, 0, 2, 4


Titan White
This lovely shade of white is somewhat unusual in that it has equal amounts of cyan and magenta. Despite the magenta, though, it primarily looks like it has very slight blue undertones. It makes a very soothing, subtle wall color.

Titan White
Hex #EEEEFF
RGB 238, 238, 255
CMYK 7, 7, 0, 0

Audience Anger
Despite the name, Audience Anger really isn’t an angry shade of white at all. Instead, it’s one of the versions of white with prominent blue undertones. You can see that in both the RGB and CMYK values. Audience Anger has more blue than red or green, and it also has more cyan than magenta, yellow, or black.

Audience Anger
Hex #EAF4FC
RGB 234, 244, 252
CMYK 7, 3, 0, 1

Orange White
Though it looks almost like pure white at first glance, Orange White does appear to have a slight hint of orange that comes from its red and yellow values.

Orange White
Hex #F8F9F5
RGB 248, 249, 245
CMYK 0, 0, 2, 2

Cough Mixture
Despite its odd name, Cough Mixture is a very pretty shade of white. It has a decidedly gray look about it, as explained by its high proportion of black relative to magenta, yellow, and cyan. It also has relatively even amounts of red, green, and blue.


Cough Mixture
Hex #F6F4F1
RGB 246, 244, 241
CMYK 0, 1, 2, 4

Albescent White
“Albescent” means turning into white, and this color does resemble a reddish color fading into white. It has a slightly ruddier look than most of the shades on the list, and as you can see in its RGB values, that is likely explained by its large proportion of red compared to blue or green. Thanks to its rosy glow, Albescent White is also one of the more energetic shades on the list.

Albescent White
Hex #F3DECA
RGB 243, 222, 202
CMYK 0, 9, 17, 5

Coconut
This warmish white shade looks a lot like a slightly more diluted version of Albescent White. It has a little more yellow than the typical stark white of a coconut’s flesh. It’s a good choice if you need a shade of white but would prefer something with a bit of a reddish undertone.

Coconut
Hex #FFF1E6
RGB 255, 241, 230
CMYK 0, 5, 10, 0

Pink Salt
This very slightly red shade of white is roughly the color of pink Himalayan salt. As you can see from its CMYK values, it has a decent presence of magenta, yellow, and black. That makes it a balanced shade that is neither too warm nor too cool, although it leans toward the warm side.


Pink Salt
Hex #F8EEEC
RGB 248, 238, 236
CMYK 0, 4, 5, 3

Frost
Frost is a pretty shade of white that just has the barest hint of black. Its CMYK values are empty except for a very small amount of black. It also has roughly equal amounts of red, green, and blue. Frost is a good choice if you want a fairly bright white that has a very slight cool undertone.

Frost
Hex #FCFBFC
RGB 252, 251, 252
CMYK 0, 0, 0, 1

Linen
This warm, vintage-inspired white has a parchment-like quality that makes it especially good for use in stationery or brochures. It also has a relatively large amount of yellow compared to cyan, magenta, and black.

Linen
Hex #F3EAD3
RGB 243, 234, 211
CMYK 0, 4, 13, 5

Rice
Since rice is one of nature’s relatively few edible white things, it’s not surprising that it has its own shade of white. This color is a very slight off-white with a warm undertone. It’s a nice wall color if you’re looking for a shade of white with some elements of both peach and gray.


Rice
Hex #FAF5EF
RGB 250, 245, 239
CMYK 0, 2, 4, 2

Daisy
When you look at its different color components, Daisy just might be the most balanced on the list. As you can see, it has exactly equal amounts of red, green, and blue. And when it comes to CMYK values, it only has a small amount of black.

Daisy
Hex #FAFAFA
RGB 250, 250, 250
CMYK 0, 0, 0, 2

Powder
Not to be confused with Baby Powder, Powder is a pleasant shade of white that’s one of the lightest on the list. It has a bit of yellow and a bit of black, so it manages to avoid being both overly warm and overly shadowy. Powder is a great choice if you want something that’s slightly cooler than pure white.

Powder
Hex #FBFCFA
RGB 251, 252, 250
CMYK 0, 0, 1, 1

Pearl
This soft, snowy shade does almost have the luster of a new white pearl. Pearl contains more yellow than it does black and more red than it does blue, so it has a more cheerful glow than many other versions of white.


Pearl
Hex #FBFCF8
RGB 251, 252, 248
CMYK 0, 0, 2, 1

Paris White
This classy, cool white is one of the bluer shades on the list. You can see that reflected in the CMYK values. Paris White has more cyan and more black than most types of white. If you’d prefer a white shade that is effectively a cross between powder blue and true white, this one is a good choice.

Paris White
Hex #C2D8D3
RGB 194, 216, 211
CMYK 10, 0, 2, 15

Cup Cake
Like Paris Blue, Cup Cake is a shade of white that has noticeable hints of blue. As you can see in the CMYK values, this color has more cyan than it does magenta, yellow, or black. It also has more blue than either red or green. Despite that fact, Cup Cake is still a definite shade of white.

Cup Cake
Hex #EBF6F7
RGB 235, 246, 247
CMYK 5, 0, 0, 3

White Dove
This calming shade of white is one of the colors sold by Benjamin Moore. Just like its namesake, it creates a sense of peace wherever it is. White Dove is a versatile neutral that works especially well as a wall color in a variety of decoration schemes.


White Dove
Hex #F0EFE7
RGB 240, 239, 231
CMYK 0, 0, 4, 6

White Whisper
Though the blueish cool whites certainly have their appeal, warm whites like Warm Whisper evoke a subtle sense of home. They are effective in projects where you need to create a sense of calm, safety, and home. White Whisper is especially nice. While it’s still a warmer white, it manages to not be overly brown or yellow.

White Whisper
Hex #EAE8E1
RGB 234, 232, 225
CMYK 0, 1, 4, 8

Lexicon
This sleek, modern white’s cool undertones and hint of blue make it a shade that exudes authority and confidence. It works especially well as a background for projects incorporating bursts of bright color.

Lexicon
Hex #E7EAEA
RGB 231, 234, 234
CMYK 1, 0, 0, 8

Greek Villa
This highly evocative white just might make you think of summer getaways by the sea. Greek Villa has an impressive presence and energy. As you can see through its CMYK values, it has some amount of magenta, yellow, and black. It also contains more red than blue or green, giving it a decidedly warm look.


Greek Villa
Hex #F0EBE3
RGB 240, 235, 227
CMYK 0, 2, 5, 6

White Diamond
Nothing says elegance like the gleam of a white diamond, and this color gets close to capturing that sophisticated energy. White Diamond is one of the gray-leaning shades of white on the list. It has three times as much black as it does yellow.

White Diamond
Hex #E7E8E2
RGB 231, 232, 226
CMYK 0, 0, 3, 9

Decorator’s White
True to its name, Decorator’s White is a shade that works nicely in a range of design schemes. It’s a very middle-of-the-road white in a good way. It’s not too gray, too blue, or too yellow. This color is an understated one that still manages to be elegant.

Decorator’s White
Hex #ECEFEC
RGB 236, 239, 236
CMYK 1, 0, 1, 6

Winter White
This lovely, soft white is reminiscent of snow-colored hillsides on overcast days. Though it’s a simple shade of white, it’s calming and dignified, too. Interestingly enough, it has identical proportions of red and green, and it also contains more black than most white shades on the list.


Winter White
Hex #DFDFD5
RGB 223, 223, 213
CMYK 0, 0, 4, 13

Spatial White
This sophisticated shade is a grayish white with just a hint of warmth. It has a higher K value (proportion of black) than most shades on the list, and it also has almost as much blue as it does red. Spatial White makes a businesslike wall color, and it’s also a good color choice for desks and filing cabinets.

Spatial White
Hex #DEDDDB
RGB 222, 221, 219
CMYK 0, 0, 1, 13

Hog Bristle Quarter
Though its name may not be all that appealing, Hog Bristle Quarter is an inviting shade of warm white. You can see that in its CMYK values. It has just as much yellow as it does black, and it also has a touch of red. This color can really open up a room, and you can even dilute it even more if you want just the barest hint of warmth in a white color.

Hog Bristle Quarter
Hex #EBE4D8
RGB 235, 228, 216
CMYK 0, 3, 8, 8

Simply White
Simply White is a dynamic, energetic shade that’s perfect for a range of projects. It has a bit of a rosy undertone, and it’s a great choice for text backgrounds. Simply White works well as a wall color, especially with baseboards painted a paler shade of white. It is also ideal as a furniture color in more modern living spaces.


Simply White
Hex #EFEDE3
RGB 239, 237, 227
CMYK 0, 1, 5, 6

Oyster White
This white shade is particularly true to its namesake. It’s about the color of the shell of a healthy oyster. And thanks to the presence of yellow and of slightly less red, it does have a touch of warmth. The fact that it has more red than green or blue is unsurprising, and it’s a versatile alternative to the many whites with blue undertones.

Oyster White
Hex #E3DFD2
RGB 227, 223, 210
CMYK 0, 2, 7, 11

White on White
This unusually-named shade does look a bit like a bluish white with a plain white overlay. Unlike many of the white shades on the list, it contains a hint of cyan with no yellow or magenta. It does, however, have a medium amount of black. Its relatively high amounts of blue and green give it a pleasant, water-like look. It’s ideal if you’re looking for an especially refreshing shade of white.

White on White
Hex #EDEFEF
RGB 237, 239, 239
CMYK 1, 0, 0, 6

Lexicon Quarter
As you may have guessed, Lexicon Quarter is a fainter shade of Lexicon. As you can see in its CMYK values, it has a little black with no cyan, magenta, or yellow. It contains a relatively even amount of red, blue, and green, so it’s well-balanced and good for projects that need a subtle shade of white.

Lexicon Quarter
Hex #F2F2F1
RGB 242, 242, 241
CMYK 0, 0, 0, 5

Alice Blue
Though it has “blue” in the name, Alice Blue is pale enough to be considered a shade of white. It looks a bit like a very dilute robin’s egg blue. It’s somewhat unusual in that it contains no black. Most shades of white on the list have at least a somewhat gray undertone. Alice Blue is perfect if you need a calming yet inviting white shade with just a touch of blue.

Alice Blue
Hex #F0F8FF
RGB 240, 248, 255
CMYK 6, 3, 0, 0

Honeydew
Honeydew continues the trend of shades of white without gray undertones. This pleasant, springlike color is essentially the color of a honeydew melon, but it’s a bit paler than its namesake. It has equal amounts of cyan and yellow, which makes it a very well-balanced greenish white.

Honeydew
Hex #F0FFF0
RGB 240, 255, 240
CMYK 6, 0, 6, 0

Mint Cream
Like its namesake, Mint Cream is a refreshing color that’s well-suited to summer. It is similar to Honeydew in that it’s a white shade with faint green undertones, but it has a higher proportion of cyan than yellow. This feature gives it a slightly cooler, blue-hued feel. It’s a great color for rooms with a lot of natural light.

Mint Cream
Hex #F5FFFA
RGB 245, 255, 250
CMYK 4, 0, 2, 0

Milk
Although it is slightly less bright than its namesake, Milk is an excellent choice of white if you want an option with more subtle undertones than most on the list. This one has a bit of warm yellow (as evidenced by its CMYK values), but it’s tempered by the barest hint of cyan. It’s a good choice if you’re looking for a warmish shade of off-white.

Milk
Hex #FDFFF5
RGB 253, 255, 245
CMYK 1, 0, 4, 0

Pomelo White
This yellowish shade of white looks like a diluted version of the blooms of its namesake, the pomelo plant. The pomelo, which is the large fruit of the pomelo plant, is widely considered to be the ancestor of the grapefruit, and it is still used in southeast Asia. Interestingly enough, its scientific name means “biggest citrus.”

Pomelo White
Hex #F9FFE3
RGB 249, 255, 227
CMYK 2, 0, 11, 0

Anti-Flash White
This is one of the whites on the list that has great historical significance. Anti-Flash White has historically been used on nuclear bomb-dropping aircraft. This particular shade helps reflect the radiation that happens after a nuclear blast. Thermal radiation has the potential to severely damage aircraft and harm the people inside, and Anti-Flash White is meant to help prevent some of that damage.

Anti-Flash White
Hex #F2F3F4
RGB 242, 243, 244
CMYK 1, 0, 0, 4

Magnolia
This white shade isn’t quite as bright as the blooms of the magnolia flower. In fact, it’s decidedly more blue-gray in color. Nonetheless, Magnolia is still a pretty shade of white that is a good choice if you’re looking for a subdued wall color or even a color for accent pieces in a room.

Magnolia
Hex #F8F4FF
RGB 248, 244, 255
CMYK 3, 4, 0, 0

Azure
You probably think of azure as being a bright blue. But just like many colors on the list, Azure is a shade of white with just a hint of azure blue. Not surprisingly, it contains cyan but no magenta, black, or yellow. It does have equal amounts of green and blue. This helps create its lovely, soft blue-green look.

Azure
Hex #F0FFFF
RGB 240, 255, 255
CMYK 6, 0, 0, 0

Huntington White
This somewhat unusual white shade is similar to the color of a rose gray horse. Huntington White has hints of both red and gray. You can see that it contains slightly more red than green or blue, and it also contains equal amounts of yellow and black. That combination helps it strike a delicate balance between warm white and cool white.

Huntington White
Hex #F1F0E5
RGB 241, 240, 229
CMYK 0, 0, 5, 5

Acadia White
This pleasant, grayish-brown white is a great choice if you’d prefer a warmer white for a wall color or backdrop. You can see its unusual shade explained in its CMYK values. It has decent proportions of both yellow and black. Acadia White also makes a good color choice for stationery.

Acadia White
Hex #F4EFE3
RGB 244, 239, 227
CMYK 0, 2, 7, 4

Gainsboro
This pleasant white shade may look slightly bluish in color. However, you might be surprised to see that Gainsboro has equal proportions of red, green, and blue. Its gray tone can be explained by its high proportion of black. As you can see in its CMYK values, it has a high proportion of black and no cyan, magenta, or yellow.

Gainsboro
Hex #DCDCDC
RGB 220, 220, 220
CMYK 0, 0, 0, 14

Mercury
This cool, grayish white is a very well-balanced shade. It has equal amounts of red, green, and blue. It’s one of the paler shades on the list, making it a good choice if you just want a very subtly shaded form of white for your project.

Mercury
Hex #E7E7E7
RGB 231, 231, 231
CMYK 0, 0, 0, 9

Lavender Blush
So far, most of the shades of white on the list have been grayish or bluish in color. Lavender Blush is a good choice if you’d prefer a soft pinkish white but don’t need the full saturation of a true pink. As you can see, it has a higher proportion of red than blue or green, and it also has a higher proportion of magenta than cyan, yellow, or black.

Lavender Blush
Hex #FFF0F5
RGB 255, 240, 245
CMYK 0, 6, 4, 0

Isabelline
Isabelline is a great white shade to pick if you would prefer a soft yellowish white as opposed to white with a pink, blue, or green tint. As you can see in its CMYK values, its balance of magenta, yellow, and black makes it a pleasant color with just enough warmth.

Isabelline
Hex #F4F0EC
RGB 244, 240, 236
CMYK 0, 2, 3, 4

Bubbles
True to its name, Bubbles is roughly the color of a very soft seafoam green. It stands out on the list because it has a higher proportion of cyan than magenta, yellow, or black. It also has more blue than green or red. It’s a great choice if you want a cooler shade that’s more cheerful than most.

Bubbles
Hex #E7FEFF
RGB 231, 254, 255
CMYK 9, 0, 0, 0

Glitter
Though its name suggests a loud, in-your-face shade, Glitter is actually a cool, relaxing shade of blue-white. Like Bubbles, it has more cyan than magenta, yellow, or black. It also has far more blue than red or green. Glitter can bring a real calming energy to any design or room, whether as a wall color or an accent color.

Glitter
Hex #E6E8FA
RGB 230, 232, 250
CMYK 8, 7, 0, 2

Platinum
This quiet, metallic white shade looks a lot like a cross between true white and pale gray. As you can see from its CMYK values, it does have a slight touch of yellow for added warmth. But the high proportion of black gives it a cool, soothing energy that still manages to be businesslike.

Platinum
Hex #E5E4E2
RGB 229, 228, 226
CMYK 0, 0, 1, 10

Cosmic Latte
This creatively-named white shade is one that leans toward being creamy and yellow. It’s not quite peach in color, but its warmth makes it a beautiful choice if you’re looking for a rich white for your project. As you’d expect, Cosmic Latte has a higher proportion of yellow than cyan, magenta, and black.

Cosmic Latte
Hex #FFF8E7
RGB 255, 248, 231
CMYK 0, 3, 9, 0

Blanched Almond
True to its name, Blanched Almond is roughly the color of an almond post-blanching. It’s one of the shades of white on the list that has a very high proportion of yellow, but the addition of magenta creates some additional warmth. It’s a great choice if you want a color that’s a little like peach with some added reddish undertones.

Blanched Almond
Hex #FFEBCD
RGB 255, 235, 205
CMYK 0, 8, 20, 0

Light Yellow
Though the name of this white shade is “Light Yellow,” it’s also closer to being true white than many shades on our list. This color is a lot like the very pale yellow of a newly-hatched baby chick. As you can see in its CMYK values, it contains yellow but no cyan, magenta, or black.

Light Yellow
Hex #FFFFE0
RGB 255, 255, 224
CMYK 0, 0, 12, 0

Natural White
Natural White is a beautiful choice of color if you want a warm white that is not especially saturated. It has brownish-red undertones. As you can see in its CMYK values, it has just a touch of magenta with slightly more yellow.

Natural White
Hex #EEECE6
RGB 238, 236, 230
CMYK 0, 1, 3, 7

Vivid White
If you want a soft white color, Vivid White is your answer. Vivid White is fairly close to being true white, but it has a barely-there icy undertone that gives it just a hint of blue. Still, even the cool blue of it is balanced out by a considerable presence of red compared to blue and green.

Vivid White
Hex #F8F8F4
RGB 248, 248, 244
CMYK 0, 0, 2, 3

White Wisp
White Wisp is a popular paint color made by Benjamin Moore, but it also makes a beautiful backdrop for a variety of projects. This color is a quiet grayish white that is paler than many shades on the list. It’s ideal if you’re looking for a shade that is still fairly close to true white.

White Wisp
Hex #E9E9E4
RGB 233, 233, 228
CMYK 0, 0, 2, 9

Azureish White
If you liked the color Azure mentioned earlier but need something closer to blue, Azureish White might be the right color for you. This color is essentially a very pale blue. You can see that in the CMYK values. It has a much higher proportion of cyan than magenta, yellow, and black. The slight proportion of black ensures that it looks different from most shades of grayish white.

Azureish White
Hex #DBE9F4
RGB 219, 233, 244
CMYK 10, 5, 0, 4

Timberwolf
This pleasant, calm grayish-white is much warmer than many shades on the list. It’s effectively in the middle of gray and white. As you can see from its CMYK values, it has a very high amount of black. But a touch of yellow gives it the slight bit of warmth that sets it apart.

Timberwolf
Hex #DBD7D2
RGB 219, 215, 210
CMYK 0, 2, 4, 14

Papaya Whip
This appetizingly-named color looks a lot like a shade of pale peach. As you can see in its CMYK values, Papaya Whip has a very large amount of yellow and a fairly large amount of magenta. It’s an ideal choice if you’re looking for a slightly tinted shade of white that’s also slightly peachy in nature.

Papaya Whip
Hex #FFEFD5
RGB 255, 239, 213
CMYK 0, 6, 16, 0

Antique White USA
Antique White USA is a variant of Antique White sold as a paint color by Dulux. It’s a bit warmer than other whites, and its proportions of magenta and yellow give it a bit of a taupe-like undertone.

Antique White USA
Hex #EEEAE1
RGB 238, 234, 225
CMYK 0, 2, 5, 7

Cola
Cola might seem like a strange name for a shade of white. But the color code listed below is a very pale version of the more saturated color of Cola. It looks a lot like soda that has been whitened in a float or very watered down. Unlike many colors on the list, Cola has red-brown undertones.

Cola
Hex #F9EDEB
RGB 249, 237, 235
CMYK 0, 5, 6, 2

Atrium White
As its name suggests, Atrium White does make an excellent color for a building’s atrium. It has equal proportions of yellow and black, and it offers a fair amount of warmth. Atrium White is a versatile neutral that goes well with a range of decoration schemes.

Atrium White
Hex #F1EEE4
RGB 241, 238, 228
CMYK 0, 1, 5, 5

Cascading White
This gentle white, appropriately enough, is just about the color of the white water falling down a waterfall. This color is an excellent wall or background color if you’re looking for an almost true white with just a touch of shadowy gray.

Cascading White
Hex #F7F5F6
RGB 247, 245, 246
CMYK 0, 1, 0, 3

Cotton Ball
Though it’s more blue in color than its namesake, Cotton Ball is nonetheless a subtle, pleasant bluish white that looks especially nice as a wall color with bright white baseboards. It’s about the color of the sky on a lightly overcast day.

Cotton Ball
Hex #F2F7FD
RGB 242, 247, 253
CMYK 4, 2, 0, 1

Photon White
This interestingly-named white shade has just the barest silvery look about it. As you can see by the relatively high amount of yellow, it is one of the warmer types of white on the list. Photon White is an especially nice color for cardstock and signage.

Photon White
Hex #F8F8E8
RGB 248, 248, 232
CMYK 0, 0, 6, 3

White Heat
White Heat is reminiscent of the overcast days of summer. Its cloudy look is tempered by a burst of yellow energy. It’s a warm white that’s a lot less saturated than many on the list, and it’s a good choice if you want something that’s a little different from most shades of white.

White Heat
Hex #FDF9EF
RGB 253, 249, 239
CMYK 0, 2, 6, 1

Whitewash
This pretty, quiet white does look a lot like the thin white paint often used for whitewashing. And of all the shades on the list, this is one of the closest to true white. You can see that reflected in its low CMYK values. Everything but yellow is at zero, and yellow is only at a one.

Whitewash
Hex #FEFFFC
RGB 254, 255, 252
CMYK 0, 0, 1, 0

Shadow White
Sometimes you just need a pale white with just a hint of shadow. Shadow White is a faintly gray-white shade that incorporates both blue and yellow to strike a good balance between warmth and coolness. As you can see from its CMYK values, it has a small amount of cyan, a little more yellow, and a greater amount of black.

Shadow White
Hex #EEF1EA
RGB 238, 241, 234
CMYK 1, 0, 3, 5

Abbey White
This dignified shade is a great example of a subtle warm white. With a pale taupe-like undertone, Abbey White has a vintage appeal that makes it a good choice for projects that need to have a classic vibe. As you can see from its CMYK value, it has a high proportion of yellow that helps create its substantial warmth.


Abbey White
Hex #EBE5D0
RGB 235, 229, 208
CMYK 0, 3, 11, 8

Acoustic White
This dignified, pale shade of white has an interesting undertone. It falls somewhere between light gray and sandy brown. Interestingly enough, it has the same proportion of yellow and black. It also has more red than green or blue, and that can help explain its relatively high energy.

Acoustic White
Hex #EFECE1
RGB 239, 236, 225
CMYK 0, 1, 6, 6

Aircraft White
Though it is slightly more blue than most, Aircraft White is a pleasant pale white. Since white helps reflect sunlight off the body of the aircraft, it makes it easier to reduce the amount of heat in the aircraft cabin. As you can see from the CMYK values, Aircraft White also has a higher proportion of cyan than it does magenta, yellow, or black.

Aircraft White
Hex #EDF2F8
RGB 237, 242, 248
CMYK 4, 2, 0, 3

Ceramic
You may have guessed it from the name, but Ceramic is a very pale white color. It’s ideal if you’ve found most colors on the list to be too far away from pure white. The small amount of cyan and yellow present give it a faintly blue-green glow.

Ceramic
Hex #FCFFF9
RGB 252, 255, 249
CMYK 1, 0, 2, 0

Coconut Butter
This is another warm, buttery white shade with sandy brown undertones. The relatively equal proportions of red and green help create its brownish hue, and its high proportion of yellow makes it look relatively warm.

Coconut Butter
Hex #F2EFE1
RGB 242, 239, 225
CMYK 0, 1, 7, 5

Abstract White
Abstract White is a well-balanced shade that looks like an energetic pale gray. Part of that quality can be explained by its equal proportions of yellow and black. A slight bit of magenta helps give it a little burst of further energy.

Abstract White
Hex #EDE9DD
RGB 237, 233, 221
CMYK 0, 2, 7, 7

Bright White
It’s been said that adding an extra touch of blue or green to white can make it look even brighter, and that seems to be the case with Bright White. This color looks a little like a very dilute powder blue, and it’s especially soothing to have as a wall color.

Bright White
Hex #F4F5F0
RGB 244, 245, 240
CMYK 0, 0, 2, 4


Broken White
This somber, misty-looking white is a great choice if you’re looking for a shade of white that’s closer to a pale gray. Like some other shades on the list, it has a decent amount of both yellow and black. That combination makes it a decently warm shade that’s great for a wide variety of applications.

Broken White
Hex #EEEBE3
RGB 238, 235, 227
CMYK 0, 1, 5, 7

Brilliant White
This shade of white has an undertone of bright robin’s egg blue. Unlike many shades of white, this one has a sizable amount of cyan. It also has a higher proportion of blue than it does red or green. It looks especially refreshing in a room with white furniture.

Brilliant White
Hex #EDF1FE
RGB 237, 241, 254
CMYK 7, 5, 0, 0

Commercial White
True to its name, Commercial White is well-suited to business spaces and signage. It has a serious, stoic look with just a touch of warmth thanks to its portion of yellow. It also has more red than green or blue, so it does seem to have just enough energy.

Commercial White
Hex #EDECE6
RGB 237, 236, 230
CMYK 0, 0, 3, 7


Feather White
Feathers are likely one of the first things most of us think of when we imagine white things. Feather White is a bit more gray than white. It has a much higher value for black than it does for cyan, magenta, or yellow. It also has a slight hint of cyan which adds just enough cool energy.

Feather White
Hex #E7EAE5
RGB 231, 234, 229
CMYK 1, 0, 2, 8

Swan White
This aptly-named white is just slightly off-white. You can see that reflected in the CMYK values. Its value for black is only one, and the values for cyan, magenta, and yellow are all zero. Swan White has equal amounts of red, green, and blue, so it’s an unusually well-balanced shade.

Swan White
Hex #FCFCFC
RGB 252, 252, 252
CMYK 0, 0, 0, 1

Polar Bear
Though it’s named after the sparkling white Arctic bear, Polar Bear is a somewhat grayish shade of white. It might best be described as the color of a wet polar bear, as it’s slightly darker than pure white. You can see that reflected in the CMYK values. The value for black is eight, but a value of four for yellow makes it just bright enough.

Polar Bear
Hex #EAE9E0
RGB 234, 233, 224
CMYK 0, 0, 4, 8


Paper White
Paper White isn’t exactly true to its name. Most paper is a very bright, stark white. Or at most, it’s a creamy off-white. Paper White is somewhat unusual in that it doesn’t have any yellow or black present, but it does have some level of cyan and magenta. It’s an ideal option if you like some of the bluish shades on the list but need something even more dilute.

Paper White
Hex #F7FCFE
RGB 247, 252, 254
CMYK 3, 1, 0, 0

Pacific Pearl
Pearls come in all kinds of different colors, and Pacific Pearl is roughly the color of a silver-gray pearl. It’s somewhat interesting in that it has cyan, yellow, and black present, but no magenta.

Pacific Pearl
Hex #E8EAE6
RGB 232, 234, 230
CMYK 1, 0, 2, 8

Night White
As its name suggests, Night White looks a lot like the color white does under the cover of night. Its grayish tinge still manages to be fairly energetic thanks to its small burst of yellow.

Night White
Hex #E1E1DD
RGB 225, 225, 221
CMYK 0, 0, 2, 12


Delicate White
Delicate White is a very well-named shade. It’s close to being true white with just a bit of wispy gray. It also has a decent balance of red, green, and blue, and it’s a highly versatile shade.

Delicate White
Hex #F1F2EE
RGB 241, 242, 238
CMYK 0, 0, 2, 5

Coconut White
Not to be confused with Coconut, Coconut White is a refreshing shade with a great balance of cyan and magenta. This combination gives it cool undertones with a hint of pink-red energy.

Coconut White
Hex #E9EDF6
RGB 233, 237, 246
CMYK 5, 4, 0, 4

Cake Batter
This shade looks a good bit like its namesake. It has a bit of a golden-brown undertone, but it’s still pale enough to be considered a shade of white. It’s an excellent choice if you’d like a slightly tinted white that’s brownish instead of grayish.

Cake Batter
Hex #F0EDDB
RGB 240, 237, 219
CMYK 0, 1, 9, 6

White Sand
White sand is one of the most common white things in nature. And like the actual sand, White Sand isn’t exactly pure white in color. It has a tint of very slight brownish gray.


White Sand
Hex #ECE9E4
RGB 236, 233, 228
CMYK 0, 1, 3, 7

Stone White
Appropriately, Stone White is just about the color of white quartz or very pale sandstone. If you prefer a very pale neutral that still has some element of warmth, it’s a great choice.

Stone White
Hex #FBF6F0
RGB 251, 246, 240
CMYK 0, 2, 4, 2

White Chocolate
Actual white chocolate is usually a creamy white in color, but this color looks more like a combination of milk chocolate and white chocolate. Still, it’s a great choice if you want a lovely, pale cocoa white.

White Chocolate
Hex #EDE6D6
RGB 237, 230, 214
CMYK 0, 3, 10, 7

Retro White
Many colors on the list look like vintage-inspired shades of white, and Retro White is a great one to select if you like one that strikes a good balance between warm and cool.

Retro White
Hex #EDEAE2
RGB 237, 234, 226
CMYK 0, 1, 5, 7
// End of white

#endif
