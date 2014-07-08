/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@class NSMutableDictionary, CPMLSchema, NSMutableString, NSDictionary, NSMutableArray, NSString;

@interface CPMLDB : NSObject  {
    unsigned long long *repFields;
    unsigned long long maxFieldCount;
    unsigned int commitCountMax;
    unsigned int currentCommitCount;
    unsigned int rowCount;
    double *cardinality;
    double *min;
    double *max;
    double *mean;
    double *sumOfX;
    double *sumOfXX;
    double *sigma;
    CPMLSchema *cpSchema;
    NSMutableArray *indexer;
    NSMutableDictionary *vectorListCardinality;
    NSMutableString *dbTableName;
    double currentTimeInterval;
    double minTimeToLogIndex;
    int _openCPMLDBOptions;
    NSDictionary *_cInfo;
    NSString *_trainingModelFileAndPath;
    NSString *_trainingFile;
    struct sqlite3 { } *db;
    NSString *_dbFileName;
}

@property(readonly) struct sqlite3 { }* db;
@property(readonly) NSString * dbFileName;
@property(readonly) CPMLSchema * cpSchema;

+ (id)getConfigurationFromPlist:(id)arg1;

- (id)dbFileName;
- (id)cpSchema;
- (id)extractRow:(id)arg1;
- (void)performanceTestDB;
- (id)addValues:(int)arg1;
- (void)printFormat:(id)arg1;
- (void)updateCardinality:(id)arg1 withColPos:(int)arg2;
- (id)getRepresentation:(id)arg1 withColPos:(int)arg2;
- (void)deleteAllRows:(id)arg1;
- (void)deleteRow:(id)arg1 whereMatch:(id)arg2;
- (void)updateTable:(id)arg1 withAttribute:(id)arg2 whereMatch:(id)arg3;
- (void)queryDatabase:(id)arg1 whereMatch:(id)arg2;
- (void)addColumnToTable:(id)arg1 withNewColumn:(id)arg2;
- (bool)logBatchNSDictionary:(id)arg1;
- (bool)logBatchNSArray:(id)arg1;
- (bool)logNSObjectV:(id)arg1;
- (bool)logCTypesV:(void*)arg1;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (void)removeTrainingRow:(id)arg1;
- (id)prepQueryStatementForTable:(id)arg1;
- (void)updateStatistics;
- (void)dropCommands:(id)arg1;
- (double)columnQueryFor:(unsigned int)arg1 withQuery:(id)arg2;
- (void)execSQLCommand:(id)arg1;
- (void)updateStatisticsReal:(double)arg1 colPosition:(unsigned long long)arg2;
- (bool)logNSArray:(id)arg1;
- (void)saveStatistics;
- (double)updateStatisticsString:(id)arg1 colPosition:(unsigned long long)arg2;
- (id)prepInsertStatementForMainTable;
- (void)doInitializeWithDataFile:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (void)doInitCommon:(id)arg1 withDict:(id)arg2 withFileExists:(bool*)arg3 withWriteOptions:(int)arg4;
- (void)loadTables;
- (void)indexTable:(id)arg1 withColumn:(id)arg2;
- (void)initStatisticsTable;
- (bool)loadStatisticTable;
- (void)initMaxSizeStatistics:(unsigned long long)arg1;
- (void)insertIntoTable:(id)arg1 withTuple:(id)arg2;
- (void)createTable:(id)arg1 withSchema:(id)arg2 withExistingTable:(bool)arg3;
- (void)doInitialize:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withPlistPath:(id)arg3 withWriteOptions:(int)arg4;
- (bool)logNSDictionary:(id)arg1;
- (int)getVectorContent:(unsigned long long)arg1;
- (id)getColumnName:(unsigned long long)arg1;
- (id)getRemapTable;
- (double)getMaxFor:(unsigned int)arg1;
- (double)getMinFor:(unsigned int)arg1;
- (double)getStdDevFor:(unsigned int)arg1;
- (double)getMeanFor:(unsigned int)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (unsigned long long)getCardinality:(unsigned int)arg1;
- (bool)isColumnContinousData:(unsigned int)arg1;
- (unsigned long long)getRowCount;
- (unsigned long long)getCombinedRemapTableCardinality:(unsigned int)arg1;
- (int)getYColumnPosition;
- (unsigned long long)getColumnCount;
- (id)fileProtectionClassRequest:(id)arg1;
- (void)removeTrainingRowData:(double)arg1;
- (void)flushDB;
- (id)initWithDBName:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (id)initWithDBName:(id)arg1 withPlistPath:(id)arg2 withWriteOptions:(int)arg3;
- (struct sqlite3 { }*)db;
- (void)restart;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)reset;

@end