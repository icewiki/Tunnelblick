/*
 * Copyright 2016, 2017 Jonathan K. Bullard. All rights reserved.
 *
 *  This file is part of Tunnelblick.
 *
 *  Tunnelblick is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2
 *  as published by the Free Software Foundation.
 *
 *  Tunnelblick is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program (see the file COPYING included with this
 *  distribution); if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *  or see http://www.gnu.org/licenses/.
 */

// THIS FILE IS IDENTICAL TO TBPopUpButton.h except for the class and base class

#import "defines.h"

@class MAAttachedWindow;
@class Tracker;

@interface TBButton : NSButton {
    
    BOOL                 mouseIsInButtonView;
    
    MAAttachedWindow   * attachedWindow;
    
    Tracker            * tracker;
    
    NSAttributedString * titleAS; // (Localized)
    CGFloat              minimumWidth;
    CGFloat              startWidth;
}

-(void) setTitle: (NSString *)           label
	   infoTitle: (NSAttributedString *) infoTitle
		disabled: (BOOL)                 disabled;

-(void) setTitle: (NSString *)           label
	   infoTitle: (NSAttributedString *) infoTitle;

-(void) setState:           (NSCellStateValue) newState;

-(void) setAttributedTitle: (NSAttributedString *) newTitle;

-(void) setStartWidth:      (CGFloat)              startWidth;

-(void) setMinimumWidth:    (CGFloat)              minimumWidth;

-(void) mouseExitedTrackingArea: (NSEvent *) theEvent;

@end

