/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2021 German Aerospace Center (DLR) and others.
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
/// @file    GNEPathManager.h
/// @author  Pablo Alvarez Lopez
/// @date    Feb 2011
///
// Manager for paths in NETEDIT (routes, trips, flows...)
/****************************************************************************/
#pragma once
#include <config.h>


// ===========================================================================
// class definitions
// ===========================================================================

class GNEPathManager : public GUISUMOAbstractView {

public:
    /// @brief constructor
    GNEPathManager();

    /// @brief destructor
    ~GNEPathManager();

private:
    /// @brief Invalidated copy constructor.
    GNEPathManager(const GNEPathManager&) = delete;

    /// @brief Invalidated assignment operator.
    GNEPathManager& operator=(const GNEPathManager&) = delete;
};
