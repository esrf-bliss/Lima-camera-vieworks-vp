#ifndef VIEWORKSVPSYNCCTRLOBJ_H
#define VIEWORKSVPSYNCCTRLOBJ_H

/* vieworks-vp plugin synchronisation information class
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

// System headers :

// Camera SDK headers :

// LImA headers :
#include "HwSyncCtrlObj.h"

// VieworksVP plugin headers :
#include "VieworksVPCamera.h"

namespace lima
{
  namespace VieworksVP
  {
    
    
    /*******************************************************************
     * \class SyncCtrlObj
     * \brief Control object providing VieworksVP synchronization interface
     *******************************************************************/
    
    class SyncCtrlObj : public HwSyncCtrlObj
    {
	    DEB_CLASS_NAMESPC(DebModCamera, "SyncCtrlObj", "VieworksVP");
      
    public:
	    SyncCtrlObj(Camera& cam);
	    virtual ~SyncCtrlObj();
      
	    virtual bool checkTrigMode(TrigMode trig_mode);
	    virtual void setTrigMode(TrigMode  trig_mode);
	    virtual void getTrigMode(TrigMode& trig_mode);
      
	    virtual void setExpTime(double  exp_time);
	    virtual void getExpTime(double& exp_time);
      
	    virtual void setLatTime(double  lat_time);
	    virtual void getLatTime(double& lat_time);
      
	    virtual void setNbHwFrames(int  nb_frames);
	    virtual void getNbHwFrames(int& nb_frames);
      
	    virtual void getValidRanges(ValidRangesType& valid_ranges);
      
    private:
	    Camera& m_cam;
    };
    
  } // namespace VieworksVP
} // namespace lima


#endif  /* VIEWORKSVPSYNCCTRLOBJ_H */

/*
 Local Variables:
 c-file-style: "gnu"
 End:
 */
