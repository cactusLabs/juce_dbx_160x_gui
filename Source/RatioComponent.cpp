/*
  ==============================================================================

    RatioComponent.cpp
    Created: 27 Nov 2023 3:00:00pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RatioComponent.h"

const int border = 2;

//==============================================================================
RatioComponent::RatioComponent()
{
    ratio.setSliderStyle(juce::Slider::Rotary);
    ratio.setNumDecimalPlacesToDisplay(1);
    ratio.setRange(1, 10);
    ratio.setValue(1); // initialisation
    ratio.setSkewFactorFromMidPoint(4); // make curve more logarithmic

    //ratio.setColour(juce::Slider::ColourIds::thumbColourId, juce::Colours::blue);
    ratio.setLookAndFeel(&ratioLookAndFeel);

    ratio.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 120, ratio.getTextBoxHeight());
    addAndMakeVisible(ratio);
}

RatioComponent::~RatioComponent()
{
}

void RatioComponent::paint (juce::Graphics& g)
{
    ratio.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight());
}

void RatioComponent::resized()
{
    ratio.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight());
}
