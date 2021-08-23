package;
import flixel.input.gamepad.mappings.FlxGamepadMapping;
import flixel.system.FlxSplash;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
	var bosslmao:FlxSprite;
	var enemy:FlxSprite;
	var enemyname:String;
	var jumpSplash:FlxSplash;
	var bossname:String;
	var swordupgrades:Array<Dynamic> = [
		['Rusty Sword', 'Samurai Sword', 'Golden Sword', 'Obsisian Sword', 'Sword of the Void']
	];
	var sworddesc:String;
	var bosstitle:String; // this is underneath boss name
	var ground:FlxSprite;
	var ninjaguy:FlxSprite;
	var damage:Int;
	var playerhealth:Int;
	var	enemyhealth:Int;
	override public function create()
	{
		super.create();

		ninjaguy = new FlxSprite(0, 300);
		ninjaguy.loadGraphic(AssetPaths.NinjaSprite__png);
		ninjaguy.setGraphicSize(Std.int(ninjaguy.height *2));
		add(ninjaguy);
		switch (swordupgrades) {
			case ['Rusty Sword']: damage = 1; sworddesc = 'A rusty sword you found at the start of your journey. \nIt looks familiar and oddly, curved.';
			case ['Samurai Sword']: damage = 3;  sworddesc = 'You polished up that old sword of yours.\n it turned out to be a legendary samurai sword owned by your father';
			case ['Golden Sword']: damage = 5; sworddesc = 'Placeholder';
			case ['Obsisian Sword'] : damage = 7;
			case ['Sword of the Void'] : damage = 10;

			default: ['Rusty Sword'];
				
		}
				
		};
		
		/* switch (enemyname) 
		{
				


		}
		switch (bossname)
		{

		}
		*/

	

	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.justReleased.ESCAPE)
			FlxG.switchState(new TitleState());
		}
}