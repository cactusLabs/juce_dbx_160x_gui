/*
  ==============================================================================

    OutputGainComponent.cpp
    Created: 27 Nov 2023 4:47:11pm
    Author:  Ruggles

  ==============================================================================
*/

#include <JuceHeader.h>
#include "OutputGainComponent.h"

const int border = 2;

//==============================================================================
OutputGainComponent::OutputGainComponent()
{
    outputGain.setSliderStyle(juce::Slider::Rotary);
    outputGain.setNumDecimalPlacesToDisplay(1);
    outputGain.setRange(-20, 10);
    outputGain.setValue(0); // initialisation
    outputGain.setSkewFactorFromMidPoint(0); // make curve more logarithmic

    outputGain.setColour(juce::Slider::ColourIds::thumbColourId, juce::Colours::green);

    outputGain.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 120, outputGain.getTextBoxHeight());
    addAndMakeVisible(outputGain);
}

OutputGainComponent::~OutputGainComponent()
{
}

void OutputGainComponent::paint (juce::Graphics& g)
{
    outputGain.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight());
}

void OutputGainComponent::resized()
{
    outputGain.setBounds(0, 0, getLocalBounds().getWidth() - border, getLocalBounds().getHeight());
}
