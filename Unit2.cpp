//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2* Form2;
char currentPlayer = 'x';
bool TForm2::CheckIsWinner()
{
	if (!(Button36->Text.IsEmpty()) and Button36->Text[0] == char(Button37->Text[0] & Button38->Text[0] & Button39->Text[0]) ) {
		return true;
	}
	if (!(Button37->Text.IsEmpty()) and Button37->Text[0] == char(Button38->Text[0] & Button39->Text[0] & Button40->Text[0]) ) {
		return true;
	}
	if (!(Button38->Text.IsEmpty()) and Button38->Text[0] == char(Button40->Text[0] & Button39->Text[0] & Button41->Text[0]) ) {
		return true;
	}
	if (!(Button39->Text.IsEmpty()) and Button39->Text[0] == char(Button40->Text[0] & Button41->Text[0] & Button42->Text[0]) ) {
		return true;
	}
	if (!(Button29->Text.IsEmpty()) and Button29->Text[0] == char(Button30->Text[0] & Button31->Text[0] & Button32->Text[0]) ) {
		return true;
	}
	if (!(Button30->Text.IsEmpty()) and Button30->Text[0] == char(Button31->Text[0] & Button32->Text[0] & Button33->Text[0]) ) {
		return true;
	}
	if (!(Button31->Text.IsEmpty()) and Button31->Text[0] == char(Button32->Text[0] & Button33->Text[0] & Button34->Text[0]) ) {
		return true;
	}
	if (!(Button32->Text.IsEmpty()) and Button32->Text[0] == char(Button33->Text[0] & Button34->Text[0] & Button35->Text[0]) ) {
		return true;
	}
	if (!(Button22->Text.IsEmpty()) and Button22->Text[0] == char(Button23->Text[0] & Button24->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button23->Text.IsEmpty()) and Button23->Text[0] == char(Button26->Text[0] & Button24->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button24->Text.IsEmpty()) and Button24->Text[0] == char(Button26->Text[0] & Button27->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button25->Text.IsEmpty()) and Button25->Text[0] == char(Button26->Text[0] & Button27->Text[0] & Button28->Text[0]) ) {
		return true;
	}
	if (!(Button15->Text.IsEmpty()) and Button15->Text[0] == char(Button16->Text[0] & Button17->Text[0] & Button18->Text[0]) ) {
		return true;
	}
	if (!(Button16->Text.IsEmpty()) and Button16->Text[0] == char(Button17->Text[0] & Button18->Text[0] & Button19->Text[0]) ) {
		return true;
	}
	if (!(Button17->Text.IsEmpty()) and Button17->Text[0] == char(Button18->Text[0] & Button19->Text[0] & Button20->Text[0]) ) {
		return true;
	}
	if (!(Button18->Text.IsEmpty()) and Button18->Text[0] == char(Button19->Text[0] & Button20->Text[0] & Button21->Text[0]) ) {
		return true;
	}
	if (!(Button8->Text.IsEmpty()) and Button8->Text[0]   == char(Button9->Text[0] & Button10->Text[0] & Button11->Text[0]) ) {
		return true;
	}
	if (!(Button9->Text.IsEmpty()) and Button9->Text[0]   == char(Button12->Text[0] & Button10->Text[0] & Button11->Text[0]) ) {
		return true;
	}
	if (!(Button10->Text.IsEmpty()) and Button10->Text[0] == char(Button12->Text[0] & Button13->Text[0] & Button11->Text[0]) ) {
		return true;
	}
	if (!(Button11->Text.IsEmpty()) and Button11->Text[0] == char(Button12->Text[0] & Button13->Text[0] & Button14->Text[0]) ) {
		return true;
	}
	if (!(Button1->Text.IsEmpty()) and Button1->Text[0]   == char(Button3->Text[0] & Button2->Text[0] & Button4->Text[0]) ) {
		return true;
	}
	if (!(Button2->Text.IsEmpty()) and Button2->Text[0]   == char(Button3->Text[0] & Button4->Text[0] & Button5->Text[0]) ) {
		return true;
	}
	if (!(Button3->Text.IsEmpty()) and Button3->Text[0]   == char(Button6->Text[0] & Button4->Text[0] & Button5->Text[0]) ) {
		return true;
	}
	if (!(Button4->Text.IsEmpty()) and Button4->Text[0]   == char(Button5->Text[0] & Button6->Text[0] & Button7->Text[0]) ) {
		return true;
	}
	if (!(Button36->Text.IsEmpty()) and Button36->Text[0] == char(Button29->Text[0] & Button22->Text[0] & Button15->Text[0]) ) {
		return true;
	}
	if (!(Button29->Text.IsEmpty()) and Button29->Text[0] == char(Button8->Text[0] & Button22->Text[0] & Button15->Text[0]) ) {
		return true;
	}
	if (!(Button22->Text.IsEmpty()) and Button22->Text[0] == char(Button8->Text[0] & Button15->Text[0] & Button1->Text[0]) ) {
		return true;
	}
	if (!(Button22->Text.IsEmpty()) and Button22->Text[0] == char(Button23->Text[0] & Button24->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button37->Text.IsEmpty()) and Button37->Text[0] == char(Button30->Text[0] & Button23->Text[0] & Button16->Text[0]) ) {
		return true;
	}
	if (!(Button30->Text.IsEmpty()) and Button30->Text[0] == char(Button23->Text[0] & Button16->Text[0] & Button9->Text[0]) ) {
		return true;
	}
	if (!(Button23->Text.IsEmpty()) and Button23->Text[0] == char(Button16->Text[0] & Button9->Text[0] & Button2->Text[0]) ) {
		return true;
	}
	if (!(Button38->Text.IsEmpty()) and Button38->Text[0] == char(Button31->Text[0] & Button24->Text[0] & Button17->Text[0]) ) {
		return true;
	}
	if (!(Button31->Text.IsEmpty()) and Button31->Text[0] == char(Button17->Text[0] & Button24->Text[0] & Button10->Text[0]) ) {
		return true;
	}
	if (!(Button24->Text.IsEmpty()) and Button24->Text[0] == char(Button17->Text[0] & Button10->Text[0] & Button3->Text[0]) ) {
		return true;
	}
	if (!(Button39->Text.IsEmpty()) and Button39->Text[0] == char(Button32->Text[0] & Button25->Text[0] & Button18->Text[0]) ) {
		return true;
	}
	if (!(Button32->Text.IsEmpty()) and Button32->Text[0] == char(Button18->Text[0] & Button11->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button25->Text.IsEmpty()) and Button25->Text[0] == char(Button18->Text[0] & Button11->Text[0] & Button4->Text[0]) ) {
		return true;
	}
	if (!(Button40->Text.IsEmpty()) and Button40->Text[0] == char(Button33->Text[0] & Button26->Text[0] & Button19->Text[0]) ) {
		return true;
	}
	if (!(Button33->Text.IsEmpty()) and Button33->Text[0] == char(Button26->Text[0] & Button19->Text[0] & Button12->Text[0]) ) {
		return true;
	}
	if (!(Button26->Text.IsEmpty()) and Button26->Text[0] == char(Button19->Text[0] & Button12->Text[0] & Button5->Text[0]) ) {
		return true;
	}
	if (!(Button41->Text.IsEmpty()) and Button41->Text[0] == char(Button34->Text[0] & Button27->Text[0] & Button20->Text[0]) ) {
		return true;
	}
	if (!(Button34->Text.IsEmpty()) and Button34->Text[0] == char(Button27->Text[0] & Button20->Text[0] & Button13->Text[0]) ) {
		return true;
	}
	if (!(Button27->Text.IsEmpty()) and Button27->Text[0] == char(Button20->Text[0] & Button13->Text[0] & Button6->Text[0]) ) {
		return true;
	}
	if (!(Button42->Text.IsEmpty()) and Button42->Text[0] == char(Button35->Text[0] & Button28->Text[0] & Button21->Text[0]) ) {
		return true;
	}
	if (!(Button35->Text.IsEmpty()) and Button35->Text[0] == char(Button28->Text[0] & Button21->Text[0] & Button14->Text[0]) ) {
		return true;
	}
	if (!(Button28->Text.IsEmpty()) and Button28->Text[0] == char(Button21->Text[0] & Button14->Text[0] & Button7->Text[0]) ) {
		return true;
	}
	if (!(Button22->Text.IsEmpty()) and Button22->Text[0] == char(Button16->Text[0] & Button10->Text[0] & Button4->Text[0]) ) {
		return true;
	}
	if (!(Button29->Text.IsEmpty()) and Button29->Text[0] == char(Button23->Text[0] & Button17->Text[0] & Button11->Text[0]) ) {
		return true;
	}
	if (!(Button23->Text.IsEmpty()) and Button23->Text[0] == char(Button17->Text[0] & Button11->Text[0] & Button5->Text[0]) ) {
		return true;
	}
	if (!(Button36->Text.IsEmpty()) and Button36->Text[0] == char(Button30->Text[0] & Button24->Text[0] & Button18->Text[0]) ) {
		return true;
	}
	if (!(Button30->Text.IsEmpty()) and Button30->Text[0] == char(Button18->Text[0] & Button24->Text[0] & Button12->Text[0]) ) {
		return true;
	}
	if (!(Button24->Text.IsEmpty()) and Button24->Text[0] == char(Button18->Text[0] & Button12->Text[0] & Button6->Text[0]) ) {
		return true;
	}
	if (!(Button37->Text.IsEmpty()) and Button37->Text[0] == char(Button31->Text[0] & Button25->Text[0] & Button19->Text[0]) ) {
		return true;
	}
	if (!(Button31->Text.IsEmpty()) and Button31->Text[0] == char(Button25->Text[0] & Button19->Text[0] & Button13->Text[0]) ) {
		return true;
	}
	if (!(Button25->Text.IsEmpty()) and Button25->Text[0] == char(Button19->Text[0] & Button13->Text[0] & Button7->Text[0]) ) {
		return true;
	}
	if (!(Button38->Text.IsEmpty()) and Button38->Text[0] == char(Button32->Text[0] & Button26->Text[0] & Button20->Text[0]) ) {
		return true;
	}
	if (!(Button32->Text.IsEmpty()) and Button32->Text[0] == char(Button26->Text[0] & Button20->Text[0] & Button14->Text[0]) ) {
		return true;
	}
	if (!(Button39->Text.IsEmpty()) and Button39->Text[0] == char(Button33->Text[0] & Button27->Text[0] & Button21->Text[0]) ) {
		return true;
	}
	if (!(Button39->Text.IsEmpty()) and Button39->Text[0] == char(Button31->Text[0] & Button23->Text[0] & Button15->Text[0]) ) {
		return true;
	}
	if (!(Button40->Text.IsEmpty()) and Button40->Text[0] == char(Button32->Text[0] & Button24->Text[0] & Button16->Text[0]) ) {
		return true;
	}
	if (!(Button32->Text.IsEmpty()) and Button32->Text[0] == char(Button16->Text[0] & Button24->Text[0] & Button8->Text[0]) ) {
		return true;
	}
	if (!(Button41->Text.IsEmpty()) and Button41->Text[0] == char(Button33->Text[0] & Button17->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button33->Text.IsEmpty()) and Button33->Text[0] == char(Button17->Text[0] & Button9->Text[0] & Button25->Text[0]) ) {
		return true;
	}
	if (!(Button25->Text.IsEmpty()) and Button25->Text[0] == char(Button17->Text[0] & Button9->Text[0] & Button1->Text[0]) ) {
		return true;
	}
	if (!(Button42->Text.IsEmpty()) and Button42->Text[0] == char(Button34->Text[0] & Button26->Text[0] & Button18->Text[0]) ) {
		return true;
	}
	if (!(Button34->Text.IsEmpty()) and Button34->Text[0] == char(Button26->Text[0] & Button18->Text[0] & Button10->Text[0]) ) {
		return true;
	}
	if (!(Button26->Text.IsEmpty()) and Button26->Text[0] == char(Button18->Text[0] & Button10->Text[0] & Button2->Text[0]) ) {
		return true;
	}
	if (!(Button35->Text.IsEmpty()) and Button35->Text[0] == char(Button27->Text[0] & Button19->Text[0] & Button11->Text[0]) ) {
		return true;
	}
	if (!(Button27->Text.IsEmpty()) and Button27->Text[0] == char(Button19->Text[0] & Button11->Text[0] & Button3->Text[0]) ) {
		return true;
	}
	if (!(Button28->Text.IsEmpty()) and Button28->Text[0] == char(Button20->Text[0] & Button12->Text[0] & Button4->Text[0]) ) {
		return true;
	}

	return false;
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner)
{
	currentPlayerSymbol->Text = currentPlayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ButtonClick(TObject *Sender)
{
	TButton* clickedButto = dynamic_cast<TButton*>(Sender);
	clickedButto->Text = currentPlayer;


	if(CheckIsWinner())
	{
	   winnerLabel->Text="YOU WON!!!";
	   return;
	}
	else if(!CheckIsWinner())
	{
	   winnerLabel->Text="DRAW!!!";
	   return;
	}
	if (currentPlayer == 'x')
		{currentPlayer = 'o';}
	else
		{currentPlayer = 'x';}
	currentPlayerSymbol->Text = currentPlayer;
}
//---------------------------------------------------------------------------

