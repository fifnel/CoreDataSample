//
//  CoreDataSingleton.h
//  CoreDataSample
//
//  Created by fifnel on 2013/01/24.
//  Copyright 2013年 fifnel. All rights reserved.
//	File created using Singleton XCode Template by Mugunth Kumar (http://blog.mugunthkumar.com)
//  More information about this template on the post http://mk.sg/89
//  Permission granted to do anything, commercial/non-commercial with this file apart from removing the line/URL above

#import <Foundation/Foundation.h>
#import <Coredata/CoreData.h>

@interface CoreDataSingleton : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (CoreDataSingleton*) sharedInstance;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
