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
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;    
    
}
@property (strong, nonatomic) IBOutlet UIWindow *window;
- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
