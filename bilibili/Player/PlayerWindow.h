//
//  PlayerWindow.h
//  bilibili
//
//  Created by TYPCN on 2016/3/4.
//  Copyright © 2016 TYPCN. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Player.h"

@interface PlayerWindow : NSWindow <NSWindowDelegate>

@property (strong) NSWindowController* postCommentWindowC;
@property (weak) Player *player;
@property (weak) NSWindow *lastWindow;

-(void)keyDown:(NSEvent*)event;

@end