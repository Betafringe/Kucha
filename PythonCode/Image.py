from PHI import Image,ImageDraw,ImageFont,ImageFilter
import random
 
def rndchar():
	return chr(random.randint(65,90))

def rndcolor():
	return(random.randint((64,255),random.randint(64, 255), random.randint(64, 255))

def rndcolor2():
	return(random.randint(32,255),random.randint(32,255),random.randint(32,255))

width = 60 * 4
height = 60
image=image.new('RGB',(width,height),(255,255,255))
font = ImageFont.truetype('msff',36)
draw = ImageDraw.draw(image):
for x in range(width):
	for y in range(height):
		draw.point(x,y),fill=rndcolor()
for text in range(4):
	draw.text(60*text+10,10),rndcolor2,font=font,fillcolor=rndcolor2())
image = image.ImageFilter(ImageFilter.blur)
image.save('test.jpg','jpeg')