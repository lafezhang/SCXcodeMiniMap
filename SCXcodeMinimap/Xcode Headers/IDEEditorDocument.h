/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AppKit/NSDocument.h>

@class DVTDispatchLock, DVTExtension, DVTFileDataType, DVTFilePath, DVTMapTable, DVTNotificationToken, DVTStackBacktrace, DVTUndoManager, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

@interface IDEEditorDocument : NSDocument
{
	DVTDispatchLock *_editorDocumentLock;
	DVTExtension *_extension;
	DVTFileDataType *_ide_hintedFileDataType;
	DVTFilePath *_filePath;
	DVTFilePath *autosavedContentsFilePath;
	DVTMapTable *_readOnlyClientsForRegistrationBacktrace;
	DVTNotificationToken *_willRedoChangeNotificationToken;
	DVTNotificationToken *_willUndoChangeNotificationToken;
	DVTStackBacktrace *_addedToDocumentControllerBacktrace;
	DVTStackBacktrace *_autosaveWithImplicitCancellabilityCallerBacktrace;
	DVTStackBacktrace *_beginUnlockingBacktrace;
	DVTStackBacktrace *_canCloseDocumentCallPriorToClosingDocumentStackBacktrace;
	DVTStackBacktrace *_continueActivityCallerBacktrace;
	DVTStackBacktrace *_continueAsynchronousWorkOnMainThreadCallerBacktrace;
	DVTStackBacktrace *_continueFileAccessCallerBacktrace;
	DVTStackBacktrace *_creationBacktrace;
	DVTStackBacktrace *_firstPerformActivityMessageBacktrace;
	DVTStackBacktrace *_invalidationBacktrace;
	DVTStackBacktrace *_lastUndoChangeNotificationBacktrace;
	DVTUndoManager *_dvtUndoManager;
	int _readOnlyStatus;
	NSDictionary *_willCloseNotificationUserInfo;
	NSMutableArray *_pendingChanges;
	NSMutableSet *_documentEditors;
	NSURL *_ide_representedURL;
	id _filePresenterWriter;
	BOOL _cachedHasRecentChanges;
	BOOL _didDisableAutomaticTermination;
	BOOL _ide_isTemporaryDocument;
	BOOL _inSetUndoManager;
	BOOL _inWriteSafelyToURL;
	BOOL _isAttemptingToRespondToSaveDocumentAction;
	BOOL _isClosing;
	BOOL _isClosingForRevert;
	BOOL _isInvalidated;
	BOOL _isRespondingToFSChanges;
	BOOL _isSafeToCallClose;
	BOOL _isUndoingAfterFailureToUnlockDocument;
	BOOL _isWritingToDisk;
	BOOL _shouldAssertIfNotInvalidatedBeforeDealloc;
	BOOL _trackFileSystemChanges;
	BOOL _wholeDocumentChanged;
	NSSet *_readOnlyClients;
	DVTFilePath *_autosavedContentsFilePath;
}

+ (BOOL)_presentsVersionsUserInterface;
+ (BOOL)autosavesInPlace;
+ (id)editedFileContents;
+ (id)readableTypes;
+ (BOOL)_validateDocumentExtension:(id)arg1;
+ (BOOL)_shouldShowUtilititesAreaAtLoadForSimpleFilesFocusedWorkspace;
+ (BOOL)shouldTrackFileSystemChanges;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
+ (void)initialize;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) DVTFilePath *autosavedContentsFilePath; // @synthesize autosavedContentsFilePath=_autosavedContentsFilePath;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property int readOnlyStatus; // @synthesize readOnlyStatus=_readOnlyStatus;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property BOOL trackFileSystemChanges; // @synthesize trackFileSystemChanges=_trackFileSystemChanges;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
- (void)unregisterReadOnlyClient:(id)arg1;
- (void)registerReadOnlyClient:(id)arg1;
@property(readonly) NSSet *readOnlyClients; // @synthesize readOnlyClients=_readOnlyClients;
- (BOOL)makeWritableWithError:(id *)arg1;
@property(readonly) NSURL *readOnlyItemURL;
- (void)_updateReadOnlyStatus;
- (void)exportDocument:(id)arg1;
@property(readonly) BOOL canExportDocument;
- (void)duplicateDocument:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (BOOL)_checkAutosavingPossibilityAndReturnError:(id *)arg1;
- (BOOL)checkAutosavingSafetyAndReturnError:(id *)arg1;
- (BOOL)editingShouldAutomaticallyDuplicate;
- (id)duplicateAndReturnError:(id *)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (BOOL)canRevert;
- (id)editedContents;
- (id)diffDataSource;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (id)emptyPrivateCopy;
- (id)privateCopy;
- (void)updateChangedLocation:(id)arg1;
- (void)_sendOutDocumentUpdateLocation;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(unsigned long long)arg2;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)ide_didFixupChangeCountWithWasEdited:(BOOL)arg1 didHaveEditsSinceLastUserInitiatedSave:(BOOL)arg2 changeString:(id)arg3;
- (BOOL)hasBeenEditedSinceLastUserInitiatedSave;
- (void)ide_revertDocumentToSaved:(id)arg1;
- (void)ide_moveDocumentTo:(id)arg1;
- (void)ide_renameDocument:(id)arg1;
- (void)ide_saveDocumentAs:(id)arg1;
- (void)ide_duplicateDocument:(id)arg1;
- (void)ide_saveDocument:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly) BOOL canSaveAs;
@property(readonly) BOOL canSave;
- (BOOL)isClosingForRevert;
- (void)didExternallyRelocateFileContent;
- (void)willExternallyRelocateFileContent;
- (void)closeToRevert;
@property(readonly, getter=isClosed) BOOL closed;
- (void)close;
- (BOOL)_isClosing;
- (void)closePrivateDocumentSynchronously;
- (void)tryCloseAsynchronouslyWithCompletionBlock:(id)arg1;
- (void)_tryCloseAsynchronouslyToRevert:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_tryCloseAsynchronouslyToRevert:(BOOL)arg1 promptForUnsavedChanges:(BOOL)arg2 withCompletionBlock:(id)arg3;
- (void)_canCloseAsynchronouslyToRevert:(BOOL)arg1 promptForUnsavedChanges:(BOOL)arg2 withCompletionBlock:(id)arg3;
- (void)performActivityWithSynchronousWaiting:(BOOL)arg1 usingBlock:(id)arg2;
- (void)_didAddToDocumentController;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)ide_editorDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
@property(readonly) NSString *messageForIsValidAssertion;
- (void)editorDocumentDidClose;
- (void)editorDocumentWillClose;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (void)_handleDocumentFileChanges:(id)arg1;
- (id)windowForSheet;
- (BOOL)_windowForSheet:(id *)arg1 workspaceForSheet:(id *)arg2 editor:(id *)arg3;
- (id)ide_displayName;
- (void)setAutosavedContentsFileURL:(id)arg1;
- (id)autosavedContentsFileURL;
- (void)setFileURL:(id)arg1;
- (id)fileURL;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (void)saveForOperation:(unsigned long long)arg1 withCompletionHandler:(id)arg2;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)ide_finishSaving:(BOOL)arg1 forSaveOperation:(unsigned long long)arg2 previousPath:(id)arg3;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(unsigned long long)arg2;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)unregisterDocumentEditor:(id)arg1;
- (void)registerDocumentEditor:(id)arg1;
- (id)_documentEditors;
- (void)undoManagerWillModifyItself:(id)arg1;
- (void)setHasUndoManager:(BOOL)arg1;
- (void)setUndoManager:(id)arg1;
- (void)ide_setUndoManager:(id)arg1;
- (id)undoManager;
- (void)teardownUndoManager:(id)arg1;
- (void)setupUndoManager:(id)arg1;
- (id)newUndoManager;
- (void)_startUnlockIfNeededForWorkspace:(id)arg1 window:(id)arg2 completionBlock:(id)arg3;
- (void)_unlockIfNeededCompletionBlock:(id)arg1;
- (id)init;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)autosaveWithImplicitCancellability:(BOOL)arg1 completionHandler:(id)arg2;
- (void)continueAsynchronousWorkOnMainThreadUsingBlock:(id)arg1;
- (void)continueActivityUsingBlock:(id)arg1;
- (void)continueFileAccessUsingBlock:(id)arg1;
- (void)setSdefSupport_displayName:(id)arg1;
- (id)sdefSupport_displayName;
@property(retain) DVTFileDataType *ide_hintedFileDataType;
@property(copy) NSURL *ide_representedURL;
@property(readonly) BOOL ide_isTextRepresentation;
- (void)convertToDocumentAtFilePath:(id)arg1 forFileDataType:(id)arg2 completionBlock:(id)arg3;
@property BOOL ide_isTemporaryDocument;

@end
