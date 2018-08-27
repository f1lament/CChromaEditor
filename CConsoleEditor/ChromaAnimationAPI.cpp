#include "stdafx.h"
#include "ChromaAnimationAPI.h"

using namespace ChromaSDK;

#define CHROMASDK_DECLARE_METHOD_IMPL(Signature, FieldName) Signature ChromaAnimationAPI::FieldName = nullptr;

CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_FRAME, AddFrame)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES, AddNonZeroAllKeysAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, AddNonZeroAllKeysAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET, AddNonZeroAllKeysAllFramesOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, AddNonZeroAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_ALL_KEYS_OFFSET, AddNonZeroAllKeysOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_ALL_KEYS_OFFSET_NAME, AddNonZeroAllKeysOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET, AddNonZeroTargetAllKeysAllFramesOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, AddNonZeroTargetAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_OFFSET, AddNonZeroTargetAllKeysOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_OFFSET_NAME, AddNonZeroTargetAllKeysOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CLEAR_ALL, ClearAll)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CLEAR_ANIMATION_TYPE, ClearAnimationType)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CLOSE_ALL, CloseAll)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CLOSE_ANIMATION, CloseAnimation)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CLOSE_ANIMATION_NAME, CloseAnimationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CLOSE_COMPOSITE, CloseComposite)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_KEY_COLOR_NAME, CopyKeyColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS, CopyNonZeroAllKeys)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, CopyNonZeroAllKeysAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET, CopyNonZeroAllKeysAllFramesOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, CopyNonZeroAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS_NAME, CopyNonZeroAllKeysName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS_OFFSET, CopyNonZeroAllKeysOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_ALL_KEYS_OFFSET_NAME, CopyNonZeroAllKeysOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_NAME, CopyNonZeroTargetAllKeysAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET, CopyNonZeroTargetAllKeysAllFramesOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, CopyNonZeroTargetAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_OFFSET, CopyNonZeroTargetAllKeysOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_OFFSET_NAME, CopyNonZeroTargetAllKeysOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_ZERO_ALL_KEYS_ALL_FRAMES_NAME, CopyZeroAllKeysAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_ZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, CopyZeroAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_COPY_ZERO_TARGET_ALL_KEYS_ALL_FRAMES_NAME, CopyZeroTargetAllKeysAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CREATE_ANIMATION, CreateAnimation)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CREATE_ANIMATION_IN_MEMORY, CreateAnimationInMemory)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_CREATE_EFFECT, CreateEffect)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DELETE_EFFECT, DeleteEffect)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DUPLICATE_FIRST_FRAME, DuplicateFirstFrame)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DUPLICATE_FIRST_FRAME_NAME, DuplicateFirstFrameName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DUPLICATE_FRAMES, DuplicateFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DUPLICATE_FRAMES_NAME, DuplicateFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DUPLICATE_MIRROR_FRAMES, DuplicateMirrorFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_DUPLICATE_MIRROR_FRAMES_NAME, DuplicateMirrorFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FADE_END_FRAMES, FadeEndFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FADE_END_FRAMES_NAME, FadeEndFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FADE_START_FRAMES, FadeStartFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FADE_START_FRAMES_NAME, FadeStartFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_COLOR_ALL_FRAMES_RGB_NAME, FillColorAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_COLOR_RGB_NAME, FillColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_NONZERO_COLOR_ALL_FRAMES_RGB_NAME, FillNonZeroColorAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_NONZERO_COLOR_NAME, FillNonZeroColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_NONZERO_COLOR_RGB_NAME, FillNonZeroColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS, FillRandomColors)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_ALL_FRAMES, FillRandomColorsAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_ALL_FRAMES_NAME, FillRandomColorsAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE, FillRandomColorsBlackAndWhite)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE_ALL_FRAMES, FillRandomColorsBlackAndWhiteAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE_ALL_FRAMES_NAME, FillRandomColorsBlackAndWhiteAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE_NAME, FillRandomColorsBlackAndWhiteName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_RANDOM_COLORS_NAME, FillRandomColorsName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS, FillThresholdColors)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES, FillThresholdColorsAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES_NAME, FillThresholdColorsAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES_RGB, FillThresholdColorsAllFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES_RGB_NAME, FillThresholdColorsAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_ALL_FRAMES_RGB, FillThresholdColorsMinMaxAllFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_ALL_FRAMES_RGB_NAME, FillThresholdColorsMinMaxAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_RGB, FillThresholdColorsMinMaxRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_RGB_NAME, FillThresholdColorsMinMaxRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_NAME, FillThresholdColorsName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_RGB, FillThresholdColorsRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_THRESHOLD_COLORS_RGB_NAME, FillThresholdColorsRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR, FillZeroColor)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR_ALL_FRAMES, FillZeroColorAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR_ALL_FRAMES_NAME, FillZeroColorAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR_ALL_FRAMES_RGB, FillZeroColorAllFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR_ALL_FRAMES_RGB_NAME, FillZeroColorAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR_NAME, FillZeroColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_FILL_ZERO_COLOR_RGB_NAME, FillZeroColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_ANIMATION, GetAnimation)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_ANIMATION_COUNT, GetAnimationCount)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_ANIMATION_ID, GetAnimationId)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_ANIMATION_NAME, GetAnimationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_FRAME, GetFrame)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_FRAME_COUNT_NAME, GetFrameCountName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_MAX_COLUMN, GetMaxColumn)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_MAX_ROW, GetMaxRow)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_PLAYING_ANIMATION_COUNT, GetPlayingAnimationCount)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_PLAYING_ANIMATION_ID, GetPlayingAnimationId)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_GET_RGB, GetRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_INIT, Init)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_INSERT_DELAY, InsertDelay)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_INSERT_DELAY_NAME, InsertDelayName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_INSERT_FRAME, InsertFrame)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_INSERT_FRAME_NAME, InsertFrameName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_IS_DIALOG_OPEN, IsDialogOpen)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_IS_INITIALIZED, IsInitialized)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_IS_INITIALIZED, IsInitialized2)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_IS_PLAYING_NAME, IsPlayingName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_IS_PLAYING_TYPE, IsPlayingType)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_LOAD_ANIMATION_NAME, LoadAnimationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_LOAD_COMPOSITE, LoadComposite)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES, MakeBlankFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_NAME, MakeBlankFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_RANDOM, MakeBlankFramesRandom)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_RANDOM_BLACK_AND_WHITE, MakeBlankFramesRandomBlackAndWhite)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_RANDOM_BLACK_AND_WHITE_NAME, MakeBlankFramesRandomBlackAndWhiteName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_RANDOM_NAME, MakeBlankFramesRandomName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_RGB, MakeBlankFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MAKE_BLANK_FRAMES_RGB_NAME, MakeBlankFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_ALL_FRAMES, MultiplyIntensityAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_ALL_FRAMES_NAME, MultiplyIntensityAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_ALL_FRAMES_RGB_NAME, MultiplyIntensityAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_COLOR, MultiplyIntensityColor)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_COLOR_NAME, MultiplyIntensityColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_NAME, MultiplyIntensityName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_MULTIPLY_INTENSITY_RGB_NAME, MultiplyIntensityRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OFFSET_COLORS_ALL_FRAMES_NAME, OffsetColorsAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OFFSET_COLORS_NAME, OffsetColorsName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OFFSET_NONZERO_COLORS_ALL_FRAMES_NAME, OffsetNonZeroColorsAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OFFSET_NONZERO_COLORS_NAME, OffsetNonZeroColorsName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OPEN_ANIMATION, OpenAnimation)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OPEN_EDITOR_DIALOG, OpenEditorDialog)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OPEN_EDITOR_DIALOG_AND_PLAY, OpenEditorDialogAndPlay)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OVERRIDE_FRAME_DURATION, OverrideFrameDuration)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_OVERRIDE_FRAME_DURATION_NAME, OverrideFrameDurationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_PLAY_ANIMATION, PlayAnimation)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_PLAY_ANIMATION_LOOP, PlayAnimationLoop)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_PLAY_ANIMATION_NAME, PlayAnimationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_PLAY_COMPOSITE, PlayComposite)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_PREVIEW_FRAME, PreviewFrame)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_REDUCE_FRAMES, ReduceFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_REDUCE_FRAMES_NAME, ReduceFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_REVERSE_ALL_FRAMES_NAME, ReverseAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_CHROMA_CUSTOM_COLOR_ALL_FRAMES, SetChromaCustomColorAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_CHROMA_CUSTOM_COLOR_ALL_FRAMES_NAME, SetChromaCustomColorAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_CHROMA_CUSTOM_FLAG, SetChromaCustomFlag)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_CHROMA_CUSTOM_FLAG_NAME, SetChromaCustomFlagName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_EFFECT, SetEffect)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR, SetKeyColor)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_ALL_FRAMES, SetKeyColorAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_ALL_FRAMES_NAME, SetKeyColorAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_ALL_FRAMES_RGB, SetKeyColorAllFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_ALL_FRAMES_RGB_NAME, SetKeyColorAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_NAME, SetKeyColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_RGB, SetKeyColorRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_COLOR_RGB_NAME, SetKeyColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_NONZERO_COLOR_NAME, SetKeyNonZeroColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_NONZERO_COLOR_RGB, SetKeyNonZeroColorRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_NONZERO_COLOR_RGB_NAME, SetKeyNonZeroColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_ZERO_COLOR_NAME, SetKeyZeroColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_ZERO_COLOR_RGB, SetKeyZeroColorRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEY_ZERO_COLOR_RGB_NAME, SetKeyZeroColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES, SetKeysColorAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES_NAME, SetKeysColorAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES_RGB, SetKeysColorAllFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES_RGB_NAME, SetKeysColorAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_NAME, SetKeysColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_RGB, SetKeysColorRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_COLOR_RGB_NAME, SetKeysColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_NONZERO_COLOR_NAME, SetKeysNonZeroColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_NONZERO_COLOR_RGB, SetKeysNonZeroColorRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_NONZERO_COLOR_RGB_NAME, SetKeysNonZeroColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_ZERO_COLOR_ALL_FRAMES_RGB, SetKeysZeroColorAllFramesRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_ZERO_COLOR_ALL_FRAMES_RGB_NAME, SetKeysZeroColorAllFramesRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_ZERO_COLOR_NAME, SetKeysZeroColorName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_ZERO_COLOR_RGB, SetKeysZeroColorRGB)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SET_KEYS_ZERO_COLOR_RGB_NAME, SetKeysZeroColorRGBName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_STOP_ALL, StopAll)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_STOP_ANIMATION_NAME, StopAnimationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_STOP_ANIMATION_TYPE, StopAnimationType)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_STOP_COMPOSITE, StopComposite)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES, SubtractNonZeroAllKeysAllFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, SubtractNonZeroAllKeysAllFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET, SubtractNonZeroAllKeysAllFramesOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, SubtractNonZeroAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_OFFSET, SubtractNonZeroAllKeysOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_OFFSET_NAME, SubtractNonZeroAllKeysOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET, SubtractNonZeroTargetAllKeysAllFramesOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, SubtractNonZeroTargetAllKeysAllFramesOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_OFFSET, SubtractNonZeroTargetAllKeysOffset)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_OFFSET_NAME, SubtractNonZeroTargetAllKeysOffsetName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_TRIM_END_FRAMES, TrimEndFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_TRIM_END_FRAMES_NAME, TrimEndFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_TRIM_FRAME, TrimFrame)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_TRIM_FRAME_NAME, TrimFrameName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_TRIM_START_FRAMES, TrimStartFrames)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_TRIM_START_FRAMES_NAME, TrimStartFramesName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_UNINIT, Uninit)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_UNLOAD_ANIMATION_NAME, UnloadAnimationName)
CHROMASDK_DECLARE_METHOD_IMPL(PLUGIN_UNLOAD_COMPOSITE, UnloadComposite)


#define CHROMASDK_VALIDATE_METHOD(Signature, FieldName) FieldName = (Signature) GetProcAddress(library, "Plugin" #FieldName); \
if (FieldName == nullptr) \
{ \
	fprintf(stderr, "Failed to find method: %s!\r\n", "Plugin" #FieldName); \
	return -1; \
}

int ChromaAnimationAPI::InitAPI()
{
	HMODULE library = LoadLibrary(CHROMA_EDITOR_DLL);
	if (library == NULL)
	{
		fprintf(stderr, "Failed to load Chroma Editor Library!\r\n");
		return -1;
	}

	//fprintf(stderr, "Loaded Chroma Editor DLL!\r\n");

	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_FRAME, AddFrame)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES, AddNonZeroAllKeysAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES, AddNonZeroAllKeysAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, AddNonZeroAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, AddNonZeroAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET, AddNonZeroAllKeysAllFramesOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, AddNonZeroAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_OFFSET, AddNonZeroAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_ALL_KEYS_OFFSET_NAME, AddNonZeroAllKeysOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET, AddNonZeroTargetAllKeysAllFramesOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, AddNonZeroTargetAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_OFFSET, AddNonZeroTargetAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_ADD_NONZERO_TARGET_ALL_KEYS_OFFSET_NAME, AddNonZeroTargetAllKeysOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CLEAR_ALL, ClearAll)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CLEAR_ANIMATION_TYPE, ClearAnimationType)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CLOSE_ALL, CloseAll)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CLOSE_ANIMATION, CloseAnimation)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CLOSE_ANIMATION_NAME, CloseAnimationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CLOSE_COMPOSITE, CloseComposite)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_KEY_COLOR_NAME, CopyKeyColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS, CopyNonZeroAllKeys)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, CopyNonZeroAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET, CopyNonZeroAllKeysAllFramesOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, CopyNonZeroAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_NAME, CopyNonZeroAllKeysName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_OFFSET, CopyNonZeroAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_OFFSET, CopyNonZeroAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_ALL_KEYS_OFFSET_NAME, CopyNonZeroAllKeysOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_NAME, CopyNonZeroTargetAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET, CopyNonZeroTargetAllKeysAllFramesOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, CopyNonZeroTargetAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_OFFSET, CopyNonZeroTargetAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_NONZERO_TARGET_ALL_KEYS_OFFSET_NAME, CopyNonZeroTargetAllKeysOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_ZERO_ALL_KEYS_ALL_FRAMES_NAME, CopyZeroAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_ZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, CopyZeroAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_COPY_ZERO_TARGET_ALL_KEYS_ALL_FRAMES_NAME, CopyZeroTargetAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CREATE_ANIMATION, CreateAnimation)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CREATE_ANIMATION_IN_MEMORY, CreateAnimationInMemory)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_CREATE_EFFECT, CreateEffect)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DELETE_EFFECT, DeleteEffect)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DUPLICATE_FIRST_FRAME, DuplicateFirstFrame)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DUPLICATE_FIRST_FRAME_NAME, DuplicateFirstFrameName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DUPLICATE_FRAMES, DuplicateFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DUPLICATE_FRAMES_NAME, DuplicateFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DUPLICATE_MIRROR_FRAMES, DuplicateMirrorFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_DUPLICATE_MIRROR_FRAMES_NAME, DuplicateMirrorFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FADE_END_FRAMES, FadeEndFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FADE_END_FRAMES_NAME, FadeEndFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FADE_START_FRAMES, FadeStartFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FADE_START_FRAMES_NAME, FadeStartFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_COLOR_ALL_FRAMES_RGB_NAME, FillColorAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_COLOR_RGB_NAME, FillColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_NONZERO_COLOR_ALL_FRAMES_RGB_NAME, FillNonZeroColorAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_NONZERO_COLOR_NAME, FillNonZeroColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_NONZERO_COLOR_RGB_NAME, FillNonZeroColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS, FillRandomColors)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_ALL_FRAMES, FillRandomColorsAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_ALL_FRAMES_NAME, FillRandomColorsAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE, FillRandomColorsBlackAndWhite)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE_ALL_FRAMES, FillRandomColorsBlackAndWhiteAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE_ALL_FRAMES_NAME, FillRandomColorsBlackAndWhiteAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_BLACK_AND_WHITE_NAME, FillRandomColorsBlackAndWhiteName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_RANDOM_COLORS_NAME, FillRandomColorsName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS, FillThresholdColors)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES, FillThresholdColorsAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES_NAME, FillThresholdColorsAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES_RGB, FillThresholdColorsAllFramesRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_ALL_FRAMES_RGB_NAME, FillThresholdColorsAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_ALL_FRAMES_RGB, FillThresholdColorsMinMaxAllFramesRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_ALL_FRAMES_RGB_NAME, FillThresholdColorsMinMaxAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_RGB, FillThresholdColorsMinMaxRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_MIN_MAX_RGB_NAME, FillThresholdColorsMinMaxRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_NAME, FillThresholdColorsName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_RGB, FillThresholdColorsRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_THRESHOLD_COLORS_RGB_NAME, FillThresholdColorsRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_ZERO_COLOR_ALL_FRAMES_NAME, FillZeroColorAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_ZERO_COLOR_ALL_FRAMES_RGB_NAME, FillZeroColorAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_ZERO_COLOR_NAME, FillZeroColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_FILL_ZERO_COLOR_RGB_NAME, FillZeroColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_ANIMATION, GetAnimation)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_ANIMATION_COUNT, GetAnimationCount)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_ANIMATION_ID, GetAnimationId)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_ANIMATION_NAME, GetAnimationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_FRAME, GetFrame)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_FRAME_COUNT_NAME, GetFrameCountName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_MAX_COLUMN, GetMaxColumn)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_MAX_ROW, GetMaxRow)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_PLAYING_ANIMATION_COUNT, GetPlayingAnimationCount)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_PLAYING_ANIMATION_ID, GetPlayingAnimationId)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_GET_RGB, GetRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_INIT, Init)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_INSERT_DELAY, InsertDelay)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_INSERT_DELAY_NAME, InsertDelayName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_INSERT_FRAME, InsertFrame)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_INSERT_FRAME_NAME, InsertFrameName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_IS_DIALOG_OPEN, IsDialogOpen)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_IS_INITIALIZED, IsInitialized)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_IS_PLAYING_NAME, IsPlayingName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_IS_PLAYING_TYPE, IsPlayingType)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_LOAD_ANIMATION_NAME, LoadAnimationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_LOAD_COMPOSITE, LoadComposite)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES, MakeBlankFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_NAME, MakeBlankFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_RANDOM, MakeBlankFramesRandom)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_RANDOM_BLACK_AND_WHITE, MakeBlankFramesRandomBlackAndWhite)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_RANDOM_BLACK_AND_WHITE_NAME, MakeBlankFramesRandomBlackAndWhiteName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_RANDOM_NAME, MakeBlankFramesRandomName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_RGB, MakeBlankFramesRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MAKE_BLANK_FRAMES_RGB_NAME, MakeBlankFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_ALL_FRAMES, MultiplyIntensityAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_ALL_FRAMES_NAME, MultiplyIntensityAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_ALL_FRAMES_RGB_NAME, MultiplyIntensityAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_COLOR, MultiplyIntensityColor)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_COLOR_NAME, MultiplyIntensityColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_NAME, MultiplyIntensityName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_MULTIPLY_INTENSITY_RGB_NAME, MultiplyIntensityRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OFFSET_COLORS_ALL_FRAMES_NAME, OffsetColorsAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OFFSET_COLORS_NAME, OffsetColorsName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OFFSET_NONZERO_COLORS_ALL_FRAMES_NAME, OffsetNonZeroColorsAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OFFSET_NONZERO_COLORS_NAME, OffsetNonZeroColorsName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OPEN_ANIMATION, OpenAnimation)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OPEN_EDITOR_DIALOG, OpenEditorDialog)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OPEN_EDITOR_DIALOG_AND_PLAY, OpenEditorDialogAndPlay)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OVERRIDE_FRAME_DURATION, OverrideFrameDuration)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_OVERRIDE_FRAME_DURATION_NAME, OverrideFrameDurationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_PLAY_ANIMATION, PlayAnimation)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_PLAY_ANIMATION_LOOP, PlayAnimationLoop)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_PLAY_ANIMATION_NAME, PlayAnimationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_PLAY_COMPOSITE, PlayComposite)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_PREVIEW_FRAME, PreviewFrame)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_REDUCE_FRAMES, ReduceFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_REDUCE_FRAMES_NAME, ReduceFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_REVERSE_ALL_FRAMES_NAME, ReverseAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_CHROMA_CUSTOM_COLOR_ALL_FRAMES, SetChromaCustomColorAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_CHROMA_CUSTOM_COLOR_ALL_FRAMES_NAME, SetChromaCustomColorAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_CHROMA_CUSTOM_FLAG, SetChromaCustomFlag)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_CHROMA_CUSTOM_FLAG_NAME, SetChromaCustomFlagName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_EFFECT, SetEffect)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR, SetKeyColor)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_ALL_FRAMES, SetKeyColorAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_ALL_FRAMES_NAME, SetKeyColorAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_ALL_FRAMES_RGB, SetKeyColorAllFramesRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_ALL_FRAMES_RGB_NAME, SetKeyColorAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_NAME, SetKeyColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_RGB, SetKeyColorRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_COLOR_RGB_NAME, SetKeyColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_NONZERO_COLOR_NAME, SetKeyNonZeroColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_NONZERO_COLOR_RGB, SetKeyNonZeroColorRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_NONZERO_COLOR_RGB_NAME, SetKeyNonZeroColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_ZERO_COLOR_NAME, SetKeyZeroColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_ZERO_COLOR_RGB, SetKeyZeroColorRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEY_ZERO_COLOR_RGB_NAME, SetKeyZeroColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES, SetKeysColorAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES_NAME, SetKeysColorAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES_RGB, SetKeysColorAllFramesRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_ALL_FRAMES_RGB_NAME, SetKeysColorAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_NAME, SetKeysColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_RGB, SetKeysColorRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_COLOR_RGB_NAME, SetKeysColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_NONZERO_COLOR_NAME, SetKeysNonZeroColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_NONZERO_COLOR_RGB, SetKeysNonZeroColorRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_NONZERO_COLOR_RGB_NAME, SetKeysNonZeroColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_ZERO_COLOR_ALL_FRAMES_RGB, SetKeysZeroColorAllFramesRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_ZERO_COLOR_ALL_FRAMES_RGB_NAME, SetKeysZeroColorAllFramesRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_ZERO_COLOR_NAME, SetKeysZeroColorName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_ZERO_COLOR_RGB, SetKeysZeroColorRGB)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SET_KEYS_ZERO_COLOR_RGB_NAME, SetKeysZeroColorRGBName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_STOP_ALL, StopAll)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_STOP_ANIMATION_NAME, StopAnimationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_STOP_ANIMATION_TYPE, StopAnimationType)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_STOP_COMPOSITE, StopComposite)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES, SubtractNonZeroAllKeysAllFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES_NAME, SubtractNonZeroAllKeysAllFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET, SubtractNonZeroAllKeysAllFramesOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, SubtractNonZeroAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_OFFSET, SubtractNonZeroAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_ALL_KEYS_OFFSET_NAME, SubtractNonZeroAllKeysOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET, SubtractNonZeroTargetAllKeysAllFramesOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_ALL_FRAMES_OFFSET_NAME, SubtractNonZeroTargetAllKeysAllFramesOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_OFFSET, SubtractNonZeroTargetAllKeysOffset)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_SUBTRACT_NONZERO_TARGET_ALL_KEYS_OFFSET_NAME, SubtractNonZeroTargetAllKeysOffsetName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_TRIM_END_FRAMES, TrimEndFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_TRIM_END_FRAMES_NAME, TrimEndFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_TRIM_FRAME, TrimFrame)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_TRIM_FRAME_NAME, TrimFrameName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_TRIM_START_FRAMES, TrimStartFrames)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_TRIM_START_FRAMES_NAME, TrimStartFramesName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_UNINIT, Uninit)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_UNLOAD_ANIMATION_NAME, UnloadAnimationName)
	CHROMASDK_VALIDATE_METHOD(PLUGIN_UNLOAD_COMPOSITE, UnloadComposite)


	fprintf(stdout, "Validated all DLL methods [success]\r\n");
	return 0;
}

float ChromaAnimationAPI::Lerp(float start, float end, float amt)
{
	return (1 - amt)*start + amt * end;
}

int ChromaAnimationAPI::LerpColor(int from, int to, float t) {
	int red = floor(Lerp((from & 0xFF), (to & 0xFF), t));
	int green = floor(Lerp((from & 0xFF00) >> 8, (to & 0xFF00) >> 8, t));
	int blue = floor(Lerp((from & 0xFF0000) >> 16, (to & 0xFF0000) >> 16, t));
	int color = red | (green << 8) | (blue << 16);
	return color;
}
