//
//  ViewController.h
//  HearMeNow
//
//  Created by Matthew Knott on 16/12/2013.
//  Copyright (c) 2013 Matthew Knott. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;

@end
