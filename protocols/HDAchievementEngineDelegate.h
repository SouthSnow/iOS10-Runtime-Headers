/* Generated by RuntimeBrowser.
 */

@protocol HDAchievementEngineDelegate <NSObject>

@required

- (long long)activityCacheIndexToday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (HKQuantity *)calorieGoalToday;
- (HKQuantity *)calorieGoalYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (NSDate *)currentDate;
- (unsigned int)numberOfSessionsCompletedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 minimumSessionDuration:(double)arg3;
- (NSArray *)sessionsEndingAfterDate:(NSDate *)arg1;
- (unsigned int)standingHoursToday;
- (unsigned int)standingHoursYesterday;
- (unsigned int)stepsTakenToday;
- (unsigned int)stepsTakenYesterday;

@end