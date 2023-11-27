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

    layout.setBounds(getBounds());
    logo.setBounds(layout.logo);
    model.setBounds(layout.model);

    // User controls...
    addAndMakeVisible(bypass);
    addAndMakeVisible(inOut);
    addAndMakeVisible(outputGain);
    addAndMakeVisible(overEasy);
    addAndMakeVisible(ratio);
    addAndMakeVisible(threshold);

    bypass.setBounds(layout.bypass);
    inOut.setBounds(layout.inOut);
    outputGain.setBounds(layout.outputGain);
    overEasy.setBounds(layout.overEasy);
    ratio.setBounds(layout.ratio);
    threshold.setBounds(layout.threshold);
}

void MainComponent::resized()
{
    layout.setBounds(getBounds());    
    logo.setBounds(layout.logo);
    model.setBounds(layout.model);

    bypass.setBounds(layout.bypass);
    inOut.setBounds(layout.inOut);
    outputGain.setBounds(layout.outputGain);
    overEasy.setBounds(layout.overEasy);
    ratio.setBounds(layout.ratio);
    threshold.setBounds(layout.threshold);
}
