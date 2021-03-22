//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  BubbleCenterAndSize_types.h
//
//  Code generation for function 'BubbleCenterAndSize_types'
//


#ifndef BUBBLECENTERANDSIZE_TYPES_H
#define BUBBLECENTERANDSIZE_TYPES_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#ifdef _MSC_VER

#pragma warning(push)
#pragma warning(disable : 4251)

#endif

// Type Declarations
struct struct_T;
struct struct0_T;
struct b_struct_T;
class BubbleIdentifier;

// Type Definitions
struct struct_T
{
	boolean_T Area;
	boolean_T Centroid;
	boolean_T BoundingBox;
	boolean_T MajorAxisLength;
	boolean_T MinorAxisLength;
	boolean_T Eccentricity;
	boolean_T Orientation;
	boolean_T Image;
	boolean_T FilledImage;
	boolean_T FilledArea;
	boolean_T EulerNumber;
	boolean_T Extrema;
	boolean_T EquivDiameter;
	boolean_T Extent;
	boolean_T PixelIdxList;
	boolean_T PixelList;
	boolean_T Perimeter;
	boolean_T Circularity;
	boolean_T PixelValues;
	boolean_T WeightedCentroid;
	boolean_T MeanIntensity;
	boolean_T MinIntensity;
	boolean_T MaxIntensity;
	boolean_T SubarrayIdx;
};

struct struct0_T
{
	double Centroid[2];
	double MajorAxisLength;
	double MinorAxisLength;
};

struct b_struct_T
{
	double Area;
	double Centroid[2];
	double BoundingBox[4];
	double MajorAxisLength;
	double MinorAxisLength;
	double Eccentricity;
	double Orientation;
	coder::array<boolean_T, 2U> Image;
	coder::array<boolean_T, 2U> FilledImage;
	double FilledArea;
	double EulerNumber;
	double Extrema[16];
	double EquivDiameter;
	double Extent;
	coder::array<double, 1U> PixelIdxList;
	coder::array<double, 2U> PixelList;
	double Perimeter;
	double Circularity;
	coder::array<double, 1U> PixelValues;
	double WeightedCentroid[2];
	double MeanIntensity;
	double MinIntensity;
	double MaxIntensity;
	coder::array<double, 2U> SubarrayIdx;
	double SubarrayIdxLengths[2];
};

#ifdef _MSC_VER

#pragma warning(pop)

#endif
#endif

// End of code generation (BubbleCenterAndSize_types.h)
