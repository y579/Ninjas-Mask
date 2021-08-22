package;
import flixel.system.FlxSplash;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;

class PlayState extends FlxState
{
	var bosslmao:FlxSprite;
	var enemy:FlxSprite;
	var enemyname:String;
	var jumpSplash:FlxSplash;
	var bossname:String;
	var swordupgrades:Array<Dynamic> = [
		['Rusty Sword', 'Samurai Sword', 'Golden Sword', 'Void Sword']
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

		ninjaguy = new FlxSprite();
		ninjaguy.loadGraphic(AssetPaths.NinjaSprite__png);
		ninjaguy.setGraphicSize(Std.int(ninjaguy.height *2));
		add(ninjaguy);
		switch (swordupgrades) {
			case ['Rusty Sword']: damage = 1;
			case ['Samurai Sword']: damage = 3;
			default: ['Rusty Sword'];
				
		}
				
		};
		/*
		 switch (enemyname) 
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