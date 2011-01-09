/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDDocument, WDTableCell;



@interface WDText : NSObject 
{
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    NSInteger mTextType;
    WDTableCell *mTableCell;
}


- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2;
- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2 tableCell:(id)arg3;
- (void)dealloc;
- (id)blocks;
- (NSInteger)blockCount;
- (id)blockAt:(NSInteger)arg1;
- (id)lastBlock;
- (NSInteger)indexOfBlock:(id)arg1;
- (void)addBlock:(id)arg1;
- (id)document;
- (NSInteger)textType;
- (id)tableCell;
- (id)addParagraph;
- (id)addParagraphAtIndex:(NSInteger)arg1;
- (id)addTable;
- (id)addTableAtIndex:(NSInteger)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)removeLastBlock;
- (NSInteger)tableNestingLevel;
- (id)blockIterator;
- (id)runIterator;
- (BOOL)isEmpty;
- (id)content;

@end