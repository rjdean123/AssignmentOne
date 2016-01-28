#include "image.h"
#include <stdlib.h>
#include <math.h>

// allows the use of min() and max() functions
#include <algorithm>
using namespace std;


Pixel::Pixel(const Pixel32& p)
{
	r = (float)((p.r)/255);
	g = (float)((p.g)/255);
	b = (float)((p.b)/255);
	a = (float)((p.a)/255);
}

Pixel32::Pixel32(const Pixel& p)
{
	r = (unsigned char)((p.r)*255);
	g = (unsigned char)((p.g)*255);
	b = (unsigned char)((p.b)*255);
	a = (unsigned char)((p.a)*255);
}

int Image32::AddRandomNoise(const float& noise,Image32& outputImage) const
{
	return 0;
}

int Image32::Brighten(const float& brightness,Image32& outputImage) const
{
	int r1, g1, b1;
    for (int x = 0; x < outputImage.width(); x++)
		for (int y = 0; y < outputImage.height(); y++)
		{	
			// clamp [0,255]
			r1 = (int)(pixel(x,y).r*brightness);
			if (r1 > 255)
				r1 = 255;
			if (r1 < 0)
				r1 = 0;
			g1 = (int)(pixel(x,y).g*brightness);
			if (g1 > 255)
				g1 = 255;
			if (g1 < 0)
				g1 = 0;
			b1 = (int)(pixel(x,y).b*brightness);
			if (b1 > 255)
				b1 = 255;
			if (b1 < 0)
				b1 = 0;

			outputImage.pixel(x,y).r = r1;
			outputImage.pixel(x,y).g = g1;
			outputImage.pixel(x,y).b = b1;
		}
    return 1;
}

int Image32::Luminance(Image32& outputImage) const
{
	return 0;
}

int Image32::Contrast(const float& contrast,Image32& outputImage) const
{
	return 0;
}

int Image32::Saturate(const float& saturation,Image32& outputImage) const
{
	return 0;
}

int Image32::Quantize(const int& bits,Image32& outputImage) const
{
	return 0;
}

int Image32::RandomDither(const int& bits,Image32& outputImage) const
{
	return 0;
}
int Image32::OrderedDither2X2(const int& bits,Image32& outputImage) const
{
	return 0;
}

int Image32::FloydSteinbergDither(const int& bits,Image32& outputImage) const
{
	return 0;
}

int Image32::Blur3X3(Image32& outputImage) const
{
	return 0;
}

int Image32::EdgeDetect3X3(Image32& outputImage) const
{
	return 0;
}
int Image32::ScaleNearest(const float& scaleFactor,Image32& outputImage) const
{
	return 0;
}

int Image32::ScaleBilinear(const float& scaleFactor,Image32& outputImage) const
{
	return 0;
}

int Image32::ScaleGaussian(const float& scaleFactor,Image32& outputImage) const
{
	return 0;
}

int Image32::RotateNearest(const float& angle,Image32& outputImage) const
{
	return 0;
}

int Image32::RotateBilinear(const float& angle,Image32& outputImage) const
{
	return 0;
}
	
int Image32::RotateGaussian(const float& angle,Image32& outputImage) const
{
	return 0;
}


int Image32::SetAlpha(const Image32& matte)
{
	return 0;
}

int Image32::Composite(const Image32& overlay,Image32& outputImage) const
{
	return 0;
}

int Image32::CrossDissolve(const Image32& source,const Image32& destination,const float& blendWeight,Image32& ouputImage)
{
	return 0;
}
int Image32::Warp(const OrientedLineSegmentPairs& olsp,Image32& outputImage) const
{
	return 0;
}

int Image32::FunFilter(Image32& outputImage) const
{
	return 0;
}

int Image32::Crop(const int& x1,const int& y1,const int& x2,const int& y2,Image32& outputImage) const
{
	return 0;
}

Pixel32 Image32::NearestSample(const float& x,const float& y) const
{
	return Pixel32();
}

Pixel32 Image32::BilinearSample(const float& x,const float& y) const
{
	return Pixel32();
}

Pixel32 Image32::GaussianSample(const float& x,const float& y,const float& variance,const float& radius) const
{
	return Pixel32();
}
