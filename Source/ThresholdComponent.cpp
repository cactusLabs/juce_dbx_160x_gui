/*
  ==============================================================================

    ThresholdComponent.cpp
    Created: 27 Nov 2023 2:13:37pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "ThresholdComponent.h"

const int border = 2;

//==============================================================================
ThresholdComponent::ThresholdComponent()
{
    threshold.setSliderStyle(juce::Slider::Rotary);
    threshold.setNumDecimalPlacesToDisplay(3);
    threshold.setRange(-40, 10);
    threshold.setValue(0); // initialisation
    threshold.setSkewFactorFromMidPoint(0); // make curve more logarithmic

    //threshold.setColour(juce::Slider::ColourIds::thumbColourId, juce::Colours::red);
    threshold.setLookAndFeel(&thresholdLookAndFeel);

    threshold.setTextValueSuffix(" dBm");
    threshold.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 120, threshold.getTextBoxHeight());
    addAndMakeVisible(threshold);
}

ThresholdComponent::~ThresholdComponent()
{
}

void ThresholdComponent::paint (juce::Graphics& g)
{
    threshold.setBounds(0, 0, getLocalBounds().getWidth(), getLocalBounds().getHeight());
}

void ThresholdComponent::resized()
{
    threshold.setBounds(0, 0, getLocalBounds().getWidth(), getLocalBounds().getHeight());
}
