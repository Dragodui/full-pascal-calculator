Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button10_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure button6_Click(sender: Object; e: EventArgs);
    procedure button7_Click(sender: Object; e: EventArgs);
    procedure button8_Click(sender: Object; e: EventArgs);
    procedure button9_Click(sender: Object; e: EventArgs);
    procedure button12_Click(sender: Object; e: EventArgs);
    procedure button16_Click(sender: Object; e: EventArgs);
    procedure button13_Click(sender: Object; e: EventArgs);
    procedure button14_Click(sender: Object; e: EventArgs);
    procedure button11_Click(sender: Object; e: EventArgs);
    procedure button15_Click(sender: Object; e: EventArgs);
    procedure button17_Click(sender: Object; e: EventArgs);
    procedure button18_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    button2: Button;
    button3: Button;
    button4: Button;
    button5: Button;
    button6: Button;
    button7: Button;
    button8: Button;
    button9: Button;
    textBox1: TextBox;
    button11: Button;
    button12: Button;
    button13: Button;
    button14: Button;
    button15: Button;
    button16: Button;
    button17: Button;
    button18: Button;
    button10: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
var
kod : char;
x, y, z : real;
procedure Form1.button10_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '0';
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '1';
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '2';
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '3';
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '4';
end;

procedure Form1.button5_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '5';
end;

procedure Form1.button6_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '6';
end;

procedure Form1.button7_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '7';
end;

procedure Form1.button8_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '8';
end;

procedure Form1.button9_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Text :=TextBox1.Text + '9';
end;

procedure Form1.button12_Click(sender: Object; e: EventArgs);
begin
x:= strtofloat(TextBox1.text);
kod := '+';
TextBox1.Clear;
end;

procedure Form1.button16_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Clear
end;

procedure Form1.button13_Click(sender: Object; e: EventArgs);
begin
  x:= strtofloat(TextBox1.text);
kod := '-';
TextBox1.Clear;
end;

procedure Form1.button14_Click(sender: Object; e: EventArgs);
begin
  x:= strtofloat(TextBox1.text);
  kod := '*';
  TextBox1.Clear;
end;

procedure Form1.button11_Click(sender: Object; e: EventArgs);
begin
  x:= strtofloat(TextBox1.text);
  kod := '/';
  TextBox1.Clear;
end;

procedure Form1.button15_Click(sender: Object; e: EventArgs);
begin
  if TextBox1.Text<>'' then  y:=strtofloat(TextBox1.text);
    case kod of
    '+': z:=x+y;
    '-': z:=x-y;
    '*': z:=x*y;
    '/': z:=x/y;
    end;
TextBox1.Text:=floattostr(z);
end;

procedure Form1.button17_Click(sender: Object; e: EventArgs);
begin
  var
  dec, bin, rank, modulo: integer;
  dec := strtoint(TextBox1.text);
  bin := 0;
  rank := 1;
  while dec > 0 do
  begin
    modulo := dec mod 2;
    dec := dec div 2;
    bin := bin + modulo * rank;
    rank := rank * 10;  
  end;
  TextBox1.Text :=floattostr(bin);
end;

procedure Form1.button18_Click(sender: Object; e: EventArgs);
const digit:string[2]='01';
begin
var n,i:integer;
var s2:string;
  begin
    s2:=TextBox1.text;
    while s2[1]='0' do
    delete(s2,1,1);
    n:=0; 
    for i:=1 to length(s2) do
    n:=n*2+pos(s2[i],digit)-1;
    TextBox1.Text :=floattostr(n);
  end;
end;

end.
