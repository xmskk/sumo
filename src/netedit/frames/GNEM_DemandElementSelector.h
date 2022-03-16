/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2022 German Aerospace Center (DLR) and others.
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// https://www.eclipse.org/legal/epl-2.0/
// This Source Code may also be made available under the following Secondary
// Licenses when the conditions for such availability set forth in the Eclipse
// Public License 2.0 are satisfied: GNU General Public License, version 2
// or later which is available at
// https://www.gnu.org/licenses/old-licenses/gpl-2.0-standalone.html
// SPDX-License-Identifier: EPL-2.0 OR GPL-2.0-or-later
/****************************************************************************/
/// @file    GNEFrameModules.h
/// @author  Pablo Alvarez Lopez
/// @date    Aug 2019
///
// Auxiliar class for GNEFrame Modules
/****************************************************************************/
#pragma once
#include <config.h>

#include <netedit/GNEViewNetHelper.h>
#include <netedit/elements/GNEAttributeCarrier.h>
#include <utils/foxtools/FXGroupBoxModule.h>
#include <utils/foxtools/FXTreeListDinamic.h>
#include <utils/foxtools/MFXIconComboBox.h>

// ===========================================================================
// class declaration
// ===========================================================================

class GNEFrame;

// ===========================================================================
// class definitions
// ===========================================================================

class DemandElementSelector : public FXGroupBoxModule {
    /// @brief FOX-declaration
    FXDECLARE(DemandElementSelector)

public:
    /// @brief constructor with a single tag
    DemandElementSelector(GNEFrame* frameParent, SumoXMLTag demandElementTag, GNEDemandElement* defaultElement = nullptr);

    /// @brief constructor with tag type
    DemandElementSelector(GNEFrame* frameParent, const std::vector<GNETagProperties::TagType>& tagTypes);

    /// @brief destructor
    ~DemandElementSelector();

    /// @brief get current demand element
    GNEDemandElement* getCurrentDemandElement() const;

    // @brief obtain allowed tags (derived from tagTypes)
    const std::vector<SumoXMLTag>& getAllowedTags() const;

    /// @brief set current demand element
    void setDemandElement(GNEDemandElement* demandElement);

    /// @brief show demand element selector
    void showDemandElementSelector();

    /// @brief hide demand element selector
    void hideDemandElementSelector();

    /// @brief check if demand element selector is shown
    bool isDemandElementSelectorShown() const;

    /// @brief refresh demand element selector
    void refreshDemandElementSelector();

    /// @brief get previous edge for the current person plan
    GNEEdge* getPersonPlanPreviousEdge() const;

    /// @brief get previous edge for the current container plan
    GNEEdge* getContainerPlanPreviousEdge() const;

    /// @name FOX-callbacks
    /// @{
    /// @brief Called when the user select another demand elementelement in ComboBox
    long onCmdSelectDemandElement(FXObject*, FXSelector, void*);
    /// @}

protected:
    FOX_CONSTRUCTOR(DemandElementSelector)

private:
    /// @brief pointer to frame Parent
    GNEFrame* myFrameParent;

    /// @brief comboBox with the list of elements type
    MFXIconComboBox* myDemandElementsMatchBox;

    /// @brief current demand element
    GNEDemandElement* myCurrentDemandElement;

    /// @brief demand element tags
    std::vector<SumoXMLTag> myDemandElementTags;
};
