//
//  AppMode.h
//  martian-terrain
//
//  Created by Sidharth Mishra on 5/20/18.
//

#ifndef AppMode_h
#define AppMode_h

namespace sidmishraw_martian {
  
  /**
   * AppMode is an enumeration of all the possible application modes the tool can be in.
   */
  enum AppMode {
    NORMAL,                         // normal mode
    POINT_SELECTION_MODE,           // select the point to retarget the camera
    PATH_CREATION_MODE,             // create the path for the rover to follow
    PATH_EDIT_MODE,                 // edit the path the rover is following
    ROVER_ANIMATION_MODE,           // animate the rover -- move
    ANIMATION_BEGIN_SELECTION_MODE  // select the starting point for the animation
  };
  
}

#endif /* AppMode_h */
