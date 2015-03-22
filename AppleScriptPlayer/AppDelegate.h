//
//  AppDelegate.h
//  AppleScriptPlayer
//
//  Created by Kevin Mook on 3/22/15.
//  Copyright (c) 2015 Kevin Mook. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CocoaLibSpotify/CocoaLibSpotify.h>

@interface AppleScriptPlayerAppDelegate : NSObject  <NSApplicationDelegate, SPSessionDelegate> {
@private
    NSWindow *__unsafe_unretained window;
    NSPanel *__unsafe_unretained loginSheet;
    NSTextField *__weak userNameField;
    NSSecureTextField *__weak passwordField;
    NSTimeInterval currentTrackPosition;
    
    SPPlaybackManager *playbackManager;
    NSTextField *__weak trackURLField;
    NSSlider *__weak playbackProgressSlider;
}

@property (weak) IBOutlet NSSlider *playbackProgressSlider;
@property (weak) IBOutlet NSTextField *trackURLField;
@property (weak) IBOutlet NSTextField *userNameField;
@property (weak) IBOutlet NSSecureTextField *passwordField;
@property (unsafe_unretained) IBOutlet NSPanel *loginSheet;
@property (unsafe_unretained) IBOutlet NSWindow *window;

- (IBAction)login:(id)sender;
- (IBAction)quitFromLoginSheet:(id)sender;

#pragma mark -

@property (nonatomic, readwrite, strong) SPPlaybackManager *playbackManager;

- (IBAction)playTrack:(id)sender;
- (IBAction)seekToPosition:(id)sender;

@end
