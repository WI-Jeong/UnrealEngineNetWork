// Fill out your copyright notice in the Description page of Project Settings.


#include "JoinWidget.h"
#include "../Player/LoginPlayerController.h"

void UJoinWidget::NativeConstruct()
{
	Super::NativeConstruct();

	mIDInput = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("IDInput")));
	mPassInput = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("PassInput")));
	mAgeInput = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("AgeInput")));
	mPhoneInput = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("PhoneInput")));

	mJoinButton = Cast<UButton>(GetWidgetFromName(TEXT("JoinButton")));
	mCancelButton = Cast<UButton>(GetWidgetFromName(TEXT("CancelButton")));
}

void UJoinWidget::JoinClick()
{
}

void UJoinWidget::CancelClick()
{
}

void UJoinWidget::ClearInput()
{
}

bool UJoinWidget::IsEmptyInput()
{
	return false;
}
