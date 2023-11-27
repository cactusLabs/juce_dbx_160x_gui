#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (880, 80);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);

    addAndMakeVisible(layout);
    addAndMakeVisible(logo);
    addAndMakeVisible(model);

    addAndMakeVisible(outputGain);
    addAndMakeVisible(ratio);
    addAndMakeVisible(threshold);

    logo.setBounds(layout.logo);
    model.setBounds(layout.model);

    outputGain.setBounds(layout.outputGain);
    ratio.setBounds(layout.ratio);
    threshold.setBounds(layout.threshold);
}

void MainComponent::resized()
{
    layout.setBounds(getBounds());    
    logo.setBounds(layout.logo);
    model.setBounds(layout.model);

    outputGain.setBounds(layout.outputGain);
    ratio.setBounds(layout.ratio);
    threshold.setBounds(layout.threshold);
}
