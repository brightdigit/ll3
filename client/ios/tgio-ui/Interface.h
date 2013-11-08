//
//  Interface.h
//  tgio-ui
//
//  Created by Leo G Dion on 11/5/13.
//  Copyright (c) 2013 Leo Dion. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Interface <NSObject>

- (void) initialize;
- (void) loginUser:(NSString *) name withPassword:(NSString *) password target:(id) target action:(SEL) selector;
- (void) registerEmailAddress:(NSString *) emailAddress target:(id) target action:(SEL) selector;

+ (id<Interface>)instance;

@end
