//
//  TestSample.m
//  CoreDataSample
//
//  Created by fifnel on 2013/01/27.
//  Copyright 2013年 fifnel. All rights reserved.
//

#import <GHUnitIOS/GHUnit.h>
#import <OCMock/OCMock.h>
 
@interface TestSample : GHTestCase { }
@end
 
@implementation TestSample

//Method called before each tests
- (void) setUp
{
    
}

//Method called before after each tests
- (void) tearDown
{
    
} 
 
- (void)testSimplePass {
	// Another test
}
 
- (void)testSimpleFail {
	GHAssertTrue(NO, nil);
}
 
@end