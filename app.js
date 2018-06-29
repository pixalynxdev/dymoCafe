const Dymo = require('dymojs'),
       dymo = new Dymo();

var name = "Wasif";
var coffe = "Hot Chocolate";


//dymo.print('DYMO LabelWriter 450', labelXml);
dymo.getPrinters().then(result =>{
    console.log(result);
})
console.log("print");
var labelXml = `
<?xml version="1.0" encoding="utf-8"?>
<DieCutLabel Version="8.0" Units="twips">
	<PaperOrientation>Landscape</PaperOrientation>
	<Id>Address</Id>
	<IsOutlined>false</IsOutlined>
	<PaperName>30252 Address</PaperName>
	<DrawCommands>
		<RoundRectangle X="0" Y="0" Width="1581" Height="5040" Rx="270" Ry="270" />
	</DrawCommands>
	<ObjectInfo>
		<TextObject>
			<Name>TEXT</Name>
			<ForeColor Alpha="255" Red="0" Green="0" Blue="0" />
			<BackColor Alpha="0" Red="255" Green="255" Blue="255" />
			<LinkedObjectName />
			<Rotation>Rotation0</Rotation>
			<IsMirrored>False</IsMirrored>
			<IsVariable>False</IsVariable>
			<GroupID>-1</GroupID>
			<IsOutlined>False</IsOutlined>
			<HorizontalAlignment>Left</HorizontalAlignment>
			<VerticalAlignment>Top</VerticalAlignment>
			<TextFitMode>ShrinkToFit</TextFitMode>
			<UseFullFontHeight>True</UseFullFontHeight>
			<Verticalized>False</Verticalized>
			<StyledText>
				<Element>
					<String xml:space="preserve">test</String>
					<Attributes>
						<Font Family="Arial" Size="12" Bold="False" Italic="False" Underline="False" Strikeout="False" />
						<ForeColor Alpha="255" Red="0" Green="0" Blue="0" HueScale="100" />
					</Attributes>
				</Element>
			</StyledText>
		</TextObject>
		<Bounds X="331" Y="150" Width="4622" Height="285" />
	</ObjectInfo>
	<ObjectInfo>
		<TextObject>
			<Name>TEXT_1</Name>
			<ForeColor Alpha="255" Red="0" Green="0" Blue="0" />
			<BackColor Alpha="0" Red="255" Green="255" Blue="255" />
			<LinkedObjectName />
			<Rotation>Rotation0</Rotation>
			<IsMirrored>False</IsMirrored>
			<IsVariable>False</IsVariable>
			<GroupID>-1</GroupID>
			<IsOutlined>False</IsOutlined>
			<HorizontalAlignment>Left</HorizontalAlignment>
			<VerticalAlignment>Top</VerticalAlignment>
			<TextFitMode>ShrinkToFit</TextFitMode>
			<UseFullFontHeight>True</UseFullFontHeight>
			<Verticalized>False</Verticalized>
			<StyledText>
				<Element>
					<String xml:space="preserve">test</String>
					<Attributes>
						<Font Family="Arial" Size="12" Bold="False" Italic="False" Underline="False" Strikeout="False" />
						<ForeColor Alpha="255" Red="0" Green="0" Blue="0" HueScale="100" />
					</Attributes>
				</Element>
			</StyledText>
		</TextObject>
		<Bounds X="331" Y="525" Width="4622" Height="285" />
	</ObjectInfo>
	<ObjectInfo>
		<DateTimeObject>
			<Name>DATE-TIME</Name>
			<ForeColor Alpha="255" Red="0" Green="0" Blue="0" />
			<BackColor Alpha="0" Red="255" Green="255" Blue="255" />
			<LinkedObjectName />
			<Rotation>Rotation0</Rotation>
			<IsMirrored>False</IsMirrored>
			<IsVariable>False</IsVariable>
			<GroupID>-1</GroupID>
			<IsOutlined>False</IsOutlined>
			<HorizontalAlignment>Left</HorizontalAlignment>
			<VerticalAlignment>Top</VerticalAlignment>
			<TextFitMode>ShrinkToFit</TextFitMode>
			<UseFullFontHeight>True</UseFullFontHeight>
			<Verticalized>False</Verticalized>
			<DateTimeFormat>LongSystemDate</DateTimeFormat>
			<Font Family="Arial" Size="12" Bold="False" Italic="False" Underline="False" Strikeout="False" />
			<PreText />
			<PostText />
			<IncludeTime>False</IncludeTime>
			<Use24HourFormat>False</Use24HourFormat>
		</DateTimeObject>
		<Bounds X="331" Y="1058" Width="2880" Height="315" />
	</ObjectInfo>
</DieCutLabel>`;