/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSArray, NSString;

@interface QueryOperations : NSOperation
{
    id _completion;
    int _queryType;
    NSString *_manualFileName;
    NSString *_functionName;
    NSArray *_graphArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSArray *graphArray; // @synthesize graphArray=_graphArray;
- (id)init;
- (id)initWithCompletion:(id)arg1;
- (void)main;
@property(retain, nonatomic) NSString *manualFileName; // @synthesize manualFileName=_manualFileName;
@property(nonatomic) int queryType; // @synthesize queryType=_queryType;

@end

