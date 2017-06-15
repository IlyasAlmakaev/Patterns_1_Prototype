//
//  Person.m
//  Patterns_1_Prototype
//
//  Created by Ильяс on 15.06.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import "Person.h"

@implementation Person

-(id) copyWithZone:(NSZone *)zone {
    
    Person *copy = [[self class] allocWithZone:zone];
    copy.name = self.name;
    copy.surname = self.surname;
    copy.age = self.age;
    
    return copy;
}

@end
