//
//  QuizSundayAppDelegate.h
//  QuizSunday
//
//  Created by Richard Barrett-Small on 04/03/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizSundayAppDelegate : UIResponder <UIApplicationDelegate> {
    
    int currentQuestionIndex;
    
    // Models
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // Views
    IBOutlet UILabel *questionField; // pointer
    IBOutlet UILabel *answerField;  // pointer
    
}
@property (strong, nonatomic) IBOutlet UIWindow *window;
- (IBAction)showQuestion:(id)sender; // target for action
- (IBAction)showAnswer:(id)sender; // target for action

@end
