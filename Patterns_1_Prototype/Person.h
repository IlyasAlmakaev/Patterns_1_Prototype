//
//  Person.h
//  Patterns_1_Prototype
//
//  Created by Ильяс on 15.06.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject <NSCopying>

@property (nonatomic, weak) NSString *name;
@property (nonatomic, weak) NSString *surname;
@property (nonatomic, weak) NSString *age;

-(id) copyWithZone:(NSZone *)zone;

@end
