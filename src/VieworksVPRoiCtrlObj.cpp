/* vieworks-vp plugin ROI class
 * Copyright (C) 2013 IPANEMA USR3461, CNRS/MCC.
 * Written by Serge Cohen <serge.cohen@synchrotron-soleil.fr>
 *
 * This file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3 of
 * the License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this file. If not, see <http://www.gnu.org/licenses/>.
 */

#include "VieworksVPRoiCtrlObj.h"

using namespace lima::VieworksVP;

//-----------------------------------------------------
// @brief Ctor
//-----------------------------------------------------
lima::VieworksVP::RoiCtrlObj::RoiCtrlObj(Camera& cam)
: m_cam(cam)
{
  DEB_CONSTRUCTOR();    
}

//-----------------------------------------------------
// @brief Dtor
//-----------------------------------------------------
lima::VieworksVP::RoiCtrlObj::~RoiCtrlObj()
{
  DEB_DESTRUCTOR();
}

//-----------------------------------------------------
// @brief
//-----------------------------------------------------
void
lima::VieworksVP::RoiCtrlObj::getRoi(Roi& roi)
{
  DEB_MEMBER_FUNCT();
  m_cam.getRoi(roi);
}

//-----------------------------------------------------
// @brief
//-----------------------------------------------------
void
lima::VieworksVP::RoiCtrlObj::checkRoi(const Roi& set_roi, Roi& hw_roi)
{
  DEB_MEMBER_FUNCT();
  m_cam.checkRoi(set_roi, hw_roi);
}

//-----------------------------------------------------
// @brief
//-----------------------------------------------------
void
lima::VieworksVP::RoiCtrlObj::setRoi(const Roi& roi)
{
  DEB_MEMBER_FUNCT();
  Roi real_roi;
  checkRoi(roi,real_roi);
  m_cam.setRoi(real_roi);
  
}

