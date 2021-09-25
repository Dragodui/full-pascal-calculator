procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.button6 := new System.Windows.Forms.Button();
        self.button7 := new System.Windows.Forms.Button();
        self.button8 := new System.Windows.Forms.Button();
        self.button9 := new System.Windows.Forms.Button();
        self.button10 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button11 := new System.Windows.Forms.Button();
        self.button12 := new System.Windows.Forms.Button();
        self.button13 := new System.Windows.Forms.Button();
        self.button14 := new System.Windows.Forms.Button();
        self.button15 := new System.Windows.Forms.Button();
        self.button16 := new System.Windows.Forms.Button();
        self.button17 := new System.Windows.Forms.Button();
        self.button18 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(45, 127);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(49, 46);
        self.button1.TabIndex := 0;
        self.button1.Text := '1';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(100, 127);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(49, 46);
        self.button2.TabIndex := 1;
        self.button2.Text := '2';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(155, 127);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(49, 46);
        self.button3.TabIndex := 2;
        self.button3.Text := '3';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(45, 179);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(49, 46);
        self.button4.TabIndex := 3;
        self.button4.Text := '4';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(100, 179);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(49, 46);
        self.button5.TabIndex := 4;
        self.button5.Text := '5';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // button6
        // 
        self.button6.Location := new System.Drawing.Point(155, 179);
        self.button6.Name := 'button6';
        self.button6.Size := new System.Drawing.Size(49, 46);
        self.button6.TabIndex := 5;
        self.button6.Text := '6';
        self.button6.UseVisualStyleBackColor := true;
        self.button6.Click += button6_Click;
        // 
        // button7
        // 
        self.button7.Location := new System.Drawing.Point(45, 231);
        self.button7.Name := 'button7';
        self.button7.Size := new System.Drawing.Size(49, 46);
        self.button7.TabIndex := 6;
        self.button7.Text := '7';
        self.button7.UseVisualStyleBackColor := true;
        self.button7.Click += button7_Click;
        // 
        // button8
        // 
        self.button8.Location := new System.Drawing.Point(100, 231);
        self.button8.Name := 'button8';
        self.button8.Size := new System.Drawing.Size(49, 46);
        self.button8.TabIndex := 7;
        self.button8.Text := '8';
        self.button8.UseVisualStyleBackColor := true;
        self.button8.Click += button8_Click;
        // 
        // button9
        // 
        self.button9.Location := new System.Drawing.Point(154, 231);
        self.button9.Name := 'button9';
        self.button9.Size := new System.Drawing.Size(49, 46);
        self.button9.TabIndex := 8;
        self.button9.Text := '9';
        self.button9.UseVisualStyleBackColor := true;
        self.button9.Click += button9_Click;
        // 
        // button10
        // 
        self.button10.Location := new System.Drawing.Point(100, 283);
        self.button10.Name := 'button10';
        self.button10.Size := new System.Drawing.Size(49, 46);
        self.button10.TabIndex := 9;
        self.button10.Text := '0';
        self.button10.UseVisualStyleBackColor := true;
        self.button10.Click += button10_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(94, 80);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(158, 20);
        self.textBox1.TabIndex := 10;
        // 
        // button11
        // 
        self.button11.Location := new System.Drawing.Point(155, 283);
        self.button11.Name := 'button11';
        self.button11.Size := new System.Drawing.Size(49, 46);
        self.button11.TabIndex := 11;
        self.button11.Text := '/';
        self.button11.UseVisualStyleBackColor := true;
        self.button11.Click += button11_Click;
        // 
        // button12
        // 
        self.button12.Location := new System.Drawing.Point(210, 231);
        self.button12.Name := 'button12';
        self.button12.Size := new System.Drawing.Size(49, 46);
        self.button12.TabIndex := 12;
        self.button12.Text := '+';
        self.button12.UseVisualStyleBackColor := true;
        self.button12.Click += button12_Click;
        // 
        // button13
        // 
        self.button13.Location := new System.Drawing.Point(210, 179);
        self.button13.Name := 'button13';
        self.button13.Size := new System.Drawing.Size(49, 46);
        self.button13.TabIndex := 13;
        self.button13.Text := '-';
        self.button13.UseVisualStyleBackColor := true;
        self.button13.Click += button13_Click;
        // 
        // button14
        // 
        self.button14.Location := new System.Drawing.Point(45, 283);
        self.button14.Name := 'button14';
        self.button14.Size := new System.Drawing.Size(49, 46);
        self.button14.TabIndex := 14;
        self.button14.Text := '*';
        self.button14.UseVisualStyleBackColor := true;
        self.button14.Click += button14_Click;
        // 
        // button15
        // 
        self.button15.Location := new System.Drawing.Point(209, 283);
        self.button15.Name := 'button15';
        self.button15.Size := new System.Drawing.Size(49, 46);
        self.button15.TabIndex := 15;
        self.button15.Text := '=';
        self.button15.UseVisualStyleBackColor := true;
        self.button15.Click += button15_Click;
        // 
        // button16
        // 
        self.button16.Location := new System.Drawing.Point(210, 127);
        self.button16.Name := 'button16';
        self.button16.Size := new System.Drawing.Size(49, 46);
        self.button16.TabIndex := 16;
        self.button16.Text := 'C';
        self.button16.UseVisualStyleBackColor := true;
        self.button16.Click += button16_Click;
        // 
        // button17
        // 
        self.button17.Location := new System.Drawing.Point(264, 127);
        self.button17.Name := 'button17';
        self.button17.Size := new System.Drawing.Size(49, 46);
        self.button17.TabIndex := 17;
        self.button17.Text := '10 to 2';
        self.button17.UseVisualStyleBackColor := true;
        self.button17.Click += button17_Click;
        // 
        // button18
        // 
        self.button18.Location := new System.Drawing.Point(264, 179);
        self.button18.Name := 'button18';
        self.button18.Size := new System.Drawing.Size(49, 46);
        self.button18.TabIndex := 18;
        self.button18.Text := '2 to 10';
        self.button18.UseVisualStyleBackColor := true;
        self.button18.Click += button18_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(359, 417);
        self.Controls.Add(self.button18);
        self.Controls.Add(self.button17);
        self.Controls.Add(self.button16);
        self.Controls.Add(self.button15);
        self.Controls.Add(self.button14);
        self.Controls.Add(self.button13);
        self.Controls.Add(self.button12);
        self.Controls.Add(self.button11);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button10);
        self.Controls.Add(self.button9);
        self.Controls.Add(self.button8);
        self.Controls.Add(self.button7);
        self.Controls.Add(self.button6);
        self.Controls.Add(self.button5);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
